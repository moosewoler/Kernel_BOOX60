#ifndef _NETARM_ethregs_
#define _NETARM_ethregs_
// ====================================================================
//
//      eth_regs.h
//
//      Address mappings for ethernet and DMA controller registers
//
// ====================================================================
//####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 2005 eCosCentric LTD
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with eCos; if not, write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
//
// As a special exception, if other files instantiate templates or use macros
// or inline functions from this file, or you compile this file and link it
// with other works to produce a work based on this file, this file does not
// by itself cause the resulting work to be covered by the GNU General Public
// License. However the source code for this file must still be made available
// in accordance with section (3) of the GNU General Public License.
//
// This exception does not invalidate any other reasons why a work based on
// this file might be covered by the GNU General Public License.
// ====================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):           Harald Brandl (harald.brandl@fh-joanneum.at)
// Contributors:        Harald Brandl
// Date:                01.08.2004
// Purpose:             Ethernet and DMA controller registers
// Description:
//
//####DESCRIPTIONEND####
//
// ====================================================================

// Ethernet

#define EthGenCR                 *(volatile unsigned *)0xff800000
#define EthGenSR                 *(volatile unsigned *)0xff800004
#define EthFIFODR                *(volatile unsigned *)0xff800008
#define EthFIFODRkickoff         *(volatile unsigned *)0xff80000c
#define EthTxSR                  *(volatile unsigned *)0xff800010
#define EthRxSR                  *(volatile unsigned *)0xff800014
#define MACCR                    *(volatile unsigned *)0xff800400
#define MACTR                    *(volatile unsigned *)0xff800404
#define PCSCR                    *(volatile unsigned *)0xff800408
#define PCSTR                    *(volatile unsigned *)0xff80040c
#define STLCR                    *(volatile unsigned *)0xff800410
#define STLTR                    *(volatile unsigned *)0xff800414
#define BtBIPGGapTimerR          *(volatile unsigned *)0xff800440
#define NonBtBIPGGapTimerR       *(volatile unsigned *)0xff800444
#define CollWinR                 *(volatile unsigned *)0xff800448
#define TxPNCR                   *(volatile unsigned *)0xff800460
#define TxBCR                    *(volatile unsigned *)0xff800464
#define ReTxBCR                  *(volatile unsigned *)0xff800468
#define TxRNG                    *(volatile unsigned *)0xff80046c
#define TxMRN                    *(volatile unsigned *)0xff800470
#define TxCDec                   *(volatile unsigned *)0xff800474
#define TOTxC                    *(volatile unsigned *)0xff800478
#define RxBC                     *(volatile unsigned *)0xff800480
#define RxCDec                   *(volatile unsigned *)0xff800484
#define TORxC                    *(volatile unsigned *)0xff800488
#define LnFC                     *(volatile unsigned *)0xff8004c0
#define JC10M                    *(volatile unsigned *)0xff800500
#define LoCC10M                  *(volatile unsigned *)0xff800504
#define MIICR                    *(volatile unsigned *)0xff800540
#define MIIAR                    *(volatile unsigned *)0xff800544
#define MIIWDR                   *(volatile unsigned *)0xff800548
#define MIIRDR                   *(volatile unsigned *)0xff80054c
#define MIIIR                    *(volatile unsigned *)0xff800550
#define CRCEC                    *(volatile unsigned *)0xff800580
#define AEC                      *(volatile unsigned *)0xff800584
#define CEC                      *(volatile unsigned *)0xff800588
#define LFC                      *(volatile unsigned *)0xff80058c
#define SFC                      *(volatile unsigned *)0xff800590
#define LCC                      *(volatile unsigned *)0xff800594
#define EDC                      *(volatile unsigned *)0xff800598
#define MCC                      *(volatile unsigned *)0xff80059c
#define SAFR                     *(volatile unsigned *)0xff8005c0
#define SAR1                     *(volatile unsigned *)0xff8005c4
#define SAR2                     *(volatile unsigned *)0xff8005c8
#define SAR3                     *(volatile unsigned *)0xff8005cc
#define SAMHT1                   *(volatile unsigned *)0xff8005d0
#define SAMHT2                   *(volatile unsigned *)0xff8005d4
#define SAMHT3                   *(volatile unsigned *)0xff8005d8
#define SAMHT4                   *(volatile unsigned *)0xff8005dc

// DMA

#define DMA1A_BDP                *(volatile unsigned *)0xff900000
#define DMA1A_CR                 *(volatile unsigned *)0xff900010
#define DMA1A_SR                 *(volatile unsigned *)0xff900014
#define DMA1B_BDP                *(volatile unsigned *)0xff900020
#define DMA1B_CR                 *(volatile unsigned *)0xff900030
#define DMA1B_SR                 *(volatile unsigned *)0xff900034
#define DMA1C_BDP                *(volatile unsigned *)0xff900040
#define DMA1C_CR                 *(volatile unsigned *)0xff900050
#define DMA1C_SR                 *(volatile unsigned *)0xff900054
#define DMA1D_BDP                *(volatile unsigned *)0xff900060
#define DMA1D_CR                 *(volatile unsigned *)0xff900070
#define DMA1D_SR                 *(volatile unsigned *)0xff900074
#define DMA2_BDP                 *(volatile unsigned *)0xff900080
#define DMA2_CR                  *(volatile unsigned *)0xff900090
#define DMA2_SR                  *(volatile unsigned *)0xff900094

#endif
