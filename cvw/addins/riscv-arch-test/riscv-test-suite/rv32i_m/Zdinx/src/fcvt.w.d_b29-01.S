
// -----------
// This file was generated by riscv_ctg (https://github.com/riscv-software-src/riscv-ctg)
// version   : 0.11.0
// timestamp : Mon Aug 28 04:33:02 2023 GMT
// usage     : riscv_ctg \
//                  -- cgf //                  --cgf /home/riscv/riscv-ctg/sample_cgfs/dataset.cgf \
//                  --cgf /home/riscv/riscv-ctg/sample_cgfs/sample_cgfs_fext/RV32Zdinx/fcvt.w.d.cgf \
 \
//                  -- xlen 32  \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the fcvt.w.d instruction of the RISC-V RV32_Zfinx_Zdinx,RV64_Zfinx_Zdinx extension for the fcvt.w.d_b29 covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV32I_Zfinx_Zdinx,RV64I_Zfinx_Zdinx")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*I.*Zfinx.*Zdinx.*);def TEST_CASE_1=True;",fcvt.w.d_b29)

RVTEST_FP_ENABLE()
RVTEST_VALBASEUPD(x3,test_dataset_0)
RVTEST_SIGBASE(x1,signature_x1_1)

inst_0:// rs1==x28, rd==x30,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b8698; valaddr_reg:x3;
offset:0*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b8698, 0x3fc08574,x3, 0*SIGALIGN, x4,x1, x2)

inst_1:// rs1==x30, rd==x28,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x30; dest:x28; op1val:0x3fc08574923b8698; valaddr_reg:x3;
offset:1*4; correctval:??; testreg:x2;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x28, x29, x30, x31,32, 0, 0, 0x923b8698, 0x3fc08574,x3, 1*SIGALIGN, x4,x1, x2)

inst_2:// rs1==x24, rd==x26,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x24; dest:x26; op1val:0x3fc08574923b8698; valaddr_reg:x3;
offset:2*4; correctval:??; testreg:x2;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x26, x27, x24, x25,64, 0, 0, 0x923b8698, 0x3fc08574,x3, 2*SIGALIGN, x4,x1, x2)

inst_3:// rs1==x26, rd==x24,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x26; dest:x24; op1val:0x3fc08574923b8698; valaddr_reg:x3;
offset:3*4; correctval:??; testreg:x2;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x24, x25, x26, x27,96, 0, 0, 0x923b8698, 0x3fc08574,x3, 3*SIGALIGN, x4,x1, x2)

inst_4:// rs1==x20, rd==x22,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x20; dest:x22; op1val:0x3fc08574923b8698; valaddr_reg:x3;
offset:4*4; correctval:??; testreg:x2;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x22, x23, x20, x21,128, 0, 0, 0x923b8698, 0x3fc08574,x3, 4*SIGALIGN, x4,x1, x2)

inst_5:// rs1==x22, rd==x20,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x22; dest:x20; op1val:0x3fc08574923b8699; valaddr_reg:x3;
offset:5*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x20, x21, x22, x23,0, 0, 0, 0x923b8699, 0x3fc08574,x3, 5*SIGALIGN, x4,x1, x2)

inst_6:// rs1==x16, rd==x18,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x16; dest:x18; op1val:0x3fc08574923b8699; valaddr_reg:x3;
offset:6*4; correctval:??; testreg:x2;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x18, x19, x16, x17,32, 0, 0, 0x923b8699, 0x3fc08574,x3, 6*SIGALIGN, x4,x1, x2)

inst_7:// rs1==x18, rd==x16,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x18; dest:x16; op1val:0x3fc08574923b8699; valaddr_reg:x3;
offset:7*4; correctval:??; testreg:x2;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x16, x17, x18, x19,64, 0, 0, 0x923b8699, 0x3fc08574,x3, 7*SIGALIGN, x4,x1, x2)

inst_8:// rs1==x12, rd==x14,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x12; dest:x14; op1val:0x3fc08574923b8699; valaddr_reg:x3;
offset:8*4; correctval:??; testreg:x2;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x14, x15, x12, x13,96, 0, 0, 0x923b8699, 0x3fc08574,x3, 8*SIGALIGN, x4,x1, x2)

inst_9:// rs1==x14, rd==x12,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x14; dest:x12; op1val:0x3fc08574923b8699; valaddr_reg:x3;
offset:9*4; correctval:??; testreg:x2;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x12, x13, x14, x15,128, 0, 0, 0x923b8699, 0x3fc08574,x3, 9*SIGALIGN, x4,x1, x2)

inst_10:// rs1==x8, rd==x10,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x8; dest:x10; op1val:0x3fc08574923b869a; valaddr_reg:x3;
offset:10*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x10, x11, x8, x9,0, 0, 0, 0x923b869a, 0x3fc08574,x3, 10*SIGALIGN, x4,x1, x2)
RVTEST_VALBASEUPD(x13,test_dataset_1)

inst_11:// rs1==x10, rd==x8,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x10; dest:x8; op1val:0x3fc08574923b869a; valaddr_reg:x13;
offset:0*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x8, x9, x10, x11,32, 0, 0, 0x923b869a, 0x3fc08574,x13, 11*SIGALIGN, x14,x1, x12)

inst_12:// rs1==x4, rd==x6,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x4; dest:x6; op1val:0x3fc08574923b869a; valaddr_reg:x13;
offset:1*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x6, x7, x4, x5,64, 0, 0, 0x923b869a, 0x3fc08574,x13, 12*SIGALIGN, x14,x1, x12)
RVTEST_SIGBASE(x1,signature_x1_2)

inst_13:// rs1==x6, rd==x4,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x6; dest:x4; op1val:0x3fc08574923b869a; valaddr_reg:x13;
offset:2*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x4, x5, x6, x7,96, 0, 0, 0x923b869a, 0x3fc08574,x13, 0*SIGALIGN, x14,x1, x12)

inst_14:// rs1==x2,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x2; dest:x30; op1val:0x3fc08574923b869a; valaddr_reg:x13;
offset:3*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x2, x3,128, 0, 0, 0x923b869a, 0x3fc08574,x13, 1*SIGALIGN, x14,x1, x12)

inst_15:// rd==x2,fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x30; dest:x2; op1val:0x3fc08574923b869b; valaddr_reg:x13;
offset:4*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x2, x3, x30, x31,0, 0, 0, 0x923b869b, 0x3fc08574,x13, 2*SIGALIGN, x14,x1, x12)

inst_16:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869b; valaddr_reg:x13;
offset:5*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869b, 0x3fc08574,x13, 3*SIGALIGN, x14,x1, x12)

inst_17:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869b; valaddr_reg:x13;
offset:6*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869b, 0x3fc08574,x13, 4*SIGALIGN, x14,x1, x12)

inst_18:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869b; valaddr_reg:x13;
offset:7*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869b, 0x3fc08574,x13, 5*SIGALIGN, x14,x1, x12)

inst_19:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869b; valaddr_reg:x13;
offset:8*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869b, 0x3fc08574,x13, 6*SIGALIGN, x14,x1, x12)

inst_20:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869c; valaddr_reg:x13;
offset:9*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869c, 0x3fc08574,x13, 7*SIGALIGN, x14,x1, x12)

inst_21:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869c; valaddr_reg:x13;
offset:10*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869c, 0x3fc08574,x13, 8*SIGALIGN, x14,x1, x12)

inst_22:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869c; valaddr_reg:x13;
offset:11*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869c, 0x3fc08574,x13, 9*SIGALIGN, x14,x1, x12)

inst_23:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869c; valaddr_reg:x13;
offset:12*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869c, 0x3fc08574,x13, 10*SIGALIGN, x14,x1, x12)

inst_24:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869c; valaddr_reg:x13;
offset:13*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869c, 0x3fc08574,x13, 11*SIGALIGN, x14,x1, x12)

inst_25:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869d; valaddr_reg:x13;
offset:14*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869d, 0x3fc08574,x13, 12*SIGALIGN, x14,x1, x12)

inst_26:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869d; valaddr_reg:x13;
offset:15*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869d, 0x3fc08574,x13, 13*SIGALIGN, x14,x1, x12)

inst_27:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869d; valaddr_reg:x13;
offset:16*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869d, 0x3fc08574,x13, 14*SIGALIGN, x14,x1, x12)

inst_28:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869d; valaddr_reg:x13;
offset:17*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869d, 0x3fc08574,x13, 15*SIGALIGN, x14,x1, x12)

inst_29:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869d; valaddr_reg:x13;
offset:18*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869d, 0x3fc08574,x13, 16*SIGALIGN, x14,x1, x12)

inst_30:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869e; valaddr_reg:x13;
offset:19*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869e, 0x3fc08574,x13, 17*SIGALIGN, x14,x1, x12)

inst_31:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869e; valaddr_reg:x13;
offset:20*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869e, 0x3fc08574,x13, 18*SIGALIGN, x14,x1, x12)

inst_32:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869e; valaddr_reg:x13;
offset:21*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869e, 0x3fc08574,x13, 19*SIGALIGN, x14,x1, x12)

inst_33:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869e; valaddr_reg:x13;
offset:22*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869e, 0x3fc08574,x13, 20*SIGALIGN, x14,x1, x12)

inst_34:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869e; valaddr_reg:x13;
offset:23*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869e, 0x3fc08574,x13, 21*SIGALIGN, x14,x1, x12)

inst_35:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869f; valaddr_reg:x13;
offset:24*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869f, 0x3fc08574,x13, 22*SIGALIGN, x14,x1, x12)

inst_36:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869f; valaddr_reg:x13;
offset:25*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869f, 0x3fc08574,x13, 23*SIGALIGN, x14,x1, x12)

inst_37:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869f; valaddr_reg:x13;
offset:26*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869f, 0x3fc08574,x13, 24*SIGALIGN, x14,x1, x12)

inst_38:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869f; valaddr_reg:x13;
offset:27*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869f, 0x3fc08574,x13, 25*SIGALIGN, x14,x1, x12)

inst_39:// fs1 == 0 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0x3fc08574923b869f; valaddr_reg:x13;
offset:28*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869f, 0x3fc08574,x13, 26*SIGALIGN, x14,x1, x12)

inst_40:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8698; valaddr_reg:x13;
offset:29*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b8698, 0xbfc08574,x13, 27*SIGALIGN, x14,x1, x12)

inst_41:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8698; valaddr_reg:x13;
offset:30*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b8698, 0xbfc08574,x13, 28*SIGALIGN, x14,x1, x12)

inst_42:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8698; valaddr_reg:x13;
offset:31*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b8698, 0xbfc08574,x13, 29*SIGALIGN, x14,x1, x12)

inst_43:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8698; valaddr_reg:x13;
offset:32*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b8698, 0xbfc08574,x13, 30*SIGALIGN, x14,x1, x12)

inst_44:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8698 and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8698; valaddr_reg:x13;
offset:33*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b8698, 0xbfc08574,x13, 31*SIGALIGN, x14,x1, x12)

inst_45:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8699; valaddr_reg:x13;
offset:34*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b8699, 0xbfc08574,x13, 32*SIGALIGN, x14,x1, x12)

inst_46:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8699; valaddr_reg:x13;
offset:35*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b8699, 0xbfc08574,x13, 33*SIGALIGN, x14,x1, x12)

inst_47:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8699; valaddr_reg:x13;
offset:36*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b8699, 0xbfc08574,x13, 34*SIGALIGN, x14,x1, x12)

inst_48:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8699; valaddr_reg:x13;
offset:37*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b8699, 0xbfc08574,x13, 35*SIGALIGN, x14,x1, x12)

inst_49:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b8699 and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b8699; valaddr_reg:x13;
offset:38*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b8699, 0xbfc08574,x13, 36*SIGALIGN, x14,x1, x12)

inst_50:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869a; valaddr_reg:x13;
offset:39*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869a, 0xbfc08574,x13, 37*SIGALIGN, x14,x1, x12)

inst_51:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869a; valaddr_reg:x13;
offset:40*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869a, 0xbfc08574,x13, 38*SIGALIGN, x14,x1, x12)

inst_52:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869a; valaddr_reg:x13;
offset:41*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869a, 0xbfc08574,x13, 39*SIGALIGN, x14,x1, x12)

inst_53:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869a; valaddr_reg:x13;
offset:42*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869a, 0xbfc08574,x13, 40*SIGALIGN, x14,x1, x12)

inst_54:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869a and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869a; valaddr_reg:x13;
offset:43*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869a, 0xbfc08574,x13, 41*SIGALIGN, x14,x1, x12)

inst_55:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869b; valaddr_reg:x13;
offset:44*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869b, 0xbfc08574,x13, 42*SIGALIGN, x14,x1, x12)

inst_56:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869b; valaddr_reg:x13;
offset:45*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869b, 0xbfc08574,x13, 43*SIGALIGN, x14,x1, x12)

inst_57:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869b; valaddr_reg:x13;
offset:46*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869b, 0xbfc08574,x13, 44*SIGALIGN, x14,x1, x12)

inst_58:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869b; valaddr_reg:x13;
offset:47*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869b, 0xbfc08574,x13, 45*SIGALIGN, x14,x1, x12)

inst_59:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869b and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869b; valaddr_reg:x13;
offset:48*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869b, 0xbfc08574,x13, 46*SIGALIGN, x14,x1, x12)

inst_60:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869c; valaddr_reg:x13;
offset:49*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869c, 0xbfc08574,x13, 47*SIGALIGN, x14,x1, x12)

inst_61:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869c; valaddr_reg:x13;
offset:50*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869c, 0xbfc08574,x13, 48*SIGALIGN, x14,x1, x12)

inst_62:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869c; valaddr_reg:x13;
offset:51*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869c, 0xbfc08574,x13, 49*SIGALIGN, x14,x1, x12)

inst_63:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869c; valaddr_reg:x13;
offset:52*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869c, 0xbfc08574,x13, 50*SIGALIGN, x14,x1, x12)

inst_64:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869c and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869c; valaddr_reg:x13;
offset:53*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869c, 0xbfc08574,x13, 51*SIGALIGN, x14,x1, x12)

inst_65:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869d; valaddr_reg:x13;
offset:54*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869d, 0xbfc08574,x13, 52*SIGALIGN, x14,x1, x12)

inst_66:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869d; valaddr_reg:x13;
offset:55*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869d, 0xbfc08574,x13, 53*SIGALIGN, x14,x1, x12)

inst_67:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869d; valaddr_reg:x13;
offset:56*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869d, 0xbfc08574,x13, 54*SIGALIGN, x14,x1, x12)

inst_68:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869d; valaddr_reg:x13;
offset:57*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869d, 0xbfc08574,x13, 55*SIGALIGN, x14,x1, x12)

inst_69:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869d and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869d; valaddr_reg:x13;
offset:58*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869d, 0xbfc08574,x13, 56*SIGALIGN, x14,x1, x12)

inst_70:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869e; valaddr_reg:x13;
offset:59*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869e, 0xbfc08574,x13, 57*SIGALIGN, x14,x1, x12)

inst_71:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869e; valaddr_reg:x13;
offset:60*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869e, 0xbfc08574,x13, 58*SIGALIGN, x14,x1, x12)

inst_72:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869e; valaddr_reg:x13;
offset:61*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869e, 0xbfc08574,x13, 59*SIGALIGN, x14,x1, x12)

inst_73:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869e; valaddr_reg:x13;
offset:62*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869e, 0xbfc08574,x13, 60*SIGALIGN, x14,x1, x12)

inst_74:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869e and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869e; valaddr_reg:x13;
offset:63*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869e, 0xbfc08574,x13, 61*SIGALIGN, x14,x1, x12)

inst_75:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869f; valaddr_reg:x13;
offset:64*4; correctval:??; testreg:x12;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,0, 0, 0, 0x923b869f, 0xbfc08574,x13, 62*SIGALIGN, x14,x1, x12)

inst_76:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x20 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869f; valaddr_reg:x13;
offset:65*4; correctval:??; testreg:x12;
fcsr_val:32*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,32, 0, 0, 0x923b869f, 0xbfc08574,x13, 63*SIGALIGN, x14,x1, x12)

inst_77:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x40 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869f; valaddr_reg:x13;
offset:66*4; correctval:??; testreg:x12;
fcsr_val:64*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,64, 0, 0, 0x923b869f, 0xbfc08574,x13, 64*SIGALIGN, x14,x1, x12)

inst_78:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x60 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869f; valaddr_reg:x13;
offset:67*4; correctval:??; testreg:x12;
fcsr_val:96*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,96, 0, 0, 0x923b869f, 0xbfc08574,x13, 65*SIGALIGN, x14,x1, x12)

inst_79:// fs1 == 1 and fe1 == 0x3fc and fm1 == 0x08574923b869f and  fcsr == 0x80 and rm_val == 7   
/* opcode: fcvt.w.d ; op1:x28; dest:x30; op1val:0xbfc08574923b869f; valaddr_reg:x13;
offset:68*4; correctval:??; testreg:x12;
fcsr_val:128*/
TEST_ZDINX_OP_32(fcvt.w.d, x30, x31, x28, x29,128, 0, 0, 0x923b869f, 0xbfc08574,x13, 66*SIGALIGN, x14,x1, x12)
#endif


RVTEST_CODE_END
RVMODEL_HALT

RVTEST_DATA_BEGIN
.align 4
rvtest_data:
.word 0xbabecafe
.word 0xabecafeb
.word 0xbecafeba
.word 0xecafebab
test_dataset_0:
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
test_dataset_1:
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8698,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b8699,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869a,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869b,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869c,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869d,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869e,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
NAN_BOXED(0x923b869f,64,FLEN)
RVTEST_DATA_END

RVMODEL_DATA_BEGIN
rvtest_sig_begin:
sig_begin_canary:
CANARY;



signature_x1_0:
    .fill 0*((SIGALIGN)/4),4,0xdeadbeef


signature_x1_1:
    .fill 13*((SIGALIGN)/4),4,0xdeadbeef


signature_x1_2:
    .fill 67*((SIGALIGN)/4),4,0xdeadbeef

#ifdef rvtest_mtrap_routine
tsig_begin_canary:
CANARY;

mtrap_sigptr:
    .fill 64*XLEN/32,4,0xdeadbeef

tsig_end_canary:
CANARY;
#endif

#ifdef rvtest_gpr_save

gpr_save:
    .fill 32*XLEN/32,4,0xdeadbeef

#endif


sig_end_canary:
CANARY;
rvtest_sig_end:
RVMODEL_DATA_END
