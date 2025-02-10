#!/usr/bin/env python3
##################################
# covergroupegen.py
#
# David_Harris@hmc.edu 15 August 2025
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
#
# Generate functional covergroups for RISC-V instructions
##################################

import os
import csv
import re
import sys

##################################
# Functions
##################################

# readTestplans iterates over all of the CSV testplan files in the testplans directory
# It poupulates a dictionary of dictionaries with
# the top level key being the architecture (e.g. RV64I)
# the second level key being the instruction mnemonic (e.g. add)
# the value being a list of covergroups for that instruction

def readTestplans():
    coverplanDir = f'{ARCH_VERIF}/testplans'
    testplans = dict()
    for file in os.listdir(coverplanDir):
        if file.endswith(".csv"):
            arch = re.search("(.*).csv", file).group(1)
            #print(os.path.join(coverplanDir, file)+ " " + arch)
            with open(os.path.join(coverplanDir, file)) as csvfile:
                reader = csv.DictReader(csvfile)
                tp = dict()
                for row in reader:
                    #print(f"row = {row}")
                    if ("Instruction" not in row):
                        print("Error reading testplan "+ file+".  Did you remember to shrink the .csv files after expanding?")
                        exit(1)
                    instr = row["Instruction"]
                    cps = []
                    del row["Instruction"]
                    for key, value in row.items():
#                        print(f"Instr = {instr} key = {key}, value = {value} file = {file}")
                        if (type(value) == str and value != ''):
                            if(key == "Type"):
                                cps.append("sample_" + value)
                            else:
                                if (value != "x"): # for special entries, append the entry name (e.g. cp_rd_corners becomes cp_rd_corners_lui)
                                    key = key + "_" + value
                                cps.append(key)
                    tp[instr] = cps
            testplans[arch] = tp
            if (arch =="I"): # duplicate I testplan for E
                testplans["E"] = tp
    return testplans

# readCovergroupTemplates reads the covergroup templates from the templates directory

def readCovergroupTemplates():
    templateDir = f'{ARCH_VERIF}/templates'
    covergroupTemplates = dict()
    for file in os.listdir(templateDir):
        if file.endswith(".txt"):
            cg = re.search("(.*).txt", file).group(1)
            with open(os.path.join(templateDir, file)) as f:
                covergroupTemplates[cg] = f.read()
    return covergroupTemplates

# customizeTemplate replaces the placeholders in the covergroup template with the actual values
# and picks from RV32/RV64 as necessary

def customizeTemplate(covergroupTemplates, name, arch, instr):
    if (name in covergroupTemplates):
        template = covergroupTemplates[name]
    else:
        if (not (name in missingTemplates)):
            print("No template found for " + name)
            missingTemplates.append(name)
        return ""
    instr_nodot = instr.replace(".", "_")
    template = template.replace("INSTRNODOT", instr_nodot)
    template = template.replace("INSTR", instr)
    template = template.replace("ARCHUPPER", arch.upper())
    template = template.replace("ARCHCASE", arch)
    template = template.replace("ARCH", arch.lower())
    return template

# Check if any instruction in this extension is not available in the specified RV32 or RV64
def anyExclusion(rv, instrs, tp):
    for instr in instrs:
        cps = tp[instr]
        if (not(rv in cps)):
            return True
    return False

# Write the instruction if it has an x in the listed RV32 and RV64 columns.  When hasRV32/64 is false, the column must be empty
# Thereby group instructions according to which XLEN they are in
def writeInstrs(f, finit, k, covergroupTemplates, tp, arch, hasRV32, hasRV64):
    for instr in k:
        cps = tp[instr]
        match32 = ("RV32" in cps) ^ (not hasRV32)
        match64 = ("RV64" in cps) ^ (not hasRV64) 
        if (match32 and match64):
            f.write(customizeTemplate(covergroupTemplates, "instruction", arch, instr))
            finit.write(customizeTemplate(covergroupTemplates, "init", arch, instr))
            for cp in cps:
                if(not (cp.startswith("sample_") or cp == "RV32" or cp == "RV64")): # skip these initial columns
                    f.write(customizeTemplate(covergroupTemplates, cp, arch, instr))
            f.write(customizeTemplate(covergroupTemplates, "endgroup", arch, instr))

def writeSampleFunctions(f, k, covergroupTemplates, tp, arch, hasRV32, hasRV64):
    for instr in k:
        cps = tp[instr]
        match32 = ("RV32" in cps) ^ (not hasRV32)
        match64 = ("RV64" in cps) ^ (not hasRV64) 
        if (match32 and match64):
            for cp in cps:
                if (cp in cps and cp.startswith("sample_")):
                    f.write(customizeTemplate(covergroupTemplates, cp, arch, instr))

# writeCovergroups iterates over the testplans and covergroup templates to generate the covergroups for
# all instructions in each testplan

def writeCovergroups(testPlans, covergroupTemplates):
    covergroupDir = ARCH_VERIF+'/fcov/unpriv'
    for arch, tp in testPlans.items():
        #subdir = re.search("(RV..)", arch).group(1).lower()
        #subdir = os.path.join(subdir, "coverage")
        os.system("mkdir -p " + covergroupDir)
        file = arch + "_coverage.svh"
        initfile = arch + "_coverage_init.svh"
        print("***** Writing " + file)
        with open(os.path.join(covergroupDir,file), "w") as f:
            finit = open(os.path.join(covergroupDir,initfile), "w")
            #print(covergroupTemplates)
            f.write(customizeTemplate(covergroupTemplates,"header", arch, ""))
            finit.write(customizeTemplate(covergroupTemplates,"initheader", arch, ""))
            k = list(tp.keys())
            k.sort()

            writeInstrs(f, finit, k, covergroupTemplates, tp, arch, True, True)
            if (anyExclusion("RV64", k, tp)):
                f.write(customizeTemplate(covergroupTemplates, "RV32", arch, "NA1"))
                finit.write(customizeTemplate(covergroupTemplates, "RV32", arch, "NA1"))
                writeInstrs(f, finit, k, covergroupTemplates, tp, arch, True, False)
                f.write(customizeTemplate(covergroupTemplates, "end", arch, "NA1"))
                finit.write(customizeTemplate(covergroupTemplates, "end", arch, "NA1"))
            if (anyExclusion("RV32", k, tp)):
                f.write(customizeTemplate(covergroupTemplates, "RV64", arch, "NA2"))
                finit.write(customizeTemplate(covergroupTemplates, "RV64", arch, "NA2"))
                writeInstrs(f, finit, k, covergroupTemplates, tp, arch, False, True)
                f.write(customizeTemplate(covergroupTemplates, "end", arch, "NA2"))
                finit.write(customizeTemplate(covergroupTemplates, "end", arch, "NA2"))

            # Sample functions: also separate out generic and ones specific to RV32/RV64 with `ifdefs`
            f.write(customizeTemplate(covergroupTemplates, "sample_header", arch, "NA3"))
            writeSampleFunctions(f, k, covergroupTemplates, tp, arch, True, True)
            if (anyExclusion("RV64", k, tp)):
                f.write(customizeTemplate(covergroupTemplates, "RV32", arch, "NA4"))
                writeSampleFunctions(f, k, covergroupTemplates, tp, arch, True, False)
                f.write(customizeTemplate(covergroupTemplates, "end", arch, "NA4"))                
            if (anyExclusion("RV32", k, tp)):
                f.write(customizeTemplate(covergroupTemplates, "RV64", arch, "NA5"))
                writeSampleFunctions(f, k, covergroupTemplates, tp, arch, False, True)
                f.write(customizeTemplate(covergroupTemplates, "end", arch, "NA5"))                
            f.write(customizeTemplate(covergroupTemplates, "sample_end", arch, "NA3"))
    # Create include files listing all the coverage groups to use in RISCV_coverage_base
    keys = list(testPlans.keys())
    keys.sort()
    #List of priv cover groups
    priv_defines = ["RV32VM", "RV32VM_PMP", "RV64VM", "RV64VM_PMP", "RV64CBO_PMP", "RV64CBO_VM", "ZicsrM", "ZicsrS", "ZicsrU",
                    "ZicntrM", "ZicsrF", "ZicntrS", "ZicntrU", "EndianU", "EndianS", "EndianM", "ExceptionsM", "ExceptionsS", "ExceptionsU",
                    "ExceptionsZc", "ExceptionsF", "ExceptionsZalrsc", "ExceptionsZicboU", "ExceptionsZaamo", "ExceptionsZicboS"]
    file = "../coverage/RISCV_coverage_base_init.svh"
    with open(os.path.join(covergroupDir,file), "w") as f:
        for arch in keys:
            f.write(customizeTemplate(covergroupTemplates, "coverageinit", arch, ""))
        for define in priv_defines:
            f.write(f"   `ifdef COVER_{define.upper()}\n")
            f.write(f"        `cover_info(\"//      {define} - Enabled\");\n")
            f.write(f"       `include \"{define}_coverage_init.svh\"\n")
            f.write(f"   `endif\n \n")
    file = "../coverage/RISCV_coverage_base_sample.svh"
    with open(os.path.join(covergroupDir,file), "w") as f:
        for arch in keys:
            f.write(customizeTemplate(covergroupTemplates, "coveragesample", arch, ""))
        for define in priv_defines:
            f.write(f"   `ifdef COVER_{define.upper()}\n")
            f.write(f"       {define.lower()}_sample(hart, issue);\n")
            f.write(f"   `endif\n \n")



##################################
# Main Python Script
##################################

if __name__ == '__main__':
    ARCH_VERIF = os.path.abspath(os.path.join(os.path.dirname(sys.argv[0]), ".."))
    missingTemplates = list() # keep list of missing templates to only print once
    testPlans = readTestplans()
    covergroupTemplates = readCovergroupTemplates()
    writeCovergroups(testPlans, covergroupTemplates)
