///////////////////////////////////////////
//
// RISC-V Architectural Functional Coverage Covergroups
// 
// Copyright (C) 2024 Harvey Mudd College, 10x Engineers, UET Lahore, Habib University
//
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
//
// Licensed under the Solderpad Hardware License v 2.1 (the “License”); you may not use this file 
// except in compliance with the License, or, at your option, the Apache License version 2.0. You 
// may obtain a copy of the License at
//
// https://solderpad.org/licenses/SHL-2.1/
//
// Unless required by applicable law or agreed to in writing, any work distributed under the 
// License is distributed on an “AS IS” BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, 
// either express or implied. See the License for the specific language governing permissions 
// and limitations under the License.
////////////////////////////////////////////////////////////////////////////////////////////////

`define COVER_ZICSRF
typedef RISCV_instruction #(ILEN, XLEN, FLEN, VLEN, NHART, RETIRE) ins_zicsrf_t;

covergroup ZicsrF_fcsr_cg with function sample(ins_zicsrf_t ins);
    option.per_instance = 0; 

    // building blocks for the main coverpoints
    csrrw: coverpoint ins.current.insn {
        wildcard bins csrrw = {32'b????????????_?????_001_?????_1110011}; 
    }
    csrop: coverpoint ins.current.insn[14:12] iff (ins.current.insn[6:0] == 7'b1110011) {
        bins csrrs = {3'b010};
        bins csrrc = {3'b011};
    }
    fcsr: coverpoint ins.current.insn[31:20] {
        bins fcsr = {12'h003};
    }
    frm: coverpoint ins.current.insn[31:20] {
        bins frm = {12'h002};
    }
    fflags: coverpoint ins.current.insn[31:20] {
        bins fflags = {12'h001};
    }
    fcsr_frm_corners: coverpoint ins.current.rs1_val[7:5] {
        // auto fills 0 through 7
    }
    frm_corners: coverpoint ins.current.rs1_val[2:0] {
        // auto fills 0 through 7 
    }
    fflags_corners: coverpoint ins.current.rs1_val[4:0] {
        // auto fills 0 through 15
    }
    `ifdef XLEN64
        walking_ones : coverpoint ins.current.rs1_val {
            bins b_0  = {64'b0000000000000000000000000000000000000000000000000000000000000001};
            bins b_1  = {64'b0000000000000000000000000000000000000000000000000000000000000010};
            bins b_2  = {64'b0000000000000000000000000000000000000000000000000000000000000100};
            bins b_3  = {64'b0000000000000000000000000000000000000000000000000000000000001000};
            bins b_4  = {64'b0000000000000000000000000000000000000000000000000000000000010000};
            bins b_5  = {64'b0000000000000000000000000000000000000000000000000000000000100000};
            bins b_6  = {64'b0000000000000000000000000000000000000000000000000000000001000000};
            bins b_7  = {64'b0000000000000000000000000000000000000000000000000000000010000000};
            bins b_8  = {64'b0000000000000000000000000000000000000000000000000000000100000000};
            bins b_9  = {64'b0000000000000000000000000000000000000000000000000000001000000000};
            bins b_10 = {64'b0000000000000000000000000000000000000000000000000000010000000000};
            bins b_11 = {64'b0000000000000000000000000000000000000000000000000000100000000000};
            bins b_12 = {64'b0000000000000000000000000000000000000000000000000001000000000000};
            bins b_13 = {64'b0000000000000000000000000000000000000000000000000010000000000000};
            bins b_14 = {64'b0000000000000000000000000000000000000000000000000100000000000000};
            bins b_15 = {64'b0000000000000000000000000000000000000000000000001000000000000000};
            bins b_16 = {64'b0000000000000000000000000000000000000000000000010000000000000000};
            bins b_17 = {64'b0000000000000000000000000000000000000000000000100000000000000000};
            bins b_18 = {64'b0000000000000000000000000000000000000000000001000000000000000000};
            bins b_19 = {64'b0000000000000000000000000000000000000000000010000000000000000000};
            bins b_20 = {64'b0000000000000000000000000000000000000000000100000000000000000000};
            bins b_21 = {64'b0000000000000000000000000000000000000000001000000000000000000000};
            bins b_22 = {64'b0000000000000000000000000000000000000000010000000000000000000000};
            bins b_23 = {64'b0000000000000000000000000000000000000000100000000000000000000000};
            bins b_24 = {64'b0000000000000000000000000000000000000001000000000000000000000000};
            bins b_25 = {64'b0000000000000000000000000000000000000010000000000000000000000000};
            bins b_26 = {64'b0000000000000000000000000000000000000100000000000000000000000000};
            bins b_27 = {64'b0000000000000000000000000000000000001000000000000000000000000000};
            bins b_28 = {64'b0000000000000000000000000000000000010000000000000000000000000000};
            bins b_29 = {64'b0000000000000000000000000000000000100000000000000000000000000000};
            bins b_30 = {64'b0000000000000000000000000000000001000000000000000000000000000000};
            bins b_31 = {64'b0000000000000000000000000000000010000000000000000000000000000000};
            bins b_32 = {64'b0000000000000000000000000000000100000000000000000000000000000000};
            bins b_33 = {64'b0000000000000000000000000000001000000000000000000000000000000000};
            bins b_34 = {64'b0000000000000000000000000000010000000000000000000000000000000000};
            bins b_35 = {64'b0000000000000000000000000000100000000000000000000000000000000000};
            bins b_36 = {64'b0000000000000000000000000001000000000000000000000000000000000000};
            bins b_37 = {64'b0000000000000000000000000010000000000000000000000000000000000000};
            bins b_38 = {64'b0000000000000000000000000100000000000000000000000000000000000000};
            bins b_39 = {64'b0000000000000000000000001000000000000000000000000000000000000000};
            bins b_40 = {64'b0000000000000000000000010000000000000000000000000000000000000000};
            bins b_41 = {64'b0000000000000000000000100000000000000000000000000000000000000000};
            bins b_42 = {64'b0000000000000000000001000000000000000000000000000000000000000000};
            bins b_43 = {64'b0000000000000000000010000000000000000000000000000000000000000000};
            bins b_44 = {64'b0000000000000000000100000000000000000000000000000000000000000000};
            bins b_45 = {64'b0000000000000000001000000000000000000000000000000000000000000000};
            bins b_46 = {64'b0000000000000000010000000000000000000000000000000000000000000000};
            bins b_47 = {64'b0000000000000000100000000000000000000000000000000000000000000000};
            bins b_48 = {64'b0000000000000001000000000000000000000000000000000000000000000000};
            bins b_49 = {64'b0000000000000010000000000000000000000000000000000000000000000000};
            bins b_50 = {64'b0000000000000100000000000000000000000000000000000000000000000000};
            bins b_51 = {64'b0000000000001000000000000000000000000000000000000000000000000000};
            bins b_52 = {64'b0000000000010000000000000000000000000000000000000000000000000000};
            bins b_53 = {64'b0000000000100000000000000000000000000000000000000000000000000000};
            bins b_54 = {64'b0000000001000000000000000000000000000000000000000000000000000000};
            bins b_55 = {64'b0000000010000000000000000000000000000000000000000000000000000000};
            bins b_56 = {64'b0000000100000000000000000000000000000000000000000000000000000000};
            bins b_57 = {64'b0000001000000000000000000000000000000000000000000000000000000000};
            bins b_58 = {64'b0000010000000000000000000000000000000000000000000000000000000000};
            bins b_59 = {64'b0000100000000000000000000000000000000000000000000000000000000000};
            bins b_60 = {64'b0001000000000000000000000000000000000000000000000000000000000000};
            bins b_61 = {64'b0010000000000000000000000000000000000000000000000000000000000000};
            bins b_62 = {64'b0100000000000000000000000000000000000000000000000000000000000000};
            bins b_63 = {64'b1000000000000000000000000000000000000000000000000000000000000000};
        }
    `else
        walking_ones : coverpoint ins.current.rs1_val {
            bins b_0  = {32'b00000000000000000000000000000001};
            bins b_1  = {32'b00000000000000000000000000000010};
            bins b_2  = {32'b00000000000000000000000000000100};
            bins b_3  = {32'b00000000000000000000000000001000};
            bins b_4  = {32'b00000000000000000000000000010000};
            bins b_5  = {32'b00000000000000000000000000100000};
            bins b_6  = {32'b00000000000000000000000001000000};
            bins b_7  = {32'b00000000000000000000000010000000};
            bins b_8  = {32'b00000000000000000000000100000000};
            bins b_9  = {32'b00000000000000000000001000000000};
            bins b_10 = {32'b00000000000000000000010000000000};
            bins b_11 = {32'b00000000000000000000100000000000};
            bins b_12 = {32'b00000000000000000001000000000000};
            bins b_13 = {32'b00000000000000000010000000000000};
            bins b_14 = {32'b00000000000000000100000000000000};
            bins b_15 = {32'b00000000000000001000000000000000};
            bins b_16 = {32'b00000000000000010000000000000000};
            bins b_17 = {32'b00000000000000100000000000000000};
            bins b_18 = {32'b00000000000001000000000000000000};
            bins b_19 = {32'b00000000000010000000000000000000};
            bins b_20 = {32'b00000000000100000000000000000000};
            bins b_21 = {32'b00000000001000000000000000000000};
            bins b_22 = {32'b00000000010000000000000000000000};
            bins b_23 = {32'b00000000100000000000000000000000};
            bins b_24 = {32'b00000001000000000000000000000000};
            bins b_25 = {32'b00000010000000000000000000000000};
            bins b_26 = {32'b00000100000000000000000000000000};
            bins b_27 = {32'b00001000000000000000000000000000};
            bins b_28 = {32'b00010000000000000000000000000000};
            bins b_29 = {32'b00100000000000000000000000000000};
            bins b_30 = {32'b01000000000000000000000000000000};
            bins b_31 = {32'b10000000000000000000000000000000};
        }
    `endif

    fadd: coverpoint ins.current.insn {
        wildcard bins fadd = {32'b00000_00_?????_?????_???_?????_1010011};
    }//                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ assumes single precision since there isn't a good  
    //                                                                      way to specify the fs1 and fs2 values otherwise
    fsub: coverpoint ins.current.insn {
        wildcard bins fsub = {32'b00001_00_?????_?????_???_?????_1010011};
    }
    fdiv: coverpoint ins.current.insn {
        wildcard bins fdiv = {32'b00011_00_?????_?????_???_?????_1010011};
    }
    fmul: coverpoint ins.current.insn {
        wildcard bins fmul = {32'b00010_00_?????_?????_???_?????_1010011};
    }
    fs2_zero: coverpoint ins.current.rs2_val[31:0] {
        bins zero = {32'h00000000};  
    }
    fs1_one: coverpoint ins.current.rs1_val[31:0] {
        bins one = {32'h3f800000};
    }
    fs2_three: coverpoint ins.current.rs2_val[31:0] {
        bins three = {32'h40400000};
    }
    fs1_largest: coverpoint ins.current.rs1_val[31:0] {
        bins largest = {32'h7f7fffff};
    }
    fs2_largest: coverpoint ins.current.rs2_val[31:0] {
        bins largest = {32'h7f7fffff};
    }
    fs1_smallest: coverpoint ins.current.rs1_val[31:0] {
        bins smallest = {32'h00800000};
    }
    fs2_smallest: coverpoint ins.current.rs2_val[31:0] {
        bins smallest = {32'h00800000};
    }
    fs1_infinity: coverpoint ins.current.rs1_val[31:0] {
        bins infinity = {32'h7f800000};
    }
    fs2_infinity: coverpoint ins.current.rs2_val[31:0] {
        bins infinity = {32'h7f800000};
    }
    instrs: coverpoint ins.current.insn {
        wildcard bins fsw          = {32'b????????????_?????_010_?????_0100111};
        wildcard bins flw          = {32'b????????????_?????_010_?????_0000111};
        wildcard bins fadd         = {32'b00000_??_?????_?????_???_?????_1010011};
        wildcard bins fsub         = {32'b00001_??_?????_?????_???_?????_1010011};
        wildcard bins fmul         = {32'b00010_??_?????_?????_???_?????_1010011};
        wildcard bins fdiv         = {32'b00011_??_?????_?????_???_?????_1010011};
        wildcard bins fcvt_x_f     = {32'b11000_??_?????_?????_???_?????_1010011};
        wildcard bins fcvt_f_x     = {32'b11010_??_?????_?????_???_?????_1010011};
        wildcard bins fcvt_f_f     = {32'b01000_??_?????_?????_???_?????_1010011};
        wildcard bins fmadd        = {32'b?????_??_?????_?????_???_?????_1000011};
        wildcard bins fsqrt        = {32'b01011_??_00000_?????_???_?????_1010011};
        wildcard bins fsgnj        = {32'b00100_??_?????_?????_000_?????_1010011};
        wildcard bins feq          = {32'b10100_??_?????_?????_010_?????_1010011};
        wildcard bins fmv_x_f      = {32'b11100_??_00000_?????_000_?????_1010011};
        wildcard bins fmv_f_x      = {32'b11110_??_00000_?????_000_?????_1010011};
        wildcard bins fclass       = {32'b11100_??_00000_?????_001_?????_1010011};
        wildcard bins fmin         = {32'b00101_??_?????_?????_000_?????_1010011};
        wildcard bins fli          = {32'b11110_??_00001_?????_000_?????_1010011};
        wildcard bins fround       = {32'b01000_??_00100_?????_???_?????_1010011};
        wildcard bins add          = {32'b0000000_?????_?????_000_?????_0110011};
        wildcard bins csrr_fcsr    = {32'b000000000011_00000_001_?????_1110011};
        wildcard bins csrr_frm     = {32'b000000000010_00000_001_?????_1110011};
        wildcard bins csrr_fflags  = {32'b000000000001_00000_001_?????_1110011};
        wildcard bins csrrw_fcsr   = {32'b000000000011_?????_001_?????_1110011};
        wildcard bins csrrw_frm    = {32'b000000000010_?????_001_?????_1110011};
        wildcard bins csrrw_fflags = {32'b000000000001_?????_001_?????_1110011};
        wildcard bins csrrs_fcsr   = {32'b000000000011_?????_010_?????_1110011};
        wildcard bins csrrs_frm    = {32'b000000000010_?????_010_?????_1110011};
        wildcard bins csrrs_fflags = {32'b000000000001_?????_010_?????_1110011};
        wildcard bins csrrc_fcsr   = {32'b000000000011_?????_011_?????_1110011};
        wildcard bins csrrc_frm    = {32'b000000000010_?????_011_?????_1110011};
        wildcard bins csrrc_fflags = {32'b000000000001_?????_011_?????_1110011};
        `ifdef XLEN32
            wildcard bins fmvh         = {32'b1110001_00001_?????_000_?????_1010011};
            wildcard bins fmvp         = {32'b1011001_?????_?????_000_?????_1010011};
        `endif
    }
    mstatus_FS: coverpoint ins.prev.csr[12'h300][14:13] {
    }
    mstatus_FS_n0: coverpoint ins.prev.csr[12'h300][14:13] {
        bins init  = {2'b01};
        bins clean = {2'b10};
        bins dirty = {2'b11};
    }
    
    // main coverpoints
    cp_fcsr_frm_write:        cross csrrw, fcsr,   fcsr_frm_corners,  mstatus_FS_n0;
    cp_fcsr_fflags_write:     cross csrrw, fcsr,   fflags_corners,    mstatus_FS_n0;
    cp_fcsrwalk:              cross csrop, fcsr,   walking_ones,      mstatus_FS_n0;
    cp_frm_write:             cross csrrw, frm,    frm_corners,       mstatus_FS_n0;
    cp_frmwalk:               cross csrop, frm,    walking_ones,      mstatus_FS_n0;
    cp_fflags_write:          cross csrrw, fflags, fflags_corners,    mstatus_FS_n0;
    cp_fflagswalk:            cross csrop, fflags, walking_ones,      mstatus_FS_n0;
    cp_fflags_set_m_NV:       cross fsub, fs1_infinity, fs2_infinity, mstatus_FS;
    cp_fflags_set_m_DZ:       cross fdiv, fs1_one,      fs2_zero,     mstatus_FS;
    cp_fflags_set_m_OF:       cross fadd, fs1_largest,  fs2_largest,  mstatus_FS;
    cp_fflags_set_m_UF:       cross fmul, fs1_smallest, fs2_smallest, mstatus_FS;
    cp_fflags_set_m_NX:       cross fdiv, fs1_one,      fs2_three,    mstatus_FS;
    cp_mstatus_FS_transition: cross instrs,                           mstatus_FS;
endgroup

function void zicsrf_sample(int hart, int issue);
    ins_zicsrf_t ins;

    ins = new(hart, issue, traceDataQ); 
    ins.add_rd(0);
    ins.add_rs1(2);
    ins.add_csr(1);
    
    ZicsrF_fcsr_cg.sample(ins);
    
endfunction
