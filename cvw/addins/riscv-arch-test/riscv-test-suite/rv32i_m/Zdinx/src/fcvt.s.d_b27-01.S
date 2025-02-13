
// -----------
// This file was generated by riscv_ctg (https://github.com/riscv-software-src/riscv-ctg)
// version   : 0.11.0
// timestamp : Mon Aug 28 04:45:35 2023 GMT
// usage     : riscv_ctg \
//                  -- cgf //                  --cgf /home/riscv/riscv-ctg/sample_cgfs/dataset.cgf \
//                  --cgf /home/riscv/riscv-ctg/sample_cgfs/sample_cgfs_fext/RV32Zdinx/fcvt.s.d.cgf \
 \
//                  -- xlen 32  \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the fcvt.s.d instruction of the RISC-V RV32_Zfinx_Zdinx extension for the fcvt.s.d_b27 covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV32I_Zfinx_Zdinx")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*I.*Zfinx.*Zdinx.*);def TEST_CASE_1=True;",fcvt.s.d_b27)

RVTEST_FP_ENABLE()
RVTEST_VALBASEUPD(x3,test_dataset_0)
RVTEST_SIGBASE(x1,signature_x1_1)

inst_0:// rs1 == rd, rs1==x30, rd==x30,fs1 == 0 and fe1 == 0x7ff and fm1 == 0x0000000000001 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x30; dest:x30; op1val:0x7ff0000000000001; valaddr_reg:x3;
offset:0*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x30, x31, x30, x31,0, 0, 0, 0x00000001, 0x7ff00000,x3, 0*SIGALIGN, x4,x1, x2)

inst_1:// rs1 != rd, rs1==x26, rd==x28,fs1 == 1 and fe1 == 0x7ff and fm1 == 0x0000000000001 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x26; dest:x28; op1val:0xfff0000000000001; valaddr_reg:x3;
offset:1*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x28, x29, x26, x27,0, 0, 0, 0x00000001, 0xfff00000,x3, 1*SIGALIGN, x4,x1, x2)

inst_2:// rs1==x28, rd==x26,fs1 == 0 and fe1 == 0x7ff and fm1 == 0x4aaaaaaaaaaaa and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x28; dest:x26; op1val:0x7ff4aaaaaaaaaaaa; valaddr_reg:x3;
offset:2*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x26, x27, x28, x29,0, 0, 0, 0xaaaaaaaa, 0x7ff4aaaa,x3, 2*SIGALIGN, x4,x1, x2)

inst_3:// rs1==x22, rd==x24,fs1 == 1 and fe1 == 0x7ff and fm1 == 0x4aaaaaaaaaaaa and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x22; dest:x24; op1val:0xfff4aaaaaaaaaaaa; valaddr_reg:x3;
offset:3*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x24, x25, x22, x23,0, 0, 0, 0xaaaaaaaa, 0xfff4aaaa,x3, 3*SIGALIGN, x4,x1, x2)

inst_4:// rs1==x24, rd==x22,fs1 == 0 and fe1 == 0x7ff and fm1 == 0x8000000000001 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x24; dest:x22; op1val:0x7ff8000000000001; valaddr_reg:x3;
offset:4*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x22, x23, x24, x25,0, 0, 0, 0x00000001, 0x7ff80000,x3, 4*SIGALIGN, x4,x1, x2)

inst_5:// rs1==x18, rd==x20,fs1 == 1 and fe1 == 0x7ff and fm1 == 0x8000000000001 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x18; dest:x20; op1val:0xfff8000000000001; valaddr_reg:x3;
offset:5*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x20, x21, x18, x19,0, 0, 0, 0x00000001, 0xfff80000,x3, 5*SIGALIGN, x4,x1, x2)

inst_6:// rs1==x20, rd==x18,fs1 == 0 and fe1 == 0x7ff and fm1 == 0xc000000000001 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x20; dest:x18; op1val:0x7ffc000000000001; valaddr_reg:x3;
offset:6*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x18, x19, x20, x21,0, 0, 0, 0x00000001, 0x7ffc0000,x3, 6*SIGALIGN, x4,x1, x2)

inst_7:// rs1==x14, rd==x16,fs1 == 1 and fe1 == 0x7ff and fm1 == 0xc000000000001 and  fcsr == 0x0 and rm_val == 7   
/* opcode: fcvt.s.d ; op1:x14; dest:x16; op1val:0xfffc000000000001; valaddr_reg:x3;
offset:7*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x16, x17, x14, x15,0, 0, 0, 0x00000001, 0xfffc0000,x3, 7*SIGALIGN, x4,x1, x2)

inst_8:// rs1==x16, rd==x14,
/* opcode: fcvt.s.d ; op1:x16; dest:x14; op1val:0x0000000000000000; valaddr_reg:x3;
offset:8*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x14, x15, x16, x17,0, 0, 0, 0x00000000, 0x00000000,x3, 8*SIGALIGN, x4,x1, x2)

inst_9:// rs1==x10, rd==x12,
/* opcode: fcvt.s.d ; op1:x10; dest:x12; op1val:0x0000000000000000; valaddr_reg:x3;
offset:9*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x12, x13, x10, x11,0, 0, 0, 0x00000000, 0x00000000,x3, 9*SIGALIGN, x4,x1, x2)
RVTEST_VALBASEUPD(x14,test_dataset_1)

inst_10:// rs1==x12, rd==x10,
/* opcode: fcvt.s.d ; op1:x12; dest:x10; op1val:0x0000000000000000; valaddr_reg:x14;
offset:0*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x10, x11, x12, x13,0, 0, 0, 0x00000000, 0x00000000,x14, 10*SIGALIGN, x15,x1, x2)

inst_11:// rs1==x6, rd==x8,
/* opcode: fcvt.s.d ; op1:x6; dest:x8; op1val:0x0000000000000000; valaddr_reg:x14;
offset:1*4; correctval:??; testreg:x2;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x8, x9, x6, x7,0, 0, 0, 0x00000000, 0x00000000,x14, 11*SIGALIGN, x15,x1, x2)
RVTEST_SIGBASE(x1,signature_x1_2)

inst_12:// rs1==x8, rd==x6,
/* opcode: fcvt.s.d ; op1:x8; dest:x6; op1val:0x0000000000000000; valaddr_reg:x14;
offset:2*4; correctval:??; testreg:x10;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x6, x7, x8, x9,0, 0, 0, 0x00000000, 0x00000000,x14, 0*SIGALIGN, x15,x1, x10)

inst_13:// rs1==x2, rd==x4,
/* opcode: fcvt.s.d ; op1:x2; dest:x4; op1val:0x0000000000000000; valaddr_reg:x14;
offset:3*4; correctval:??; testreg:x10;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x4, x5, x2, x3,0, 0, 0, 0x00000000, 0x00000000,x14, 1*SIGALIGN, x15,x1, x10)

inst_14:// rs1==x4, rd==x2,
/* opcode: fcvt.s.d ; op1:x4; dest:x2; op1val:0x0000000000000000; valaddr_reg:x14;
offset:4*4; correctval:??; testreg:x10;
fcsr_val:0*/
TEST_ZDINX_OP_32(fcvt.s.d, x2, x3, x4, x5,0, 0, 0, 0x00000000, 0x00000000,x14, 2*SIGALIGN, x15,x1, x10)
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
NAN_BOXED(0x00000001,64,FLEN)
NAN_BOXED(0x00000001,64,FLEN)
NAN_BOXED(0xaaaaaaaa,64,FLEN)
NAN_BOXED(0xaaaaaaaa,64,FLEN)
NAN_BOXED(0x00000001,64,FLEN)
NAN_BOXED(0x00000001,64,FLEN)
NAN_BOXED(0x00000001,64,FLEN)
NAN_BOXED(0x00000001,64,FLEN)
NAN_BOXED(0x00000000,64,FLEN)
NAN_BOXED(0x00000000,64,FLEN)
test_dataset_1:
NAN_BOXED(0x00000000,64,FLEN)
NAN_BOXED(0x00000000,64,FLEN)
NAN_BOXED(0x00000000,64,FLEN)
NAN_BOXED(0x00000000,64,FLEN)
NAN_BOXED(0x00000000,64,FLEN)
RVTEST_DATA_END

RVMODEL_DATA_BEGIN
rvtest_sig_begin:
sig_begin_canary:
CANARY;



signature_x1_0:
    .fill 0*((SIGALIGN)/4),4,0xdeadbeef


signature_x1_1:
    .fill 12*((SIGALIGN)/4),4,0xdeadbeef


signature_x1_2:
    .fill 3*((SIGALIGN)/4),4,0xdeadbeef

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
