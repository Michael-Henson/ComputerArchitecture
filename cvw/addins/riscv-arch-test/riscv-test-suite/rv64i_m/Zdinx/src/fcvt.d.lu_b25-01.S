
// -----------
// This file was generated by riscv_ctg (https://github.com/riscv-software-src/riscv-ctg)
// version   : 0.11.0
// timestamp : Thu Jul  6 07:24:45 2023 GMT
// usage     : riscv_ctg \
//                  -- cgf //                  --cgf /home/riscv/riscv-ctg/sample_cgfs/dataset.cgf \
//                  --cgf /home/riscv/riscv-ctg/sample_cgfs/sample_cgfs_fext/RV64Zdinx/fcvt.d.lu.cgf \
 \
//                  -- xlen 64  \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the fcvt.d.lu instruction of the RISC-V RV64_Zfinx_Zdinx extension for the fcvt.d.lu_b25 covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV64I_Zfinx_Zdinx")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*I.*Zfinx.*Zdinx.*);def TEST_CASE_1=True;",fcvt.d.lu_b25)

RVTEST_FP_ENABLE()
RVTEST_VALBASEUPD(x5,test_dataset_0)
RVTEST_SIGBASE(x1,signature_x1_1)

inst_0:// rs1==x28, rd==x30,rs1_val == 0 and  fcsr == 0 and rm_val == 7  
/* opcode: fcvt.d.lu ; op1:x28; dest:x30; op1val:0x0; valaddr_reg:x5;
val_offset:0*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x30, x28, dyn, 0, 0, x5, 0*8, x7, x1, x3,ld)

inst_1:// rs1==x30, rd==x28,rs1_val == 1 and  fcsr == 0 and rm_val == 7  
/* opcode: fcvt.d.lu ; op1:x30; dest:x28; op1val:0x1; valaddr_reg:x5;
val_offset:1*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x28, x30, dyn, 0, 0, x5, 1*8, x7, x1, x3,ld)

inst_2:// rs1==x24, rd==x26,rs1_val == 18446744073709551615 and  fcsr == 0 and rm_val == 7  
/* opcode: fcvt.d.lu ; op1:x24; dest:x26; op1val:0xffffffffffffffff; valaddr_reg:x5;
val_offset:2*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x26, x24, dyn, 0, 0, x5, 2*8, x7, x1, x3,ld)

inst_3:// rs1==x26, rd==x24,rs1_val == 10540517427298422784 and  fcsr == 0 and rm_val == 7  
/* opcode: fcvt.d.lu ; op1:x26; dest:x24; op1val:0x924770c10aefd000; valaddr_reg:x5;
val_offset:3*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x24, x26, dyn, 0, 0, x5, 3*8, x7, x1, x3,ld)

inst_4:// rs1==x20, rd==x22,
/* opcode: fcvt.d.lu ; op1:x20; dest:x22; op1val:0x0; valaddr_reg:x5;
val_offset:4*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x22, x20, dyn, 0, 0, x5, 4*8, x7, x1, x3,ld)

inst_5:// rs1==x22, rd==x20,
/* opcode: fcvt.d.lu ; op1:x22; dest:x20; op1val:0x0; valaddr_reg:x5;
val_offset:5*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x20, x22, dyn, 0, 0, x5, 5*8, x7, x1, x3,ld)

inst_6:// rs1==x16, rd==x18,
/* opcode: fcvt.d.lu ; op1:x16; dest:x18; op1val:0x0; valaddr_reg:x5;
val_offset:6*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x18, x16, dyn, 0, 0, x5, 6*8, x7, x1, x3,ld)

inst_7:// rs1==x18, rd==x16,
/* opcode: fcvt.d.lu ; op1:x18; dest:x16; op1val:0x0; valaddr_reg:x5;
val_offset:7*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x16, x18, dyn, 0, 0, x5, 7*8, x7, x1, x3,ld)

inst_8:// rs1==x12, rd==x14,
/* opcode: fcvt.d.lu ; op1:x12; dest:x14; op1val:0x0; valaddr_reg:x5;
val_offset:8*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x14, x12, dyn, 0, 0, x5, 8*8, x7, x1, x3,ld)

inst_9:// rs1==x14, rd==x12,
/* opcode: fcvt.d.lu ; op1:x14; dest:x12; op1val:0x0; valaddr_reg:x5;
val_offset:9*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x12, x14, dyn, 0, 0, x5, 9*8, x7, x1, x3,ld)

inst_10:// rs1==x8, rd==x10,
/* opcode: fcvt.d.lu ; op1:x8; dest:x10; op1val:0x0; valaddr_reg:x5;
val_offset:10*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x10, x8, dyn, 0, 0, x5, 10*8, x7, x1, x3,ld)

inst_11:// rs1==x10, rd==x8,
/* opcode: fcvt.d.lu ; op1:x10; dest:x8; op1val:0x0; valaddr_reg:x5;
val_offset:11*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x8, x10, dyn, 0, 0, x5, 11*8, x7, x1, x3,ld)

inst_12:// rs1==x4, rd==x6,
/* opcode: fcvt.d.lu ; op1:x4; dest:x6; op1val:0x0; valaddr_reg:x5;
val_offset:12*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x6, x4, dyn, 0, 0, x5, 12*8, x7, x1, x3,ld)

inst_13:// rs1==x6, rd==x4,
/* opcode: fcvt.d.lu ; op1:x6; dest:x4; op1val:0x0; valaddr_reg:x5;
val_offset:13*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x4, x6, dyn, 0, 0, x5, 13*8, x7, x1, x3,ld)

inst_14:// rs1==x2,
/* opcode: fcvt.d.lu ; op1:x2; dest:x31; op1val:0x0; valaddr_reg:x5;
val_offset:14*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x31, x2, dyn, 0, 0, x5, 14*8, x7, x1, x3,ld)

inst_15:// rd==x2,
/* opcode: fcvt.d.lu ; op1:x31; dest:x2; op1val:0x0; valaddr_reg:x5;
val_offset:15*8; rmval:dyn; correctval:0; testreg:x3;
fcsr_val: 0*/
TEST_FPIO_OP(fcvt.d.lu, x2, x31, dyn, 0, 0, x5, 15*8, x7, x1, x3,ld)
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
.dword 0;
.dword 1;
.dword 18446744073709551615;
.dword 10540517427298422784;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
.dword 0;
RVTEST_DATA_END

RVMODEL_DATA_BEGIN
rvtest_sig_begin:
sig_begin_canary:
CANARY;



signature_x1_0:
    .fill 0*((SIGALIGN)/4),4,0xdeadbeef


signature_x1_1:
    .fill 32*((SIGALIGN)/4),4,0xdeadbeef

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
