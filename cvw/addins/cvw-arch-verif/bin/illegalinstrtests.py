#!/usr/bin/env python3
##################################
# illegalinstrtests.py
#
# David_Harris@hmc.edu 28 November 2024
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
#
# Emit tests of illegal instructions
# Some fields are deterministic, others are swept over a range, and the rest are randomized
##################################

import random
from random import randint
from random import seed
import os, sys
from os import environ

def gen(comment, template, len = 32, exclusion = []):
    ebits = template.count('E')
    print("\n// "+comment + " with 2^"+str(ebits)+" exhaustive bits\n// Template: "+template)
    # Find out how many exhaustive bits are needed
    instr = ['0']*len
    for j in range(0, 2**ebits):
        # Create string with exhaustive, random, and fixed bits
        e = ebits-1
        for i in range(len):
#            print("i = "+str(i)+", template[i] = "+template[i])
            if (template[i] == 'R'):
                instr[i] = str(randint(0, 1))
            elif (template[i] == 'E'):
                bit = j >> e
                instr[i] = str(bit & 1)
                e = e - 1
            elif (template[i] == '0'):
                instr[i] = '0'
            elif (template[i] == '1'):
                instr[i] = '1'
        instrstr = "".join(instr)

        anymatch = 0
        for exclude in exclusion:
            match = 1
            for i in range(len):
                if (exclude[i] != 'X' and exclude[i] != instrstr[i]):
                    match = 0
            anymatch = anymatch or match
        if (len == 32):
            keyword = "word"
        elif (len == 16):
            keyword = "hword"
        else:
            keyword = "len should be 16 or 32"
        if not anymatch: # print the instruction if it isn't on exclusion list
            print("     ."+keyword+" 0b"+instrstr)
        else:
            print("#     ."+keyword+" 0b"+instrstr+" // excluded by "+str(exclusion))

# setup
seed(0) # make tests reproducible
ARCH_VERIF = os.path.abspath(os.path.join(os.path.dirname(sys.argv[0]), ".."))
pathname = f"{ARCH_VERIF}/tests/lockstep/priv/ExceptionInstr-Tests.h"
outfile = open(pathname, 'w')
sys.stdout = outfile
gen("Illegal op2",  "RRRRRRRRRRRRRRRRRRRRRRRRR0001011")
gen("Illegal op7",  "RRRRRRRRRRRRRRRRRRRRRRRRR0011111")
gen("Illegal op10", "RRRRRRRRRRRRRRRRRRRRRRRRR0101011")
gen("Illegal op15", "RRRRRRRRRRRRRRRRRRRRRRRRR0111111")
gen("Illegal op21", "RRRRRRRRRRRRRRRRRRRRRRRRR1010111")
gen("Illegal op22", "RRRRRRRRRRRRRRRRRRRRRRRRR1011011")
gen("Illegal op23", "RRRRRRRRRRRRRRRRRRRRRRRRR1011111")
gen("Illegal op26", "RRRRRRRRRRRRRRRRRRRRRRRRR1101011")
gen("Illegal op29", "RRRRRRRRRRRRRRRRRRRRRRRRR1110111")
gen("Illegal op30", "RRRRRRRRRRRRRRRRRRRRRRRRR1111011")
gen("Illegal op31", "RRRRRRRRRRRRRRRRRRRRRRRRR1111111")
gen("cp_load",      "RRRRRRRRRRRRRRRRREEERRRRR0000011")
gen("cp_fload",     "RRRRRRRRRRRRRRRRREEERRRRR0000111")
gen("cp_fence_cbo", "RRRRRRRRRRRRRRRRREEERRRRR0001111")
gen("cp_cbo_immediate", "EEEEEEEEEEEE00000010000000001111") # tie rs1 = 0 to avoid overwriting program on cbo.zero
gen("cp_cbo_rd",        "00000000000RRRRRR010EEEEE0001111")
gen("cp_Itype",         "EEEEEEEEEEEERRRRRE01RRRRR0010011")
gen("cp_aes64ks1i",     "0011000EEEEERRRRR001RRRRR0010011")
gen("cp_IWtype",        "RRRRRRRRRRRRRRRRREEERRRRR0011011")
gen("cp_IWshift",       "EEEEEEERRRRRRRRRRE01RRRRR0011011")
gen("cp_store",         "RRRRRRRRRRRR00000EEERRRRR0100011") # use rs1 = 0 for stores to avoid overwriting program
gen("cp_fstore",        "RRRRRRRRRRRR00000EEERRRRR0100111") # use rs1 = 0 for stores to avoid overwriting program
gen("cp_atomic_funct3", "RRRRRRRRRRRR00000EEERRRRR0101111") # use rs1 = 0 for atomics to avoid overwriting program
gen("cp_atomic_funct7", "EEEEERRRRRRR0000001ERRRRR0101111", 32, # use rs1 = 0 for atomics to avoid overwriting program
                        [
                            "00001XXXXXXXXXXXX01XXXXXX0101111", # exclude amoswap to avoid stores to random locations
                            "00000XXXXXXXXXXXX01XXXXXX0101111", # exclude amoadd to avoid stores to random locations
                            "00100XXXXXXXXXXXX01XXXXXX0101111", # exclude amoxor to avoid stores to random locations
                            "01100XXXXXXXXXXXX01XXXXXX0101111", # exclude amoand to avoid stores to random locations
                            "01000XXXXXXXXXXXX01XXXXXX0101111", # exclude amoor to avoid stores to random locations
                            "10000XXXXXXXXXXXX01XXXXXX0101111", # exclude amomin to avoid stores to random locations
                            "10100XXXXXXXXXXXX01XXXXXX0101111", # exclude amomax to avoid stores to random locations
                            "11000XXXXXXXXXXXX01XXXXXX0101111", # exclude amominu to avoid stores to random locations
                            "11100XXXXXXXXXXXX01XXXXXX0101111"  # exclude amomaxu to avoid stores to random locations
                        ])
gen("cp_lrsc",          "00010RREEEEE0000001ERRRRR0101111")
gen("cp_rtype",         "EEEEEEERRRRRRRRRREEERRRRR0110011")
gen("cp_rwtype",        "EEEEEEERRRRRRRRRREEERRRRR0111011")
gen("cp_ftype",         "EEEEERRRRRRRRRRRREEERRRRR1010011")
gen("cp_fsqrt",         "0101100EEEEERRRRRRRRRRRRR1010011")
gen("cp_fclass",        "1110000EEEEERRRRR001RRRRR1010011")
gen("cp_fcvtif",        "1100000EEE00RRRRR000RRRRR1010011")
gen("cp_fcvtif_fmt",    "11000EE000EERRRRR000RRRRR1010011")
gen("cp_fcvtfi",        "1101000EEER00RRRR000RRRRR1010011")
gen("cp_fcvtfi_fmt",    "11010EE000EERRRRR000RRRRR1010011")
gen("cp_fcvtff",        "0100000EEER00RRRR000RRRRR1010011")
gen("cp_fcvtff_fmt",    "01000EEEEEEERRRRR000RRRRR1010011")
gen("cp_fmvif",         "11100EEEEEEERRRRR000RRRRR1010011")
gen("cp_fmvfi",         "11110EEEEEEERRRRR000RRRRR1010011")
gen("cp_fli",           "11110EEEEEEERRRRR000RRRRR1010011")
gen("cp_fmvh",          "11100EEEEEEERRRRR000RRRRR1010011")
gen("cp_fmvp",          "10110EERRRRRRRRRR000RRRRR1010011")
gen("cp_fcvtmodwd",     "11000EEEEEEERRRRR001RRRRR1010011")
gen("cp_branch2",       "RRRRRRRRRRRRRRRRR010RRRRR1100011")
gen("cp_branch3",       "RRRRRRRRRRRRRRRRR011RRRRR1100011")
gen("cp_jalr0",         "RRRRRRRRRRRRRRRRREE1RRRRR1100111")
gen("cp_jalr1",         "RRRRRRRRRRRRRRRRR010RRRRR1100111")
gen("cp_jalr2",         "RRRRRRRRRRRRRRRRR100RRRRR1100111")
gen("cp_jalr3",         "RRRRRRRRRRRRRRRRR110RRRRR1100111")
gen("cp_privileged_f3", "00000000000100000EEE000001110011")
gen("cp_privileged_000","EEEEEEEEEEEE00000000000001110011", 32,
    ["00X10000001000000000000001110011", # exclude mret and sret because there is no trap to return from
     "00010000010100000000000001110011"]) # exclude wfi because it may not wake up
gen("cp_privileged_rd", "00000000000000000000EEEEE1110011")
gen("cp_privileged_rs2","000000000000EEEEE000000001110011")
gen("cp_reserved_fma",  "RRRRRRRRRRRRRRRRREEERRRRR100EE11") # various reserved_rm*_fma*
outfile.close

pathname = f"{ARCH_VERIF}/tests/lockstep/priv/ExceptionInstrCompressed-Tests.h"
outfile = open(pathname, 'w')
sys.stdout = outfile
gen("compressed00", "EEEEEEEEEEEEEE00", 16)
gen("compressed01", "EEEEEEEEEEEEEE01", 16,
    ["101XXXXXXXXXXX01", # skip c.j because it causes the test program to go to a random place
     "11XXXXXXXXXXXX01", # skip c.beqz and c.bnez because they cause program to go to a random place
     "001XXXXXXXXXXX01", # skip c.jr because it causes the test program to go to a random place
     ])
gen("compressed10", "EEEEEEEEEEEEEE10", 16,
    ["1000XXXXX0000010", # skip c.jr because it causes the test program to go to a random place
     "1001XXXXX0000010", # skip c.jalr because it causes the test program to go to a random place
     "1001000000000010"
               ])
outfile.close
