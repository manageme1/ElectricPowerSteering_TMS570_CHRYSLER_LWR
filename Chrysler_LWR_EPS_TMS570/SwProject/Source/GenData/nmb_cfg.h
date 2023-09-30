/* -----------------------------------------------------------------------------
  Filename:    nmb_cfg.h
  Description: Toolversion: 01.00.35.01.21.00.21.01.00.00
               
               Serial Number: CBD1210021
               Customer Info: Nexteer
                              Package: CBD_Chrysler_SLP1_UDS_Sgl
                              Micro: TexasInstruments TMS570 - TMX570LS0805APGEQQ1
                              Compiler: Texas Instruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Nm_PwrTrainBasic
               
               Configuration   : C:\ccm_wa\EPS\570\LWR\Chrysler_LWR_EPS_TMS570\Tools\AsrProject\GENy\Chrsyler_SLP1_EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "Channel0":
                       Databasefile: C:\cmsynergy\My_ePWM_LWR\Chrysler_LWR_EPS_TMS570\Tools\AsrProject\GENy\CAN C v1313 15LXMod.dbc
                       Bussystem:    CAN
                       Manufacturer: DaimlerChrysler
                       Node:         EPS

  Generated by , 2013-07-31  15:36:16
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__NMB_CFG_H__)
#define __NMB_CFG_H__

/* Compatibility with other generation tools */
#define __NMBASIC_CFG_H__
/* Version */
#define NM_BASICDLL_VERSION                  0x0104
#define NM_BASICDLL_RELEASE_VERSION          0x00
#define cNmBasicNrOfChannels                 1
/* Nm instance properties */
#define NM_TYPE_BASIC
/* Options */
#define NMBASIC_DISABLE_SOFTWARE_CHECK
#define NMBASIC_BUSOFF_RECOV_IMMEDIAT
#define NMBASIC_DISABLE_BUSOFFREP_TIMER
#define NMBASIC_DISABLE_BUSOFFREP_MSG
/* Support for indexed NM */
#define NMBASIC_DISABLE_INDEXED_NM
#define NMBASIC_DISABLE_TX_OBSERVATION
#define NMBASIC_DISABLE_EXTERNAL_CANONLINE_HANDLING
#define NMBASIC_DISABLE_EARLY_BUSOFF_REINIT
#define NMBASIC_DISABLE_SET_CONTEXT
#define NMBASIC_DISABLE_GET_CONTEXT
/* Nm channel properties */
#define cNmBasicInitObject                   0
#define cNmBasicTaskPeriod                   10
#define cNmBasicBusOffRecTime                50
#define cNmBasicBusOffRecTimeSlow            500
#define cNmBasicBusOffChangeFastToSlow       1000
#define cNmBasicBusOffRepairedTime           2000

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 103168731
      #error "The magic number of the generated file <C:\Synergy_WorkArea\ESG_Dev_65\Chrysler_LWR_EPS_TMS570-tzj9qy\Chrysler_LWR_EPS_TMS570\SwProject\Source\_GenData\nmb_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 103168731
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __NMB_CFG_H__ */
