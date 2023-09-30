/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte.c
 *     Workspace:  C:/Sankar/Chrysler/Synergy/CL/Temp_work/Chrysler_LWR_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Mon Jul 18 14:56:55 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 MyCompany  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 **********************************************************************************************************************
  MISRA rule:   8.8: '%s' has external linkage but is being defined without any previous declaration.
  MISRA rule:  8.10: The object '%1s' is only referenced in the translation unit where it is defined.
  MISRA rule:  10.6: Integer literal constant is of an unsigned type but does not include a U suffix.
  MISRA rule:  13.3: Floating-point expressions shall not be tested for equality or inequality.
  MISRA rule:  14.1: The function '%1s' is defined but is not used within this project.
  MISRA rule:  14.2: This statement has no side-effect - it can be removed.
  MISRA rule:  14.3: Empty statement (';' on its own) - if this is deliberate, it is best to put ';' on a line by itself.
  MISRA rule:  18.4: An object of union type has been defined.
  MISRA rule:  19.1: #include statements in a file should only be preceded by other preprocessor directives or comments.
  MISRA rule:  19.4: Macro defines an unrecognised code-fragment.
  MISRA rule:  19.7: A function could probably be used instead of this function-like macro.
  MISRA rule:  19.8: [U] Macro argument is empty.
  MISRA rule: 12.10: The comma operator has been used outside a for-loop header.
  MISRA rule: 19.13: The # and ## preprocessor directives should not be used.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Rte_Type.h"
#include "Rte_Main.h"

#define RTE_CORE
#include "Rte_Ap_AbsHwPosScom.h"
#include "Rte_Ap_ActivePull.h"
#include "Rte_Ap_ApXcp.h"
#include "Rte_Ap_ArbLmt.h"
#include "Rte_Ap_Assist.h"
#include "Rte_Ap_AssistFirewall.h"
#include "Rte_Ap_AstLmt.h"
#include "Rte_Ap_AvgFricLrn.h"
#include "Rte_Ap_BVDiag.h"
#include "Rte_Ap_BatteryVoltage.h"
#include "Rte_Ap_CtrldDisShtdn.h"
#include "Rte_Ap_CurrCmd.h"
#include "Rte_Ap_CurrParamComp.h"
#include "Rte_Ap_Damping.h"
#include "Rte_Ap_DampingFirewall.h"
#include "Rte_Ap_DemIf.h"
#include "Rte_Ap_DiagMgr10.h"
#include "Rte_Ap_DiagMgr8.h"
#include "Rte_Ap_DiagMgr9.h"
#include "Rte_Ap_DigPhsReasDiag.h"
#include "Rte_Ap_EOTActuatorMng.h"
#include "Rte_Ap_ElePwr.h"
#include "Rte_Ap_FrqDepDmpnInrtCmp.h"
#include "Rte_Ap_Gsod.h"
#include "Rte_Ap_HaLFTO.h"
#include "Rte_Ap_HiLoadStall.h"
#include "Rte_Ap_HighFreqAssist.h"
#include "Rte_Ap_HwPwUp.h"
#include "Rte_Ap_HystComp.h"
#include "Rte_Ap_LmtCod.h"
#include "Rte_Ap_LrnEOT.h"
#include "Rte_Ap_MtrTempEst.h"
#include "Rte_Ap_PAwTO.h"
#include "Rte_Ap_PICurrCntrl.h"
#include "Rte_Ap_PeakCurrEst.h"
#include "Rte_Ap_Polarity.h"
#include "Rte_Ap_PwrLmtFuncCr.h"
#include "Rte_Ap_QuadDet.h"
#include "Rte_Ap_Return.h"
#include "Rte_Ap_ReturnFirewall.h"
#include "Rte_Ap_SignlCondn.h"
#include "Rte_Ap_SrlComInput.h"
#include "Rte_Ap_SrlComOutput.h"
#include "Rte_Ap_StOpCtrl.h"
#include "Rte_Ap_StaMd.h"
#include "Rte_Ap_StaMd8.h"
#include "Rte_Ap_StaMd9.h"
#include "Rte_Ap_StabilityComp.h"
#include "Rte_Ap_StabilityComp2.h"
#include "Rte_Ap_StbCTO.h"
#include "Rte_Ap_ThrmlDutyCycle.h"
#include "Rte_Ap_TqRsDg.h"
#include "Rte_Ap_TrqCanc.h"
#include "Rte_Ap_TrqCmdScl.h"
#include "Rte_Ap_TuningSelAuth.h"
#include "Rte_Ap_VehPwrMd.h"
#include "Rte_Ap_VehSpdLmt.h"
#include "Rte_Ap_WIRInputQual.h"
#include "Rte_Ap_WhlImbRej.h"
#include "Rte_Ap_ePWM2.h"
#include "Rte_CDD.h"
#include "Rte_Ccl.h"
#include "Rte_Cd_uDiag.h"
#include "Rte_Dem.h"
#include "Rte_EcuM.h"
#include "Rte_IoHwAbstraction.h"
#include "Rte_IoHwAbstractionUsr.h"
#include "Rte_NexteerLibs.h"
#include "Rte_NtWrap.h"
#include "Rte_NvM.h"
#include "Rte_NvMProxy.h"
#include "Rte_RteErrata10.h"
#include "Rte_RteErrata8.h"
#include "Rte_RteErrata9.h"
#include "Rte_Sa_BkCpPc.h"
#include "Rte_Sa_CDDInterface.h"
#include "Rte_Sa_CmMtrCurr.h"
#include "Rte_Sa_CtrlTemp.h"
#include "Rte_Sa_HwTrq.h"
#include "Rte_Sa_HwTrq2.h"
#include "Rte_Sa_MtrDrvDiag.h"
#include "Rte_Sa_MtrPos.h"
#include "Rte_Sa_MtrPos2.h"
#include "Rte_Sa_MtrPos3.h"
#include "Rte_Sa_MtrVel.h"
#include "Rte_Sa_MtrVel2.h"
#include "Rte_Sa_MtrVel3.h"
#include "Rte_Sa_OvrVoltMon.h"
#include "Rte_Sa_ShtdnMech.h"
#include "Rte_Sa_TmprlMon.h"
#include "Rte_Sa_TmprlMon2.h"
#include "Rte_WdgM.h"

#include "Os.h"

/* Os.h Compatibility Check */
#ifndef RTE_OS_VERSION
# if defined (OS_AR_MAJOR_VERSION) && defined (OS_AR_MINOR_VERSION)
#  define RTE_OS_VERSION ((OS_AR_MAJOR_VERSION * 10) + OS_AR_MINOR_VERSION)
# endif
#endif
#if !defined (OS_VENDOR_ID)
# define RTE_INCOMPATIBLE_OS
#else
# if (OS_VENDOR_ID != RTE_VENDOR_ID)
#  define RTE_INCOMPATIBLE_OS
# endif
#endif
#if defined (RTE_INCOMPATIBLE_OS)
# error "Incompatible AUTOSAR OS. The MICROSAR RTE requires MICROSAR OS if memory protection is enabled!"
#endif

#include "Rte_Hook.h"

/* AUTOSAR 2.1 compatibility */
#if !defined (STATIC) && defined (_STATIC_)
# define STATIC _STATIC_
#endif

#ifndef V_USE_DUMMY_STATEMENT
# define V_USE_DUMMY_STATEMENT STD_OFF
#endif


/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

typedef unsigned int Rte_BitType;


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/


#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ActivePull_PullCompCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_Ap_ArbLmt_ActiveFunctionBits_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_ArbLmt_DSTSlewComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_ArbLmt_HaLFSlewComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ArbLmt_IpTrqOvr_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ArbLmt_OpTrqOvr_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ArbLmt_PAReturnSclFct_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_ArbLmt_PICmpDisableLearning_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_ArbLmt_PrkAsstSlewComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AssistFirewall_AsstFirewallActive_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AssistFirewall_CombinedAssist_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_LimitPercentFiltered_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_PreLimitForStall_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_PreLimitTorque_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_SumLimTrqCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_TrqLimitMin_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AvgFricLrn_EstFric_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AvgFricLrn_FricOffset_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AvgFricLrn_SatEstFric_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_DampingFirewall_CombinedDamping_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ElePwr_ElectricPower_Watt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ElePwr_SupplyCurrent_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_HaLFTO_HaLFActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_Ap_HaLFTO_HaLFState_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_HaLFTO_HaLFSuspend_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_HwPwUp_MtrDrvrInitStart_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_HwPwUp_PwrDiscATestStart_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_HwPwUp_PwrDiscBTestStart_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_HwPwUp_TMFTestStart_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LmtCod_EOTGainLtd_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LmtCod_EOTLimitLtd_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LmtCod_OutputRampMultLtd_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LmtCod_StallLimitLtd_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LmtCod_ThermalLimitLtd_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LmtCod_VehSpdLimitLtd_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_LrnEOT_CCWFound_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LrnEOT_CCWPosition_HwDeg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_LrnEOT_CWFound_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_LrnEOT_CWPosition_HwDeg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_MtrTempEst_AssistMechTempEst_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_MtrTempEst_CuTempEst_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_MtrTempEst_MagTempEst_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_MtrTempEst_SiTempEst_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_PAwTO_HandsOnDetect_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_PAwTO_PABoostCurveSwitch_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_PAwTO_PrkAssistActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_Ap_PAwTO_PrkAssistState_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_PAwTO_PrkAssistSuspend_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_PICurrCntrl_DervLambdaAlphaDiag_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_PICurrCntrl_DervLambdaBetaDiag_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_PwrLmtFuncCr_FltTrqLmt_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_PwrLmtFuncCr_MRFMtrTrqCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_PwrLmtFuncCr_ThresholdExceeded_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ReturnFirewall_LimitedReturn_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_SignlCondn_Vehicle_LonAccel_KphpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_StabilityComp2_SysAssistCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_StbCTO_DSTActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_StbCTO_DSTSlewStart_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_Ap_StbCTO_DSTState_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ThrmlDutyCycle_DutyCycleLevel_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ThrmlDutyCycle_ThermLimitPerc_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ThrmlDutyCycle_ThermalLimit_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_Ap_TuningSelAuth_ActiveTunPers_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_Ap_TuningSelAuth_ActiveTunSet_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_WIRInputQual_QualWhlFreqL_Hz_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_WIRInputQual_QualWhlFreqR_Hz_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_WIRInputQual_WhlFreqQualified_Cnt_lgc = TRUE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_WhlImbRej_WhlImbRejCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Assist_BaseAssistCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_BatteryVoltage_SysC_Vecu_Volt_f32 = 5.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_BatteryVoltage_Vecu_Volt_f32 = 5.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_BatteryVoltage_VswitchClosed_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_ADCMtrCurr1_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_ADCMtrCurr2_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_CorrMtrCurrPosition_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_CorrMtrPosElec_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_Cos1Theta_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_DampingSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_DftAsstTbl_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_DrivingDynSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_CDDInterface_DutyCycleSmall_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_DwnldAsstGain_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_EOTImpactSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_EOTThermalSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_EngONSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_ExpectedOnTimeA_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_ExpectedOnTimeB_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_ExpectedOnTimeC_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_FreqDepDmpSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_FricLrnSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_HysAddSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_HystCompSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_CDDInterface_IgnCnt_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_KinIntDiagSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt16, RTE_VAR_INIT) Rte_CDDInterface_LRPRPhaseadvanceCaptured_Cnt_s16 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_LimitSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(ManufModeType, RTE_VAR_INIT) Rte_CDDInterface_MEC_Cnt_enum = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_MeasuredOnTimeA_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_MeasuredOnTimeB_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_MeasuredOnTimeC_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_MfgDiagInhibit_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_ModIdxFinal_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_ModIdxSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrDax_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrDaxRef_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrK1_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrK2_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQax_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQaxFinalRef_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrPosElec_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrPosMech_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt16, RTE_VAR_INIT) Rte_CDDInterface_MtrRevCntr_Cnt_s16 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrVoltDax_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrVoltQax_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_MultIgnSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_ParkAstSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_PhsReasA_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_PhsReasB_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_PhsReasC_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_PullCompSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_ReturnSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_RxMsgsSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_Sin1Theta_Volts_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_CDDInterface_SrlComSvcDft_Cnt_b32 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_SysCCorrectedMtrPos_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_TOEOLDisable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_ThermalDCSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_TrqRmpSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_WIREnabled_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CDDInterface_WhlImbRejSrlComSvcDft_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_CmMtrCurr_ComOffset_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CmMtrCurr_CurrentGainSvc_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CmMtrCurr_MtrCurr1TempOffset_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CmMtrCurr_MtrCurr2TempOffset_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CtrlTemp_FiltMeasTemp_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CtrldDisShtdn_CntDisMtrTrqCmdCRF_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_CtrldDisShtdn_CtrldDmpStsCmp_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CtrldDisShtdn_SysC_CRFMtrTrqCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CtrldDisShtdn_SysC_MRFMtrTrqCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrCmd_MtrCurrAngle_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrCmd_MtrCurrDaxRef_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrCmd_MtrCurrQaxRef_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt16, RTE_VAR_INIT) Rte_CurrCmd_MtrTrqCmdSign_Cnt_s16 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrCmd_MtrVoltDaxFF_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrCmd_MtrVoltQaxFF_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrParamComp_EstKe_VpRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrParamComp_EstLd_Henry_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrParamComp_EstLq_Henry_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CurrParamComp_EstR_Ohm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Damping_DampingCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_DiagMgr_DiagRampRate_XpmS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_DiagMgr_DiagRampValue_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagRmpToZeroActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsCtrldDisRmpPres_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsDefTemp_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsDefVehSpd_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsHWASbSystmFltPres_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsRecRmpToZeroFltPres_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsScomHWANotValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DiagMgr_DiagStsWIRDisable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_EOTActuatorMng_AssistEOTDamping_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_EOTActuatorMng_AssistEOTGain_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_EOTActuatorMng_AssistEOTLimit_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HiLoadStall_AssistStallLimit_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HighFreqAssist_HighFreqAssist_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HwTrq_AnaDiffHwTrq_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HwTrq_AnaHwTorque_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HwTrq_HwTrqScaleVal_VoltsPerDeg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_HwTrq_SrlComHwTrqValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HwTrq_SysCAnaHwTorque_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HwTrq_T1TrimVal_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HwTrq_T2TrimVal_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_HystComp_HysteresisComp_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_Batt_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_InvCos2Scaled_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_InvSin2Scaled_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_SysCT1ADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_SysCT2ADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_SysCVSwitch_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_T1ADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_T2ADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(FETPHASETYPE_ENUM, RTE_VAR_INIT) Rte_MtrDrvDiag_FETFaultPhase_Cnt_enum = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(FETFAULTTYPE_ENUM, RTE_VAR_INIT) Rte_MtrDrvDiag_FETFaultType_Cnt_enum = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_MtrDrvDiag_MtrDrvrInitComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrPos_AlignedCumMtrPosMRF_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrPos_CumMtrPosCRF_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrPos_CumMtrPosMRF_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrPos_SysCCumMtrPosCRF_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrPos_SysCCumMtrPosMRF_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrVel_CRFMotorVel_MtrRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrVel_HandwheelVel_HwRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_MtrVel_HwVelValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrVel_MRFMotorVel_MtrRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrVel_MRFMotorVelUnfiltered_MtrRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrVel_SysCHandwheelVel_HwRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_MtrVel_SysCMotorVelMRF_MtrRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_PeakCurrEst_EstPkCurr_AmpSq_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_PeakCurrEst_FiltEstPkCurr_AmpSq_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_Polarity_AssistAssyPolarity_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_Polarity_HwPosPolarity_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_Polarity_HwTrqPolarity_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_Polarity_MtrElecMechPolarity_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_Polarity_MtrPosPolarity_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_Polarity_MtrVelPolarity_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt32, RTE_VAR_INIT) Rte_Polarity_SysC_MtrElecMechPolarity_Cnt_s32 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt8, RTE_VAR_INIT) Rte_QuadDet_InstMtrDir_Cnt_s08 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_QuadDet_MtrQuad_Cnt_u08 = 1U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Return_ReturnCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Sa_BkCpPc_PwrDiscATestComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Sa_BkCpPc_PwrDiscBTestComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Sa_BkCpPc_PwrDiscClosed_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_HwTrq2_SysCHwTorqueSqd_HwNmSq_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrPos2_CorrectedMtrPos_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrPos2_CosTheta1_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrPos2_MechMtrPos_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrPos2_SinTheta1_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrPos2_SysCCorrectedMtrPos_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrPos2_SysCMechMtrPos_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrVel2_SysCDiagHandWheelVel_HwRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_MtrVel2_SysCDiagMtrVelMRF_MtrRadpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_AirTempOutside_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_AmbTempAvg_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_BattVolt_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_CMDIgnStat_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_CanMsgReceived_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_CfgStatRQ_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_DSTEOLDisable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_DSTEnableRqst_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_DSTErrCntrRecvLevel_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_DSTExtSystemFltActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_DSTFuncPresent_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_DSTRevGearValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(TOC_STATE, RTE_VAR_INIT) Rte_SrlComInput_DSTTOCState_Uls_enum = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_DSTTrqOvCmdRqst_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_DSTTrqOvRqstValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_SrlComInput_DesiredTunPers_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_DesiredTunPersTypH_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_SrlComInput_DesiredTunSet_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_EPS_Mode_Req_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_EngOilTemp_DegC_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_SrlComInput_EngRPM_Cnt_u16 = 1U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_EssEngStop_Cnt_lgc = TRUE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HaLFEnableRqst_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HaLFErrInterfaceActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HaLFExtSystemFltActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HaLFFuncPresent_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HaLFIntSystemFltActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HaLFSWATrqFail_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_HaLFTrqOvCmdRqst_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_HalfTrqOvRvrsGearEngage_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_IWSSCalcVspd_Kph_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_SrlComInput_NET_CFG_STAT_PT_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAEnableRqst_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAErrInterfaceActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAExtSystemFltActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAIntSystemFltActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_PAManoeuvrePhase_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_PATrqOvCmdRqst_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAWheelCriteriaMet_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_PAWhlDirRLStat_Cnt_u08 = 3U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_PAWhlDirRRStat_Cnt_u08 = 3U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAWhlPlsCntRLValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PAWhlPlsCntRRValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PrevHaLFEnableRqst_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_PrevHaLFTrqOvCmdRqst_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_PrkAsstFuncPresent_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_SpStPrsnt_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_SrlComLWhlSpd_Hz_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_SrlComLWhlSpdVld_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_SrlComRWhlSpd_Hz_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_SrlComRWhlSpdVld_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_SrlComVehSpd_Kph_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_StrgWhlAngl_HwDeg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_StrgWhlAnglValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_SrlComInput_TrqOvReverseGearEngage_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_VCBodyStyle_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_VCCountry_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_VCModelYear_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_SrlComInput_VCVehLine_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_SrlComInput_VehAccelX_KphpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_StOpCtrl_OutputRampMult_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_StOpCtrl_RampDwnStatusComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_StabilityComp_AssistCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_TmprlMon_TMFTestComplete_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_VehPwrMd_ATermActive_Cnt_lgc = TRUE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_VehPwrMd_CTermActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_VehPwrMd_OperRampRate_XpmS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_VehPwrMd_OperRampValue_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_VehSpdLmt_AstVehSpdLimit_MtrNm_f32 = 8.8F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_Xcp_ActiveTunOvrPtrAddr_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(TuningSessionAddrPtrEnum, RTE_VAR_INIT) Rte_Xcp_TuningSessionActPtr_Cnt_u8 = 255U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_ActivePull_SrlComYawRate_DegpS_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_AstLmt_LrnPnCtrCCDisable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_AstLmt_LrnPnCtrEnable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_LrnPnCtrTCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_AstLmt_PosServCCDisable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_AstLmt_PrkAssistCmd_MtrNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_BVDiag_CCLMSAActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_MtrTempEst_ScomAMDefeat_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_PwrLmtFuncCr_PosServEnable_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Ap_StabilityComp2_AssistDDFactor_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_StbCTO_DiagRedAssistLowVoltageActive_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt32, RTE_VAR_INIT) Rte_Ap_ThrmlDutyCycle_IgnTimeOff_Cnt_u32 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_Ap_ThrmlDutyCycle_VehTimeValid_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Assist_AssistDDFactor_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Assist_HwTrqHysAdd_HwNm_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_DaxIntegralGain_IPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_DaxIntegralGain_SPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_DaxPropotionalGain_IPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_DaxPropotionalGain_SPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrDaxRef_IPM_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQax12Mag_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQax12Ph_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQax6Mag_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQax6Ph_Rev_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrCurrQaxRef_IPM_Amp_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrPosComputationDelay_IPM_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrPosComputationDelay_SPM_Deg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(SInt16, RTE_VAR_INIT) Rte_CDDInterface_MtrTrqCmdSign_IPM_Cnt_s16 = 0;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrVoltDaxFF_IPM_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_MtrVoltQaxFF_IPM_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_QaxIntegralGain_IPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_QaxIntegralGain_SPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_QaxPropotionalGain_IPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_CDDInterface_QaxPropotionalGain_SPM_Uls_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Damping_DampingDDFactor_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Boolean, RTE_VAR_INIT) Rte_DigPhsReasDiag_PDActivateTest_Cnt_lgc = FALSE;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt8, RTE_VAR_INIT) Rte_HwTrq_AbsPosStepSignal_Cnt_u08 = 0U;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Return_ReturnDDFactor_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Return_ReturnOffset_HwDeg_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_BkCpPc_OVERRIDESIGDIAGADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_Sa_BkCpPc_PMOSDIAGADC_Volt_f32 = 0.0F;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Float, RTE_VAR_INIT) Rte_StabilityComp_AssistDDFactor_Uls_f32 = 1.0F;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_Xcp_ActiveTunPers_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_Xcp_ActiveTunSet_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_Xcp_DesiredTunPers_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(UInt16, RTE_VAR_INIT) Rte_Xcp_DesiredTunSet_Cnt_u16 = 0U;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"



/**********************************************************************************************************************
 * Constants
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

CONST(DT_SinTanLkpTbl_f32, RTE_CONST) Rte_T_SINELKPTBL_ULS_F32 = {
  0.0F, 0.00818114F, 0.016361732F, 0.024541229F, 0.032719083F, 0.040894747F, 0.049067674F, 0.057237317F, 0.065403129F, 
  0.073564564F, 0.081721074F, 0.089872115F, 0.09801714F, 0.106155605F, 0.114286965F, 0.122410675F, 0.130526192F, 
  0.138632973F, 0.146730475F, 0.154818155F, 0.162895473F, 0.170961889F, 0.179016861F, 0.187059852F, 0.195090322F, 
  0.203107734F, 0.211111552F, 0.21910124F, 0.227076263F, 0.235036087F, 0.24298018F, 0.250908009F, 0.258819045F, 
  0.266712758F, 0.274588618F, 0.2824461F, 0.290284677F, 0.298103825F, 0.30590302F, 0.31368174F, 0.321439465F, 
  0.329175676F, 0.336889853F, 0.344581482F, 0.352250048F, 0.359895037F, 0.367515937F, 0.375112238F, 0.382683432F, 
  0.390229013F, 0.397748475F, 0.405241314F, 0.41270703F, 0.420145122F, 0.427555093F, 0.434936447F, 0.44228869F, 
  0.44961133F, 0.456903876F, 0.46416584F, 0.471396737F, 0.478596082F, 0.485763394F, 0.492898192F, 0.5F, 0.507068342F, 
  0.514102744F, 0.521102737F, 0.528067851F, 0.53499762F, 0.541891581F, 0.548749271F, 0.555570233F, 0.562354009F, 
  0.569100146F, 0.575808191F, 0.582477697F, 0.589108216F, 0.595699305F, 0.602250522F, 0.608761429F, 0.615231591F, 
  0.621660573F, 0.628047947F, 0.634393284F, 0.64069616F, 0.646956153F, 0.653172843F, 0.659345815F, 0.665474656F, 
  0.671558955F, 0.677598305F, 0.683592302F, 0.689540545F, 0.695442635F, 0.701298178F, 0.707106781F, 0.712868056F, 
  0.718581618F, 0.724247083F, 0.729864073F, 0.735432211F, 0.740951125F, 0.746420446F, 0.751839808F, 0.757208847F, 
  0.762527204F, 0.767794524F, 0.773010453F, 0.778174644F, 0.783286749F, 0.788346428F, 0.79335334F, 0.798307152F, 
  0.803207532F, 0.80805415F, 0.812846685F, 0.817584813F, 0.822268219F, 0.826896589F, 0.831469612F, 0.835986984F, 
  0.840448401F, 0.844853565F, 0.849202182F, 0.853493959F, 0.85772861F, 0.861905852F, 0.866025404F, 0.870086991F, 
  0.874090342F, 0.878035187F, 0.881921264F, 0.885748312F, 0.889516075F, 0.893224301F, 0.896872742F, 0.900461152F, 
  0.903989293F, 0.907456928F, 0.910863825F, 0.914209756F, 0.917494496F, 0.920717827F, 0.923879533F, 0.926979401F, 
  0.930017224F, 0.932992799F, 0.935905927F, 0.938756413F, 0.941544065F, 0.944268698F, 0.94693013F, 0.949528181F, 
  0.952062678F, 0.954533451F, 0.956940336F, 0.95928317F, 0.961561798F, 0.963776066F, 0.965925826F, 0.968010935F, 
  0.970031253F, 0.971986645F, 0.973876979F, 0.97570213F, 0.977461975F, 0.979156396F, 0.98078528F, 0.982348519F, 
  0.983846006F, 0.985277642F, 0.986643332F, 0.987942984F, 0.98917651F, 0.990343829F, 0.991444861F, 0.992479535F, 
  0.993447779F, 0.99434953F, 0.995184727F, 0.995953314F, 0.996655239F, 0.997290457F, 0.997858923F, 0.998360601F, 
  0.998795456F, 0.99916346F, 0.999464588F, 0.999698819F, 0.999866138F, 0.999966534F, 1.0F
};
CONST(DT_SinTanLkpTbl_f32, RTE_CONST) Rte_T_TANLKPTBL_ULS_F32 = {
  0.004090638F, 0.012272462F, 0.02045593F, 0.028642137F, 0.036832181F, 0.045027163F, 0.053228185F, 0.061436353F, 
  0.069652776F, 0.077878569F, 0.086114851F, 0.094362747F, 0.102623388F, 0.110897912F, 0.119187464F, 0.127493199F, 
  0.135816279F, 0.144157876F, 0.152519173F, 0.160901363F, 0.16930565F, 0.177733252F, 0.1861854F, 0.194663336F, 
  0.203168319F, 0.211701624F, 0.22026454F, 0.228858373F, 0.237484449F, 0.24614411F, 0.254838719F, 0.26356966F, 
  0.272338336F, 0.281146175F, 0.289994626F, 0.298885164F, 0.307819289F, 0.316798527F, 0.325824432F, 0.334898586F, 
  0.344022602F, 0.353198123F, 0.362426827F, 0.371710423F, 0.381050656F, 0.390449308F, 0.399908199F, 0.409429188F, 
  0.419014177F, 0.42866511F, 0.438383974F, 0.448172804F, 0.458033683F, 0.467968746F, 0.477980176F, 0.488070214F, 
  0.498241156F, 0.508495358F, 0.518835235F, 0.529263268F, 0.539782003F, 0.550394056F, 0.561102113F, 0.571908936F, 
  0.582817365F, 0.593830322F, 0.604950811F, 0.616181926F, 0.627526852F, 0.638988871F, 0.650571362F, 0.662277811F, 
  0.674111811F, 0.686077068F, 0.698177407F, 0.710416776F, 0.722799253F, 0.735329049F, 0.748010517F, 0.760848156F, 
  0.77384662F, 0.787010724F, 0.80034545F, 0.813855957F, 0.827547589F, 0.841425884F, 0.855496581F, 0.869765633F, 
  0.884239215F, 0.898923737F, 0.913825852F, 0.928952473F, 0.944310785F, 0.959908255F, 0.97575265F, 0.991852054F, 
  1.008214881F, 1.024849894F, 1.041766226F, 1.058973397F, 1.076481336F, 1.094300405F, 1.112441422F, 1.130915688F, 
  1.149735011F, 1.168911743F, 1.188458804F, 1.208389721F, 1.228718659F, 1.249460468F, 1.270630717F, 1.292245742F, 
  1.314322696F, 1.336879599F, 1.359935394F, 1.383510008F, 1.407624417F, 1.432300717F, 1.4575622F, 1.483433437F, 
  1.509940366F, 1.53711039F, 1.564972483F, 1.593557306F, 1.622897326F, 1.65302696F, 1.683982719F, 1.715803371F, 
  1.74853012F, 1.782206799F, 1.816880088F, 1.852599743F, 1.889418859F, 1.927394157F, 1.966586293F, 2.007060212F, 
  2.048885533F, 2.092136977F, 2.136894845F, 2.183245548F, 2.231282201F, 2.281105287F, 2.332823403F, 2.386554093F, 
  2.442424793F, 2.500573891F, 2.561151937F, 2.624323002F, 2.690266237F, 2.759177648F, 2.831272122F, 2.906785762F, 
  2.985978571F, 3.069137557F, 3.156580334F, 3.248659312F, 3.345766601F, 3.448339762F, 3.556868595F, 3.671903171F, 
  3.7940634F, 3.924050484F, 4.062660691F, 4.210802034F, 4.369514589F, 4.539995414F, 4.723629328F, 4.92202723F, 
  5.137074201F, 5.370990435F, 5.626409169F, 5.90647743F, 6.214987771F, 6.556552741F, 6.936839169F, 7.362887641F, 
  7.843555652F, 8.390144119F, 9.01730236F, 9.744367451F, 10.59740238F, 11.61239886F, 12.84050299F, 14.35692958F, 
  16.27700796F, 18.78703932F, 22.20881656F, 27.15017067F, 34.91359651F, 48.88558064F, 81.48324021F, 244.460629F, 
  244.460629F
};

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP_UNSPECIFIED
#include "MemMap.h"

VAR(Float, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_TrqCmdScl_TorqueCmdSF_Uls_f32;
VAR(Boolean, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_Ap_AstLmt_SteerAsstDefeat;
VAR(CoggingCancTrq, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_Ap_TrqCanc_CogTrqCal;
VAR(CoggingCancTrqRplComp, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_Ap_TrqCanc_CogTrqRplComp;
VAR(EOLTrqStepType, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_HwTrq_EOLTrqStepData;
VAR(CurrTempOffsetType, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_CmMtrCurr_CurrTempOffset;
VAR(PhaseCurrCal_DataType, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_CmMtrCurr_ShCurrCal;
VAR(EOLNomMtrParamType, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_CurrParamComp_EOLNomMtrParam;
VAR(HwTrqScale_Datatype, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_HwTrq_HwTrqScaleData;
VAR(HwTrqTrim_Datatype, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_HwTrq_HwTrqTrimData;
VAR(MtrPosCal_DataType, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_MtrPos_MtrPosSnsr_EOLData;
VAR(Polarity_DataType, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_Polarity_Polarity_Cnt_Str;

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP_UNSPECIFIED
#include "MemMap.h"

VAR(AvgFricLrnType, RTE_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP) Rte_Ap_AvgFricLrn_AvgFricLrnData;
VAR(EOTLearned_DataType, RTE_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP) Rte_Ap_LrnEOT_LearnedEOT;
VAR(OvervoltageDataType, RTE_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP) Rte_BatteryVoltage_OvervoltageData;

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP_UNSPECIFIED
#include "MemMap.h"


/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_100ms_10, RTE_VAR_NOINIT) Rte_Task_100ms_10;
#define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_100ms_8, RTE_VAR_NOINIT) Rte_Task_100ms_8;
#define RTE_STOP_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_100ms_9, RTE_VAR_NOINIT) Rte_Task_100ms_9;
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_10ms_10, RTE_VAR_NOINIT) Rte_Task_10ms_10;
#define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_10ms_9, RTE_VAR_NOINIT) Rte_Task_10ms_9;
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_2ms_10, RTE_VAR_NOINIT) Rte_Task_2ms_10;
#define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_2ms_8, RTE_VAR_NOINIT) Rte_Task_2ms_8;
#define RTE_STOP_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_2ms_9, RTE_VAR_NOINIT) Rte_Task_2ms_9;
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_4ms_10, RTE_VAR_NOINIT) Rte_Task_4ms_10;
#define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_4ms_8, RTE_VAR_NOINIT) Rte_Task_4ms_8;
#define RTE_STOP_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_4ms_9, RTE_VAR_NOINIT) Rte_Task_4ms_9;
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_Init_10, RTE_VAR_NOINIT) Rte_Task_Init_10;
#define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_Init_8, RTE_VAR_NOINIT) Rte_Task_Init_8;
#define RTE_STOP_SEC_VAR_Ap_8_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_Init_9, RTE_VAR_NOINIT) Rte_Task_Init_9;
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_Trans_10, RTE_VAR_NOINIT) Rte_Task_Trans_10;
#define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_tsTask_Trans_9, RTE_VAR_NOINIT) Rte_Task_Trans_9;
#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"


/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

VAR(UInt32, RTE_VAR_INIT) Rte_Irv_NexteerLibs_Time_mS_u32 = 0U;

#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_CODE
#include "MemMap.h"

STATIC FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint16 num);
STATIC FUNC(void, RTE_CODE) Rte_IncDisableFlags_Ap_StaMd8_SystemState8_Mode(Rte_ModeType_StaMd_Mode nextMode);
STATIC FUNC(void, RTE_CODE) Rte_DecDisableFlags_Ap_StaMd8_SystemState8_Mode(Rte_ModeType_StaMd_Mode previousMode);
STATIC FUNC(void, RTE_CODE) Rte_IncDisableFlags_Ap_StaMd9_SystemState9_Mode(Rte_ModeType_StaMd_Mode nextMode);
STATIC FUNC(void, RTE_CODE) Rte_DecDisableFlags_Ap_StaMd9_SystemState9_Mode(Rte_ModeType_StaMd_Mode previousMode);
STATIC FUNC(void, RTE_CODE) Rte_IncDisableFlags_StaMd_SystemState_Mode(Rte_ModeType_StaMd_Mode nextMode);
STATIC FUNC(void, RTE_CODE) Rte_DecDisableFlags_StaMd_SystemState_Mode(Rte_ModeType_StaMd_Mode previousMode);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

typedef struct
{
  Rte_ModeType_StaMd_Mode Rte_ModeQueue[1+1];
} Rte_ModeInfoType_Ap_StaMd8_SystemState8_Mode;

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
STATIC VAR(Rte_ModeInfoType_Ap_StaMd8_SystemState8_Mode, RTE_VAR_INIT) Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode = {
  {
    RTE_MODE_StaMd_Mode_WARMINIT,
    RTE_MODE_StaMd_Mode_WARMINIT
  }
};
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_INIT) Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode = RTE_TRANSITION_StaMd_Mode;
#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

typedef struct
{
  Rte_ModeType_StaMd_Mode Rte_ModeQueue[1+1];
} Rte_ModeInfoType_Ap_StaMd9_SystemState9_Mode;

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
STATIC VAR(Rte_ModeInfoType_Ap_StaMd9_SystemState9_Mode, RTE_VAR_INIT) Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode = {
  {
    RTE_MODE_StaMd_Mode_WARMINIT,
    RTE_MODE_StaMd_Mode_WARMINIT
  }
};
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_INIT) Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode = RTE_TRANSITION_StaMd_Mode;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"



typedef struct
{
  Rte_ModeType_StaMd_Mode Rte_ModeQueue[1+1];
} Rte_ModeInfoType_StaMd_SystemState_Mode;

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
STATIC VAR(Rte_ModeInfoType_StaMd_SystemState_Mode, RTE_VAR_INIT) Rte_ModeInfo_StaMd_SystemState_Mode = {
  {
    RTE_MODE_StaMd_Mode_WARMINIT,
    RTE_MODE_StaMd_Mode_WARMINIT
  }
};
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"
VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_INIT) Rte_ModeMachine_StaMd_SystemState_Mode = RTE_TRANSITION_StaMd_Mode;
#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"


CONST(EventMaskType, RTE_CONST) Rte_ModeExitEventMask_Ap_StaMd8_SystemState8_Mode[4] =
{
  (EventMaskType) 0, /* DISABLE */
  Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns, /* OFF */
  (EventMaskType) 0, /* OPERATE */
  (EventMaskType) 0  /* WARMINIT */
};

CONST(EventMaskType, RTE_CONST) Rte_ModeEntryEventMask_Ap_StaMd8_SystemState8_Mode[4] =
{
  Rte_Ev_Run_RteErrata8_RteErrata8_Trns, /* DISABLE */
  Rte_Ev_Run_RteErrata8_RteErrata8_Trns, /* OFF */
  Rte_Ev_Run_RteErrata8_RteErrata8_Trns, /* OPERATE */
  Rte_Ev_Run_RteErrata8_RteErrata8_Trns  /* WARMINIT */
};


CONST(EventMaskType, RTE_CONST) Rte_ModeExitEventMask_Ap_StaMd9_SystemState9_Mode[4] =
{
  (EventMaskType) 0, /* DISABLE */
  Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF, /* OFF */
  (EventMaskType) 0, /* OPERATE */
  (EventMaskType) 0  /* WARMINIT */
};

CONST(EventMaskType, RTE_CONST) Rte_ModeEntryEventMask_Ap_StaMd9_SystemState9_Mode[4] =
{
  Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE, /* DISABLE */
  Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF, /* OFF */
  Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE, /* OPERATE */
  Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT  /* WARMINIT */
};


CONST(EventMaskType, RTE_CONST) Rte_ModeExitEventMask_StaMd_SystemState_Mode[4] =
{
  Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1, /* DISABLE */
  Rte_Ev_Run_DiagMgr_DiagMgr10_Trns, /* OFF */
  Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2, /* OPERATE */
  (EventMaskType) 0  /* WARMINIT */
};

CONST(EventMaskType, RTE_CONST) Rte_ModeEntryEventMask_StaMd_SystemState_Mode[4] =
{
  Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE, /* DISABLE */
  Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF, /* OFF */
  Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE, /* OPERATE */
  Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT  /* WARMINIT */
};


#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"


/**********************************************************************************************************************
 * Trigger Disable Flags
 *********************************************************************************************************************/

#define Rte_TriggerDisableMaxCount_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2 1
#define Rte_TriggerDisableMaxCount_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 2
#define Rte_TriggerDisableMaxCount_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2 1
#define Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 2
#define Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 2
#define Rte_TriggerDisableMaxCount_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1 1
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3 1
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1 1
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1 1
#define Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1 1
#define Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 2
#define Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2 1
#define Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 2
#define Rte_TriggerDisableMaxCount_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 2
#define Rte_TriggerDisableMaxCount_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 2

typedef struct
{
  Rte_BitType Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2 : 1;
  Rte_BitType Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 : 2;
  Rte_BitType Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1 : 1;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3 : 1;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1 : 1;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1 : 1;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 : 2;
  Rte_BitType Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 : 2;
} Rte_Ap_10_TriggerDisableFlagsType;
typedef struct
{
  Rte_BitType Rte_Trigger_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1 : 1;
} Rte_Ap_8_TriggerDisableFlagsType;
typedef struct
{
  Rte_BitType Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 : 2;
  Rte_BitType Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2 : 1;
  Rte_BitType Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2 : 1;
  Rte_BitType Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 : 2;
  Rte_BitType Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 : 2;
} Rte_Ap_9_TriggerDisableFlagsType;

#define RTE_START_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"

STATIC VAR(Rte_Ap_10_TriggerDisableFlagsType, RTE_VAR_INIT) Rte_Ap_10_TriggerDisableFlags = {
  1,
  1,
  1,
  1,
  0,
  1,
  1,
  0,
  1,
  1,
  1,
  0,
  0,
  1,
  1,
  0,
  0,
  1
};

#define RTE_STOP_SEC_VAR_Ap_10_INIT_UNSPECIFIED
#include "MemMap.h"


#define Rte_Ap_10_TriggerDisableFlagsInit() (Rte_MemClr(&Rte_Ap_10_TriggerDisableFlags, sizeof(Rte_Ap_10_TriggerDisableFlagsType)))

#define RTE_START_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"

STATIC VAR(Rte_Ap_8_TriggerDisableFlagsType, RTE_VAR_INIT) Rte_Ap_8_TriggerDisableFlags = {
  0
};

#define RTE_STOP_SEC_VAR_Ap_8_INIT_UNSPECIFIED
#include "MemMap.h"


#define Rte_Ap_8_TriggerDisableFlagsInit() (Rte_MemClr(&Rte_Ap_8_TriggerDisableFlags, sizeof(Rte_Ap_8_TriggerDisableFlagsType)))

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

STATIC VAR(Rte_Ap_9_TriggerDisableFlagsType, RTE_VAR_INIT) Rte_Ap_9_TriggerDisableFlags = {
  1,
  0,
  1,
  1,
  0,
  0,
  1
};

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define Rte_Ap_9_TriggerDisableFlagsInit() (Rte_MemClr(&Rte_Ap_9_TriggerDisableFlags, sizeof(Rte_Ap_9_TriggerDisableFlagsType)))


/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if (OSTICKDURATION < 1000)
# error "The MICROSAR RTE does not support OSTICKDURATION < 1000 ns"
#endif

#define RTE_TICKDURATION (OSTICKDURATION / 1000U)
#define RTE_USEC(val) ((TickType)((uint32)(val) / (uint32)RTE_TICKDURATION))
#define RTE_MSEC(val) ((TickType)RTE_CONST_MSEC_##val)
#define RTE_SEC(val)  ((TickType)RTE_CONST_SEC_##val)

#define RTE_MSEC_BASE 1000UL
#define RTE_SEC_BASE  1000000UL

#if ((0) < (0xFFFFFFFFUL / RTE_MSEC_BASE))
# define RTE_CONST_MSEC_0 (((uint32)(0) * RTE_MSEC_BASE) / (uint32)RTE_TICKDURATION)
#else
# if (RTE_TICKDURATION > RTE_MSEC_BASE)
#  define RTE_CONST_MSEC_0 ((uint32)(0) / ((uint32)RTE_TICKDURATION / RTE_MSEC_BASE))
# else
#  define RTE_CONST_MSEC_0 ((uint32)(0) * (RTE_MSEC_BASE / (uint32)RTE_TICKDURATION))
# endif
#endif

#if ((10) < (0xFFFFFFFFUL / RTE_MSEC_BASE))
# define RTE_CONST_MSEC_10 (((uint32)(10) * RTE_MSEC_BASE) / (uint32)RTE_TICKDURATION)
#else
# if (RTE_TICKDURATION > RTE_MSEC_BASE)
#  define RTE_CONST_MSEC_10 ((uint32)(10) / ((uint32)RTE_TICKDURATION / RTE_MSEC_BASE))
# else
#  define RTE_CONST_MSEC_10 ((uint32)(10) * (RTE_MSEC_BASE / (uint32)RTE_TICKDURATION))
# endif
#endif

#if ((100) < (0xFFFFFFFFUL / RTE_MSEC_BASE))
# define RTE_CONST_MSEC_100 (((uint32)(100) * RTE_MSEC_BASE) / (uint32)RTE_TICKDURATION)
#else
# if (RTE_TICKDURATION > RTE_MSEC_BASE)
#  define RTE_CONST_MSEC_100 ((uint32)(100) / ((uint32)RTE_TICKDURATION / RTE_MSEC_BASE))
# else
#  define RTE_CONST_MSEC_100 ((uint32)(100) * (RTE_MSEC_BASE / (uint32)RTE_TICKDURATION))
# endif
#endif

#if ((2) < (0xFFFFFFFFUL / RTE_MSEC_BASE))
# define RTE_CONST_MSEC_2 (((uint32)(2) * RTE_MSEC_BASE) / (uint32)RTE_TICKDURATION)
#else
# if (RTE_TICKDURATION > RTE_MSEC_BASE)
#  define RTE_CONST_MSEC_2 ((uint32)(2) / ((uint32)RTE_TICKDURATION / RTE_MSEC_BASE))
# else
#  define RTE_CONST_MSEC_2 ((uint32)(2) * (RTE_MSEC_BASE / (uint32)RTE_TICKDURATION))
# endif
#endif

#if ((4) < (0xFFFFFFFFUL / RTE_MSEC_BASE))
# define RTE_CONST_MSEC_4 (((uint32)(4) * RTE_MSEC_BASE) / (uint32)RTE_TICKDURATION)
#else
# if (RTE_TICKDURATION > RTE_MSEC_BASE)
#  define RTE_CONST_MSEC_4 ((uint32)(4) / ((uint32)RTE_TICKDURATION / RTE_MSEC_BASE))
# else
#  define RTE_CONST_MSEC_4 ((uint32)(4) * (RTE_MSEC_BASE / (uint32)RTE_TICKDURATION))
# endif
#endif


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)


/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h"

#if (RTE_TICKDURATION > (100UL * 1000UL))
# error "The cycle time of runnable(s) <uDiagStaticRegs_Per>, <CmMtrCurr_Per1>, <PeakCurrEst_Per2>, <DiagMgr10_Per>, <CurrParamComp_Per2>, <HwTrq_Per3>, <NtWrap_Per1> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (100UL * 1000UL))
# error "The cycle time of runnable(s) <DiagMgr8_Per>, <HwTrq2_Per3> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (100UL * 1000UL))
# error "The cycle time of runnable(s) <MtrTempEst_Per1>, <ActivePull_Per3>, <CtrlTemp_Per2>, <DiagMgr9_Per>, <DiagMgr_Per2>, <ThrmlDutyCycle_Per1> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (10UL * 1000UL))
# error "The cycle time of runnable(s) <ShtdnMech_Per1>, <TuningSelAuth_Per1>, <CDDInterface_Per4>, <TmprlMon_Per3>, <PAwTO_Per2>, <uDiagECC_Per>, <Polarity_Per1>, <AbsHwPosScom_Per2>, <AbsHwPosScom_Per3>, <uDiagVIM_Per>, <PwrLmtFuncCr_Per2> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (10UL * 1000UL))
# error "The cycle time of runnable(s) <CclPollingTask>, <LrnEOT_Per1>, <Ccl_10_0msTaskCont>, <SrlComOutput_Per1>, <BVDiag_Per1>, <AvgFricLrn_Per1>, <DemIf_SetInputsConditions>, <SrlComInput_Per1>, <ApXcp_Per1>, <ElePwr_Per1> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (2UL * 1000UL))
# error "The cycle time of runnable(s) <OvrVoltMon_Per1>, <DampingFirewall_Per1>, <TrqCanc_Per1>, <IoHwAb_FdbkPathAdc>, <PAwTO_Per1>, <DiagMgr_Per1>, <TrqCmdScl_Per1>, <AbsHwPosScom_Per1>, <PeakCurrEst_Per1>, <Assist_Per1>, <MtrDrvDiag_Per2>, <TmprlMon_Per1>, <CDDInterface_Per2>, <StbCTO_Per1>, <WhlImbRej_Per1>, <PwrLmtFuncCr_Per1>, <uDiagLossOfExec_Per2>, <WIRInputQual_Per1>, <StabilityComp_Per1>, <PICurrCntrl_Per2>, <HighFreqAssist_Per1>, <TqRsDg_Per1>, <HystComp_Per1>, <WhlImbRej_Per3>, <AssistFirewall_Per1>, <CurrParamComp_Per1>, <HwPwUp_Per1>, <SignlCondn_Per1>, <SystemTime_Per1>, <Damping_Per1>, <StOpCtrl_Per1>, <TmprlMon_Per2>, <IoHwAb_FwdPathAdc>, <HaLFTO_Per1>, <FrqDepDmpnInrtCmp_Per1>, <CDDInterface_Per1>, <AstLmt_Per1>, <MtrDrvDiag_Per1>, <CmMtrCurr_Per3>, <QuadDet_Per1>, <Return_Per1>, <MtrPos_Per2>, <CmMtrCurr_Per2>, <HwTrq_Per1>, <CurrCmd_Per1>, <ReturnFirewall_Per1>, <StaMd_Per1>, <DigPhsReasDiag_Per1>, <MtrPos2_Per1>, <CtrldDisShtdn_Per1>, <MtrVel_Per1>, <EOTActuatorMng_Per1> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (2UL * 1000UL))
# error "The cycle time of runnable(s) <TmprlMon2_Per1>, <StabilityComp2_Per1>, <Gsod_Per1>, <HwTrq2_Per1>, <StaMd8_Per1>, <MtrVel2_Per1>, <MtrPos3_Per1> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (2UL * 1000UL))
# error "The cycle time of runnable(s) <VehPwrMd_Per1>, <BatteryVoltage_Per1>, <VehSpdLmt_Per1>, <DAQ_2msTL>, <HiLoadStall_Per1>, <StaMd9_Per1>, <LmtCod_Per1>, <BkCpPc_Per1>, <Ccl_2_0msTaskCont>, <ActivePull_Per1>, <CtrlTemp_Per1>, <ActivePull_Per2> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (4UL * 1000UL))
# error "The cycle time of runnable(s) <HwTrq_Per2>, <MtrVel_Per2>, <WhlImbRej_Per2>, <uDiagLossOfExec_Per3>, <ArbLmt_Per1> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (4UL * 1000UL))
# error "The cycle time of runnable(s) <HwTrq2_Per2>, <MtrVel2_Per2>, <MtrPos3_Per2> is smaller than the tick time of the operating system."
#endif

#if (RTE_TICKDURATION > (4UL * 1000UL))
# error "The cycle time of runnable(s) <BatteryVoltage_Per2> is smaller than the tick time of the operating system."
#endif

STATIC FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint16 num)
{
  P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) dst = ptr;
  uint16 i;
  for (i = 0; i < num; i++)
  {
    dst[i] = 0;
  }
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void)
{
  /* activate the tasks */
  Rte_Task_Activate(Task_Init_10);
  (void)ActivateTask(Task_Init_10);
  Rte_Task_Activate(Task_Init_8);
  (void)ActivateTask(Task_Init_8);
  Rte_Task_Activate(Task_Init_9);
  (void)ActivateTask(Task_Init_9);
  Rte_Task_Activate(Task_Trans_10);
  (void)ActivateTask(Task_Trans_10);
  Rte_Task_Activate(Task_Trans_8);
  (void)ActivateTask(Task_Trans_8);
  Rte_Task_Activate(Task_Trans_9);
  (void)ActivateTask(Task_Trans_9);

  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE_Task_100ms_10_0_100ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(100));
  (void)SetRelAlarm(Rte_Al_TE_Task_100ms_8_0_100ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(100));
  (void)SetRelAlarm(Rte_Al_TE_Task_100ms_9_0_100ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(100));
  (void)SetRelAlarm(Rte_Al_TE_Task_10ms_10_0_10ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(10));
  (void)SetRelAlarm(Rte_Al_TE_Task_10ms_9_0_10ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(10));
  (void)SetRelAlarm(Rte_Al_TE_Task_2ms_10_0_2ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(2));
  (void)SetRelAlarm(Rte_Al_TE_Task_2ms_8_0_2ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(2));
  (void)SetRelAlarm(Rte_Al_TE_Task_2ms_9_0_2ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(2));
  (void)SetRelAlarm(Rte_Al_TE_Task_4ms_10_0_4ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(4));
  (void)SetRelAlarm(Rte_Al_TE_Task_4ms_8_0_4ms, RTE_MSEC(0) + (TickType)1, RTE_MSEC(4));
  (void)SetRelAlarm(Rte_Al_TE_BatteryVoltage_BatteryVoltage_Per2, RTE_MSEC(0) + (TickType)1, RTE_MSEC(4));

  /* mode management initialization part 2 */
  Rte_Task_SetEvent(Task_Trans_8, Rte_ModeEntryEventMask_Ap_StaMd8_SystemState8_Mode[RTE_MODE_StaMd_Mode_WARMINIT]);
  (void)SetEvent(Task_Trans_8, Rte_ModeEntryEventMask_Ap_StaMd8_SystemState8_Mode[RTE_MODE_StaMd_Mode_WARMINIT]);

  Rte_Task_SetEvent(Task_Trans_9, Rte_ModeEntryEventMask_Ap_StaMd9_SystemState9_Mode[RTE_MODE_StaMd_Mode_WARMINIT]);
  (void)SetEvent(Task_Trans_9, Rte_ModeEntryEventMask_Ap_StaMd9_SystemState9_Mode[RTE_MODE_StaMd_Mode_WARMINIT]);

  Rte_Task_SetEvent(Task_Trans_10, Rte_ModeEntryEventMask_StaMd_SystemState_Mode[RTE_MODE_StaMd_Mode_WARMINIT]);
  (void)SetEvent(Task_Trans_10, Rte_ModeEntryEventMask_StaMd_SystemState_Mode[RTE_MODE_StaMd_Mode_WARMINIT]);


  return RTE_E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void)
{
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE_Task_100ms_10_0_100ms);
  (void)CancelAlarm(Rte_Al_TE_Task_100ms_8_0_100ms);
  (void)CancelAlarm(Rte_Al_TE_Task_100ms_9_0_100ms);
  (void)CancelAlarm(Rte_Al_TE_Task_10ms_10_0_10ms);
  (void)CancelAlarm(Rte_Al_TE_Task_10ms_9_0_10ms);
  (void)CancelAlarm(Rte_Al_TE_Task_2ms_10_0_2ms);
  (void)CancelAlarm(Rte_Al_TE_Task_2ms_8_0_2ms);
  (void)CancelAlarm(Rte_Al_TE_Task_2ms_9_0_2ms);
  (void)CancelAlarm(Rte_Al_TE_Task_4ms_10_0_4ms);
  (void)CancelAlarm(Rte_Al_TE_Task_4ms_8_0_4ms);
  (void)CancelAlarm(Rte_Al_TE_BatteryVoltage_BatteryVoltage_Per2);

  return RTE_E_OK;
}

FUNC(void, RTE_CODE) Rte_InitMemory(void)
{
  /* set default values for internal data */
  Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32 = 0.0F;
  Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32 = 0.0F;
  Rte_Ap_ActivePull_PullCompCmd_MtrNm_f32 = 0.0F;
  Rte_Ap_ArbLmt_ActiveFunctionBits_Cnt_u08 = 0U;
  Rte_Ap_ArbLmt_DSTSlewComplete_Cnt_lgc = FALSE;
  Rte_Ap_ArbLmt_HaLFSlewComplete_Cnt_lgc = FALSE;
  Rte_Ap_ArbLmt_IpTrqOvr_HwNm_f32 = 0.0F;
  Rte_Ap_ArbLmt_OpTrqOvr_MtrNm_f32 = 0.0F;
  Rte_Ap_ArbLmt_PAReturnSclFct_Uls_f32 = 1.0F;
  Rte_Ap_ArbLmt_PICmpDisableLearning_Cnt_lgc = FALSE;
  Rte_Ap_ArbLmt_PrkAsstSlewComplete_Cnt_lgc = FALSE;
  Rte_Ap_AssistFirewall_AsstFirewallActive_Uls_f32 = 0.0F;
  Rte_Ap_AssistFirewall_CombinedAssist_MtrNm_f32 = 0.0F;
  Rte_Ap_AstLmt_LimitPercentFiltered_Uls_f32 = 0.0F;
  Rte_Ap_AstLmt_PreLimitForStall_MtrNm_f32 = 0.0F;
  Rte_Ap_AstLmt_PreLimitTorque_MtrNm_f32 = 0.0F;
  Rte_Ap_AstLmt_SumLimTrqCmd_MtrNm_f32 = 0.0F;
  Rte_Ap_AstLmt_TrqLimitMin_MtrNm_f32 = 0.0F;
  Rte_Ap_AvgFricLrn_EstFric_HwNm_f32 = 0.0F;
  Rte_Ap_AvgFricLrn_FricOffset_HwNm_f32 = 0.0F;
  Rte_Ap_AvgFricLrn_SatEstFric_HwNm_f32 = 0.0F;
  Rte_Ap_DampingFirewall_CombinedDamping_MtrNm_f32 = 0.0F;
  Rte_Ap_ElePwr_ElectricPower_Watt_f32 = 0.0F;
  Rte_Ap_ElePwr_SupplyCurrent_Amp_f32 = 0.0F;
  Rte_Ap_HaLFTO_HaLFActive_Cnt_lgc = FALSE;
  Rte_Ap_HaLFTO_HaLFState_Cnt_u08 = 0U;
  Rte_Ap_HaLFTO_HaLFSuspend_Cnt_lgc = FALSE;
  Rte_Ap_HwPwUp_MtrDrvrInitStart_Cnt_lgc = FALSE;
  Rte_Ap_HwPwUp_PwrDiscATestStart_Cnt_lgc = FALSE;
  Rte_Ap_HwPwUp_PwrDiscBTestStart_Cnt_lgc = FALSE;
  Rte_Ap_HwPwUp_TMFTestStart_Cnt_lgc = FALSE;
  Rte_Ap_LmtCod_EOTGainLtd_Uls_f32 = 1.0F;
  Rte_Ap_LmtCod_EOTLimitLtd_MtrNm_f32 = 8.8F;
  Rte_Ap_LmtCod_OutputRampMultLtd_Uls_f32 = 0.0F;
  Rte_Ap_LmtCod_StallLimitLtd_MtrNm_f32 = 8.8F;
  Rte_Ap_LmtCod_ThermalLimitLtd_MtrNm_f32 = 8.8F;
  Rte_Ap_LmtCod_VehSpdLimitLtd_MtrNm_f32 = 8.8F;
  Rte_Ap_LrnEOT_CCWFound_Cnt_lgc = FALSE;
  Rte_Ap_LrnEOT_CCWPosition_HwDeg_f32 = 0.0F;
  Rte_Ap_LrnEOT_CWFound_Cnt_lgc = FALSE;
  Rte_Ap_LrnEOT_CWPosition_HwDeg_f32 = 0.0F;
  Rte_Ap_MtrTempEst_AssistMechTempEst_DegC_f32 = 0.0F;
  Rte_Ap_MtrTempEst_CuTempEst_DegC_f32 = 0.0F;
  Rte_Ap_MtrTempEst_MagTempEst_DegC_f32 = 0.0F;
  Rte_Ap_MtrTempEst_SiTempEst_DegC_f32 = 0.0F;
  Rte_Ap_PAwTO_HandsOnDetect_Cnt_lgc = FALSE;
  Rte_Ap_PAwTO_PABoostCurveSwitch_Cnt_lgc = FALSE;
  Rte_Ap_PAwTO_PrkAssistActive_Cnt_lgc = FALSE;
  Rte_Ap_PAwTO_PrkAssistState_Cnt_u08 = 0U;
  Rte_Ap_PAwTO_PrkAssistSuspend_Cnt_lgc = FALSE;
  Rte_Ap_PICurrCntrl_DervLambdaAlphaDiag_Volt_f32 = 0.0F;
  Rte_Ap_PICurrCntrl_DervLambdaBetaDiag_Volt_f32 = 0.0F;
  Rte_Ap_PwrLmtFuncCr_FltTrqLmt_Uls_f32 = 0.0F;
  Rte_Ap_PwrLmtFuncCr_MRFMtrTrqCmd_MtrNm_f32 = 0.0F;
  Rte_Ap_PwrLmtFuncCr_ThresholdExceeded_Cnt_lgc = FALSE;
  Rte_Ap_ReturnFirewall_LimitedReturn_MtrNm_f32 = 0.0F;
  Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32 = 0.0F;
  Rte_Ap_SignlCondn_Vehicle_LonAccel_KphpS_f32 = 0.0F;
  Rte_Ap_StabilityComp2_SysAssistCmd_MtrNm_f32 = 0.0F;
  Rte_Ap_StbCTO_DSTActive_Cnt_lgc = FALSE;
  Rte_Ap_StbCTO_DSTSlewStart_Cnt_lgc = FALSE;
  Rte_Ap_StbCTO_DSTState_Cnt_u08 = 0U;
  Rte_Ap_ThrmlDutyCycle_DutyCycleLevel_Uls_f32 = 0.0F;
  Rte_Ap_ThrmlDutyCycle_ThermLimitPerc_Uls_f32 = 0.0F;
  Rte_Ap_ThrmlDutyCycle_ThermalLimit_MtrNm_f32 = 8.8F;
  Rte_Ap_TuningSelAuth_ActiveTunPers_Cnt_u16 = 0U;
  Rte_Ap_TuningSelAuth_ActiveTunSet_Cnt_u16 = 0U;
  Rte_Ap_WIRInputQual_QualWhlFreqL_Hz_f32 = 0.0F;
  Rte_Ap_WIRInputQual_QualWhlFreqR_Hz_f32 = 0.0F;
  Rte_Ap_WIRInputQual_WhlFreqQualified_Cnt_lgc = TRUE;
  Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32 = 0.0F;
  Rte_Ap_WhlImbRej_WhlImbRejCmd_MtrNm_f32 = 0.0F;
  Rte_Assist_BaseAssistCmd_MtrNm_f32 = 0.0F;
  Rte_BatteryVoltage_SysC_Vecu_Volt_f32 = 5.0F;
  Rte_BatteryVoltage_Vecu_Volt_f32 = 5.0F;
  Rte_BatteryVoltage_VswitchClosed_Cnt_lgc = FALSE;
  Rte_CDDInterface_ADCMtrCurr1_Volts_f32 = 0.0F;
  Rte_CDDInterface_ADCMtrCurr2_Volts_f32 = 0.0F;
  Rte_CDDInterface_CorrMtrCurrPosition_Rev_f32 = 0.0F;
  Rte_CDDInterface_CorrMtrPosElec_Rev_f32 = 0.0F;
  Rte_CDDInterface_Cos1Theta_Volts_f32 = 0.0F;
  Rte_CDDInterface_DampingSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_DftAsstTbl_Cnt_lgc = FALSE;
  Rte_CDDInterface_DrivingDynSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_DutyCycleSmall_Cnt_u16 = 0U;
  Rte_CDDInterface_DwnldAsstGain_Uls_f32 = 0.0F;
  Rte_CDDInterface_EOTImpactSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_EOTThermalSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_EngONSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_ExpectedOnTimeA_Cnt_u32 = 0U;
  Rte_CDDInterface_ExpectedOnTimeB_Cnt_u32 = 0U;
  Rte_CDDInterface_ExpectedOnTimeC_Cnt_u32 = 0U;
  Rte_CDDInterface_FreqDepDmpSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_FricLrnSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_HysAddSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_HystCompSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_IgnCnt_Cnt_u16 = 0U;
  Rte_CDDInterface_KinIntDiagSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_LRPRPhaseadvanceCaptured_Cnt_s16 = 0;
  Rte_CDDInterface_LimitSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_MEC_Cnt_enum = 0U;
  Rte_CDDInterface_MeasuredOnTimeA_Cnt_u32 = 0U;
  Rte_CDDInterface_MeasuredOnTimeB_Cnt_u32 = 0U;
  Rte_CDDInterface_MeasuredOnTimeC_Cnt_u32 = 0U;
  Rte_CDDInterface_MfgDiagInhibit_Cnt_lgc = FALSE;
  Rte_CDDInterface_ModIdxFinal_Uls_f32 = 0.0F;
  Rte_CDDInterface_ModIdxSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_MtrCurrDax_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrDaxRef_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrK1_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrK2_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQax_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQaxFinalRef_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_MtrPosElec_Rev_f32 = 0.0F;
  Rte_CDDInterface_MtrPosMech_Rev_f32 = 0.0F;
  Rte_CDDInterface_MtrRevCntr_Cnt_s16 = 0;
  Rte_CDDInterface_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_MtrVoltDax_Volt_f32 = 0.0F;
  Rte_CDDInterface_MtrVoltQax_Volt_f32 = 0.0F;
  Rte_CDDInterface_MultIgnSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_ParkAstSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_PhsReasA_Volts_f32 = 0.0F;
  Rte_CDDInterface_PhsReasB_Volts_f32 = 0.0F;
  Rte_CDDInterface_PhsReasC_Volts_f32 = 0.0F;
  Rte_CDDInterface_PullCompSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_ReturnSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_RxMsgsSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_Sin1Theta_Volts_f32 = 0.0F;
  Rte_CDDInterface_SrlComSvcDft_Cnt_b32 = 0U;
  Rte_CDDInterface_SysCCorrectedMtrPos_Rev_f32 = 0.0F;
  Rte_CDDInterface_TOEOLDisable_Cnt_lgc = FALSE;
  Rte_CDDInterface_ThermalDCSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_TrqRmpSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CDDInterface_WIREnabled_Cnt_lgc = FALSE;
  Rte_CDDInterface_WhlImbRejSrlComSvcDft_Cnt_lgc = FALSE;
  Rte_CmMtrCurr_ComOffset_Cnt_u16 = 0U;
  Rte_CmMtrCurr_CurrentGainSvc_Cnt_lgc = FALSE;
  Rte_CmMtrCurr_MtrCurr1TempOffset_Volt_f32 = 0.0F;
  Rte_CmMtrCurr_MtrCurr2TempOffset_Volt_f32 = 0.0F;
  Rte_CtrlTemp_FiltMeasTemp_DegC_f32 = 0.0F;
  Rte_CtrldDisShtdn_CntDisMtrTrqCmdCRF_MtrNm_f32 = 0.0F;
  Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32 = 0.0F;
  Rte_CtrldDisShtdn_CtrldDmpStsCmp_Cnt_lgc = FALSE;
  Rte_CtrldDisShtdn_SysC_CRFMtrTrqCmd_MtrNm_f32 = 0.0F;
  Rte_CtrldDisShtdn_SysC_MRFMtrTrqCmd_MtrNm_f32 = 0.0F;
  Rte_CurrCmd_MtrCurrAngle_Rev_f32 = 0.0F;
  Rte_CurrCmd_MtrCurrDaxRef_Amp_f32 = 0.0F;
  Rte_CurrCmd_MtrCurrQaxRef_Amp_f32 = 0.0F;
  Rte_CurrCmd_MtrTrqCmdSign_Cnt_s16 = 0;
  Rte_CurrCmd_MtrVoltDaxFF_Volt_f32 = 0.0F;
  Rte_CurrCmd_MtrVoltQaxFF_Volt_f32 = 0.0F;
  Rte_CurrParamComp_EstKe_VpRadpS_f32 = 0.0F;
  Rte_CurrParamComp_EstLd_Henry_f32 = 0.0F;
  Rte_CurrParamComp_EstLq_Henry_f32 = 0.0F;
  Rte_CurrParamComp_EstR_Ohm_f32 = 0.0F;
  Rte_Damping_DampingCmd_MtrNm_f32 = 0.0F;
  Rte_DiagMgr_DiagRampRate_XpmS_f32 = 0.0F;
  Rte_DiagMgr_DiagRampValue_Uls_f32 = 0.0F;
  Rte_DiagMgr_DiagRmpToZeroActive_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsCtrldDisRmpPres_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsDefTemp_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsDefVehSpd_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsHWASbSystmFltPres_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsRecRmpToZeroFltPres_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsScomHWANotValid_Cnt_lgc = FALSE;
  Rte_DiagMgr_DiagStsWIRDisable_Cnt_lgc = FALSE;
  Rte_EOTActuatorMng_AssistEOTDamping_MtrNm_f32 = 0.0F;
  Rte_EOTActuatorMng_AssistEOTGain_Uls_f32 = 1.0F;
  Rte_EOTActuatorMng_AssistEOTLimit_MtrNm_f32 = 8.8F;
  Rte_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_MtrNm_f32 = 0.0F;
  Rte_HiLoadStall_AssistStallLimit_MtrNm_f32 = 8.8F;
  Rte_HighFreqAssist_HighFreqAssist_MtrNm_f32 = 0.0F;
  Rte_HwTrq_AnaDiffHwTrq_Volt_f32 = 0.0F;
  Rte_HwTrq_AnaHwTorque_HwNm_f32 = 0.0F;
  Rte_HwTrq_HwTrqScaleVal_VoltsPerDeg_f32 = 0.0F;
  Rte_HwTrq_SrlComHwTrqValid_Cnt_lgc = FALSE;
  Rte_HwTrq_SysCAnaHwTorque_HwNm_f32 = 0.0F;
  Rte_HwTrq_T1TrimVal_Volt_f32 = 0.0F;
  Rte_HwTrq_T2TrimVal_Volt_f32 = 0.0F;
  Rte_HystComp_HysteresisComp_MtrNm_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_Batt_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_InvCos2Scaled_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_InvSin2Scaled_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_SysCT1ADC_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_SysCT2ADC_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_SysCVSwitch_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_T1ADC_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_T2ADC_Volt_f32 = 0.0F;
  Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32 = 0.0F;
  Rte_MtrDrvDiag_FETFaultPhase_Cnt_enum = 0U;
  Rte_MtrDrvDiag_FETFaultType_Cnt_enum = 0U;
  Rte_MtrDrvDiag_MtrDrvrInitComplete_Cnt_lgc = FALSE;
  Rte_MtrPos_AlignedCumMtrPosMRF_Deg_f32 = 0.0F;
  Rte_MtrPos_CumMtrPosCRF_Deg_f32 = 0.0F;
  Rte_MtrPos_CumMtrPosMRF_Deg_f32 = 0.0F;
  Rte_MtrPos_SysCCumMtrPosCRF_Deg_f32 = 0.0F;
  Rte_MtrPos_SysCCumMtrPosMRF_Deg_f32 = 0.0F;
  Rte_MtrVel_CRFMotorVel_MtrRadpS_f32 = 0.0F;
  Rte_MtrVel_HandwheelVel_HwRadpS_f32 = 0.0F;
  Rte_MtrVel_HwVelValid_Cnt_lgc = FALSE;
  Rte_MtrVel_MRFMotorVel_MtrRadpS_f32 = 0.0F;
  Rte_MtrVel_MRFMotorVelUnfiltered_MtrRadpS_f32 = 0.0F;
  Rte_MtrVel_SysCHandwheelVel_HwRadpS_f32 = 0.0F;
  Rte_MtrVel_SysCMotorVelMRF_MtrRadpS_f32 = 0.0F;
  Rte_PeakCurrEst_EstPkCurr_AmpSq_f32 = 0.0F;
  Rte_PeakCurrEst_FiltEstPkCurr_AmpSq_f32 = 0.0F;
  Rte_Polarity_AssistAssyPolarity_Cnt_s08 = 0;
  Rte_Polarity_HwPosPolarity_Cnt_s08 = 0;
  Rte_Polarity_HwTrqPolarity_Cnt_s08 = 0;
  Rte_Polarity_MtrElecMechPolarity_Cnt_s08 = 0;
  Rte_Polarity_MtrPosPolarity_Cnt_s08 = 0;
  Rte_Polarity_MtrVelPolarity_Cnt_s08 = 0;
  Rte_Polarity_SysC_MtrElecMechPolarity_Cnt_s32 = 0;
  Rte_QuadDet_InstMtrDir_Cnt_s08 = 0;
  Rte_QuadDet_MtrQuad_Cnt_u08 = 1U;
  Rte_Return_ReturnCmd_MtrNm_f32 = 0.0F;
  Rte_Sa_BkCpPc_PwrDiscATestComplete_Cnt_lgc = FALSE;
  Rte_Sa_BkCpPc_PwrDiscBTestComplete_Cnt_lgc = FALSE;
  Rte_Sa_BkCpPc_PwrDiscClosed_Cnt_lgc = FALSE;
  Rte_Sa_HwTrq2_SysCHwTorqueSqd_HwNmSq_f32 = 0.0F;
  Rte_Sa_MtrPos2_CorrectedMtrPos_Rev_f32 = 0.0F;
  Rte_Sa_MtrPos2_CosTheta1_Volt_f32 = 0.0F;
  Rte_Sa_MtrPos2_MechMtrPos_Rev_f32 = 0.0F;
  Rte_Sa_MtrPos2_SinTheta1_Volt_f32 = 0.0F;
  Rte_Sa_MtrPos2_SysCCorrectedMtrPos_Rev_f32 = 0.0F;
  Rte_Sa_MtrPos2_SysCMechMtrPos_Rev_f32 = 0.0F;
  Rte_Sa_MtrVel2_SysCDiagHandWheelVel_HwRadpS_f32 = 0.0F;
  Rte_Sa_MtrVel2_SysCDiagMtrVelMRF_MtrRadpS_f32 = 0.0F;
  Rte_SrlComInput_AirTempOutside_DegC_f32 = 0.0F;
  Rte_SrlComInput_AmbTempAvg_DegC_f32 = 0.0F;
  Rte_SrlComInput_BattVolt_Volt_f32 = 0.0F;
  Rte_SrlComInput_CMDIgnStat_Cnt_u08 = 0U;
  Rte_SrlComInput_CanMsgReceived_Cnt_lgc = FALSE;
  Rte_SrlComInput_CfgStatRQ_Cnt_u08 = 0U;
  Rte_SrlComInput_DSTEOLDisable_Cnt_lgc = FALSE;
  Rte_SrlComInput_DSTEnableRqst_Cnt_lgc = FALSE;
  Rte_SrlComInput_DSTErrCntrRecvLevel_Cnt_u08 = 0U;
  Rte_SrlComInput_DSTExtSystemFltActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_DSTFuncPresent_Cnt_lgc = FALSE;
  Rte_SrlComInput_DSTRevGearValid_Cnt_lgc = FALSE;
  Rte_SrlComInput_DSTTOCState_Uls_enum = 0U;
  Rte_SrlComInput_DSTTrqOvCmdRqst_HwNm_f32 = 0.0F;
  Rte_SrlComInput_DSTTrqOvRqstValid_Cnt_lgc = FALSE;
  Rte_SrlComInput_DesiredTunPers_Cnt_u16 = 0U;
  Rte_SrlComInput_DesiredTunPersTypH_Cnt_u08 = 0U;
  Rte_SrlComInput_DesiredTunSet_Cnt_u16 = 0U;
  Rte_SrlComInput_EPS_Mode_Req_Cnt_u08 = 0U;
  Rte_SrlComInput_EngOilTemp_DegC_f32 = 0.0F;
  Rte_SrlComInput_EngRPM_Cnt_u16 = 1U;
  Rte_SrlComInput_EssEngStop_Cnt_lgc = TRUE;
  Rte_SrlComInput_HaLFEnableRqst_Cnt_lgc = FALSE;
  Rte_SrlComInput_HaLFErrInterfaceActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_HaLFExtSystemFltActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_HaLFFuncPresent_Cnt_lgc = FALSE;
  Rte_SrlComInput_HaLFIntSystemFltActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_HaLFSWATrqFail_Cnt_lgc = FALSE;
  Rte_SrlComInput_HaLFTrqOvCmdRqst_MtrNm_f32 = 0.0F;
  Rte_SrlComInput_HalfTrqOvRvrsGearEngage_Cnt_lgc = FALSE;
  Rte_SrlComInput_IWSSCalcVspd_Kph_f32 = 0.0F;
  Rte_SrlComInput_NET_CFG_STAT_PT_Cnt_u16 = 0U;
  Rte_SrlComInput_PAEnableRqst_Cnt_lgc = FALSE;
  Rte_SrlComInput_PAErrInterfaceActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_PAExtSystemFltActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_PAIntSystemFltActive_Cnt_lgc = FALSE;
  Rte_SrlComInput_PAManoeuvrePhase_Cnt_u08 = 0U;
  Rte_SrlComInput_PATrqOvCmdRqst_HwNm_f32 = 0.0F;
  Rte_SrlComInput_PAWheelCriteriaMet_Cnt_lgc = FALSE;
  Rte_SrlComInput_PAWhlDirRLStat_Cnt_u08 = 3U;
  Rte_SrlComInput_PAWhlDirRRStat_Cnt_u08 = 3U;
  Rte_SrlComInput_PAWhlPlsCntRLValid_Cnt_lgc = FALSE;
  Rte_SrlComInput_PAWhlPlsCntRRValid_Cnt_lgc = FALSE;
  Rte_SrlComInput_PrevHaLFEnableRqst_Cnt_lgc = FALSE;
  Rte_SrlComInput_PrevHaLFTrqOvCmdRqst_MtrNm_f32 = 0.0F;
  Rte_SrlComInput_PrkAsstFuncPresent_Cnt_lgc = FALSE;
  Rte_SrlComInput_SpStPrsnt_Cnt_lgc = FALSE;
  Rte_SrlComInput_SrlComLWhlSpd_Hz_f32 = 0.0F;
  Rte_SrlComInput_SrlComLWhlSpdVld_Cnt_lgc = FALSE;
  Rte_SrlComInput_SrlComRWhlSpd_Hz_f32 = 0.0F;
  Rte_SrlComInput_SrlComRWhlSpdVld_Cnt_lgc = FALSE;
  Rte_SrlComInput_SrlComVehSpd_Kph_f32 = 0.0F;
  Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc = FALSE;
  Rte_SrlComInput_StrgWhlAngl_HwDeg_f32 = 0.0F;
  Rte_SrlComInput_StrgWhlAnglValid_Cnt_lgc = FALSE;
  Rte_SrlComInput_TrqOvReverseGearEngage_Cnt_lgc = FALSE;
  Rte_SrlComInput_VCBodyStyle_Cnt_u08 = 0U;
  Rte_SrlComInput_VCCountry_Cnt_u08 = 0U;
  Rte_SrlComInput_VCModelYear_Cnt_u08 = 0U;
  Rte_SrlComInput_VCVehLine_Cnt_u08 = 0U;
  Rte_SrlComInput_VehAccelX_KphpS_f32 = 0.0F;
  Rte_StOpCtrl_OutputRampMult_Uls_f32 = 0.0F;
  Rte_StOpCtrl_RampDwnStatusComplete_Cnt_lgc = FALSE;
  Rte_StabilityComp_AssistCmd_MtrNm_f32 = 0.0F;
  Rte_TmprlMon_TMFTestComplete_Cnt_lgc = FALSE;
  Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32 = 0.0F;
  Rte_VehPwrMd_ATermActive_Cnt_lgc = TRUE;
  Rte_VehPwrMd_CTermActive_Cnt_lgc = FALSE;
  Rte_VehPwrMd_OperRampRate_XpmS_f32 = 0.0F;
  Rte_VehPwrMd_OperRampValue_Uls_f32 = 0.0F;
  Rte_VehSpdLmt_AstVehSpdLimit_MtrNm_f32 = 8.8F;
  Rte_Xcp_ActiveTunOvrPtrAddr_Cnt_u32 = 0U;
  Rte_Xcp_TuningSessionActPtr_Cnt_u8 = 255U;
  Rte_Ap_ActivePull_SrlComYawRate_DegpS_f32 = 0.0F;
  Rte_Ap_AstLmt_LrnPnCtrCCDisable_Cnt_lgc = FALSE;
  Rte_Ap_AstLmt_LrnPnCtrEnable_Cnt_lgc = FALSE;
  Rte_Ap_AstLmt_LrnPnCtrTCmd_MtrNm_f32 = 0.0F;
  Rte_Ap_AstLmt_PosServCCDisable_Cnt_lgc = FALSE;
  Rte_Ap_AstLmt_PrkAssistCmd_MtrNm_f32 = 0.0F;
  Rte_Ap_BVDiag_CCLMSAActive_Cnt_lgc = FALSE;
  Rte_Ap_MtrTempEst_ScomAMDefeat_Cnt_lgc = FALSE;
  Rte_Ap_PwrLmtFuncCr_PosServEnable_Cnt_lgc = FALSE;
  Rte_Ap_StabilityComp2_AssistDDFactor_Uls_f32 = 1.0F;
  Rte_Ap_StbCTO_DiagRedAssistLowVoltageActive_Cnt_lgc = FALSE;
  Rte_Ap_ThrmlDutyCycle_IgnTimeOff_Cnt_u32 = 0U;
  Rte_Ap_ThrmlDutyCycle_VehTimeValid_Cnt_lgc = FALSE;
  Rte_Assist_AssistDDFactor_Uls_f32 = 1.0F;
  Rte_Assist_HwTrqHysAdd_HwNm_f32 = 0.0F;
  Rte_CDDInterface_DaxIntegralGain_IPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_DaxIntegralGain_SPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_DaxPropotionalGain_IPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_DaxPropotionalGain_SPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrDaxRef_IPM_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQax12Mag_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQax12Ph_Rev_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQax6Mag_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQax6Ph_Rev_f32 = 0.0F;
  Rte_CDDInterface_MtrCurrQaxRef_IPM_Amp_f32 = 0.0F;
  Rte_CDDInterface_MtrPosComputationDelay_IPM_Deg_f32 = 0.0F;
  Rte_CDDInterface_MtrPosComputationDelay_SPM_Deg_f32 = 0.0F;
  Rte_CDDInterface_MtrTrqCmdSign_IPM_Cnt_s16 = 0;
  Rte_CDDInterface_MtrVoltDaxFF_IPM_Volt_f32 = 0.0F;
  Rte_CDDInterface_MtrVoltQaxFF_IPM_Volt_f32 = 0.0F;
  Rte_CDDInterface_QaxIntegralGain_IPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_QaxIntegralGain_SPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_QaxPropotionalGain_IPM_Uls_f32 = 0.0F;
  Rte_CDDInterface_QaxPropotionalGain_SPM_Uls_f32 = 0.0F;
  Rte_Damping_DampingDDFactor_Uls_f32 = 1.0F;
  Rte_DigPhsReasDiag_PDActivateTest_Cnt_lgc = FALSE;
  Rte_HwTrq_AbsPosStepSignal_Cnt_u08 = 0U;
  Rte_Return_ReturnDDFactor_Uls_f32 = 1.0F;
  Rte_Return_ReturnOffset_HwDeg_f32 = 0.0F;
  Rte_Sa_BkCpPc_OVERRIDESIGDIAGADC_Volt_f32 = 0.0F;
  Rte_Sa_BkCpPc_PMOSDIAGADC_Volt_f32 = 0.0F;
  Rte_StabilityComp_AssistDDFactor_Uls_f32 = 1.0F;
  Rte_Xcp_ActiveTunPers_Cnt_u16 = 0U;
  Rte_Xcp_ActiveTunSet_Cnt_u16 = 0U;
  Rte_Xcp_DesiredTunPers_Cnt_u16 = 0U;
  Rte_Xcp_DesiredTunSet_Cnt_u16 = 0U;

  /* initialize inter-runnable variables */
  Rte_Irv_NexteerLibs_Time_mS_u32 = 0U;

  /* mode management initialization part 1 */
  /* reset Trigger Disable Flags */
  Rte_Ap_10_TriggerDisableFlagsInit();
  Rte_Ap_8_TriggerDisableFlagsInit();
  Rte_Ap_9_TriggerDisableFlagsInit();


  Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode = RTE_TRANSITION_StaMd_Mode;

  Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[0] = RTE_MODE_StaMd_Mode_WARMINIT;
  Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[1] = RTE_MODE_StaMd_Mode_WARMINIT;

  Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode = RTE_TRANSITION_StaMd_Mode;

  Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[0] = RTE_MODE_StaMd_Mode_WARMINIT;
  Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[1] = RTE_MODE_StaMd_Mode_WARMINIT;
  Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3++;
  Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1++;
  Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1++;
  Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2++;

  Rte_ModeMachine_StaMd_SystemState_Mode = RTE_TRANSITION_StaMd_Mode;

  Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[0] = RTE_MODE_StaMd_Mode_WARMINIT;
  Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[1] = RTE_MODE_StaMd_Mode_WARMINIT;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1++;
  Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2++;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Exclusive area access
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Mode switch handling functions
 *********************************************************************************************************************/
STATIC FUNC(void, RTE_CODE) Rte_IncDisableFlags_Ap_StaMd8_SystemState8_Mode(Rte_ModeType_StaMd_Mode nextMode)
{
  if (nextMode == RTE_MODE_StaMd_Mode_OFF)
  {
    Rte_Assert(Rte_Ap_8_TriggerDisableFlags.Rte_Trigger_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_8_TriggerDisableFlags.Rte_Trigger_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1++;
  }
}

STATIC FUNC(void, RTE_CODE) Rte_DecDisableFlags_Ap_StaMd8_SystemState8_Mode(Rte_ModeType_StaMd_Mode previousMode)
{
  if (previousMode == RTE_MODE_StaMd_Mode_OFF)
  {
    Rte_Assert(Rte_Ap_8_TriggerDisableFlags.Rte_Trigger_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_8_TriggerDisableFlags.Rte_Trigger_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1--;
  }
}



/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Ap_StaMd8_SystemState8_Mode(Rte_ModeType_StaMd_Mode nextMode)
{
  Std_ReturnType ret = RTE_E_OK;
  Rte_SwitchHook_Ap_StaMd8_SystemState8_Mode_Start(nextMode);

  Rte_Assert(((nextMode < RTE_TRANSITION_StaMd_Mode) && ( nextMode >= 0)), RTE_E_INTERNAL_ModeArgument);

  SuspendOSInterrupts();
  if (Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode == RTE_TRANSITION_StaMd_Mode)
  {
    ret = RTE_E_LIMIT;
    ResumeOSInterrupts();
  }
  else
  {
    EventMaskType ModeSwitchEventMask;
    Rte_ModeType_StaMd_Mode currentMode = Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode;

    ModeSwitchEventMask = Rte_ModeExitEventMask_Ap_StaMd8_SystemState8_Mode[currentMode] | Rte_ModeEntryEventMask_Ap_StaMd8_SystemState8_Mode[nextMode];

    if ((ModeSwitchEventMask == (EventMaskType)0) && (currentMode != nextMode))
    {
      if (nextMode == RTE_MODE_StaMd_Mode_OFF)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_8;
      }
    }

    if (ModeSwitchEventMask != (EventMaskType)0)
    {
      Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[0] = nextMode;
      Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[1] = currentMode;

      Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode = RTE_TRANSITION_StaMd_Mode;
      if (currentMode != nextMode)
      {
        Rte_IncDisableFlags_Ap_StaMd8_SystemState8_Mode(nextMode);
      }
      ResumeOSInterrupts();

      Rte_Task_SetEvent(Task_Trans_8, ModeSwitchEventMask);
      (void)SetEvent(Task_Trans_8, ModeSwitchEventMask);
    }
    else
    {
      Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode = nextMode;
      ResumeOSInterrupts();
    }
  }

  Rte_SwitchHook_Ap_StaMd8_SystemState8_Mode_Return(nextMode);
  return ret;
}


/**********************************************************************************************************************
 * Mode switch handling functions
 *********************************************************************************************************************/
STATIC FUNC(void, RTE_CODE) Rte_IncDisableFlags_Ap_StaMd9_SystemState9_Mode(Rte_ModeType_StaMd_Mode nextMode)
{
  if (nextMode == RTE_MODE_StaMd_Mode_DISABLE)
  {
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 < Rte_TriggerDisableMaxCount_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 < Rte_TriggerDisableMaxCount_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 < Rte_TriggerDisableMaxCount_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2++;
  }
  else if (nextMode == RTE_MODE_StaMd_Mode_OFF)
  {
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 < Rte_TriggerDisableMaxCount_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2 < Rte_TriggerDisableMaxCount_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 < Rte_TriggerDisableMaxCount_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 < Rte_TriggerDisableMaxCount_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2++;
  }
  else if (nextMode == RTE_MODE_StaMd_Mode_WARMINIT)
  {
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 < Rte_TriggerDisableMaxCount_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 < Rte_TriggerDisableMaxCount_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1++;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 < Rte_TriggerDisableMaxCount_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2++;
  }
}

STATIC FUNC(void, RTE_CODE) Rte_DecDisableFlags_Ap_StaMd9_SystemState9_Mode(Rte_ModeType_StaMd_Mode previousMode)
{
  if (previousMode == RTE_MODE_StaMd_Mode_DISABLE)
  {
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2--;
  }
  else if (previousMode == RTE_MODE_StaMd_Mode_OFF)
  {
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2--;
  }
  else if (previousMode == RTE_MODE_StaMd_Mode_WARMINIT)
  {
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1--;
    Rte_Assert(Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2--;
  }
}



/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Ap_StaMd9_SystemState9_Mode(Rte_ModeType_StaMd_Mode nextMode)
{
  Std_ReturnType ret = RTE_E_OK;
  Rte_SwitchHook_Ap_StaMd9_SystemState9_Mode_Start(nextMode);

  Rte_Assert(((nextMode < RTE_TRANSITION_StaMd_Mode) && ( nextMode >= 0)), RTE_E_INTERNAL_ModeArgument);

  SuspendOSInterrupts();
  if (Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode == RTE_TRANSITION_StaMd_Mode)
  {
    ret = RTE_E_LIMIT;
    ResumeOSInterrupts();
  }
  else
  {
    EventMaskType ModeSwitchEventMask;
    Rte_ModeType_StaMd_Mode currentMode = Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode;

    ModeSwitchEventMask = Rte_ModeExitEventMask_Ap_StaMd9_SystemState9_Mode[currentMode] | Rte_ModeEntryEventMask_Ap_StaMd9_SystemState9_Mode[nextMode];

    if ((ModeSwitchEventMask == (EventMaskType)0) && (currentMode != nextMode))
    {
      if (nextMode == RTE_MODE_StaMd_Mode_DISABLE)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_9;
      }
      else if (nextMode == RTE_MODE_StaMd_Mode_OFF)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_9;
      }
      else if (nextMode == RTE_MODE_StaMd_Mode_WARMINIT)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_9;
      }
    }

    if (ModeSwitchEventMask != (EventMaskType)0)
    {
      Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[0] = nextMode;
      Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[1] = currentMode;

      Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode = RTE_TRANSITION_StaMd_Mode;
      if (currentMode != nextMode)
      {
        Rte_IncDisableFlags_Ap_StaMd9_SystemState9_Mode(nextMode);
      }
      ResumeOSInterrupts();

      Rte_Task_SetEvent(Task_Trans_9, ModeSwitchEventMask);
      (void)SetEvent(Task_Trans_9, ModeSwitchEventMask);
    }
    else
    {
      Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode = nextMode;
      ResumeOSInterrupts();
    }
  }

  Rte_SwitchHook_Ap_StaMd9_SystemState9_Mode_Return(nextMode);
  return ret;
}


/**********************************************************************************************************************
 * Mode switch handling functions
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Mode switch handling functions
 *********************************************************************************************************************/
STATIC FUNC(void, RTE_CODE) Rte_IncDisableFlags_StaMd_SystemState_Mode(Rte_ModeType_StaMd_Mode nextMode)
{
  if (nextMode == RTE_MODE_StaMd_Mode_DISABLE)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 < Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 < Rte_TriggerDisableMaxCount_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2++;
  }
  else if (nextMode == RTE_MODE_StaMd_Mode_OFF)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 < Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 < Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 < Rte_TriggerDisableMaxCount_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2++;
  }
  else if (nextMode == RTE_MODE_StaMd_Mode_OPERATE)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2++;
  }
  else if (nextMode == RTE_MODE_StaMd_Mode_WARMINIT)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2 < Rte_TriggerDisableMaxCount_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 < Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 < Rte_TriggerDisableMaxCount_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1 < Rte_TriggerDisableMaxCount_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1++;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 < Rte_TriggerDisableMaxCount_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2++;
  }
}

STATIC FUNC(void, RTE_CODE) Rte_DecDisableFlags_StaMd_SystemState_Mode(Rte_ModeType_StaMd_Mode previousMode)
{
  if (previousMode == RTE_MODE_StaMd_Mode_DISABLE)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2--;
  }
  else if (previousMode == RTE_MODE_StaMd_Mode_OFF)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2--;
  }
  else if (previousMode == RTE_MODE_StaMd_Mode_OPERATE)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2--;
  }
  else if (previousMode == RTE_MODE_StaMd_Mode_WARMINIT)
  {
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1--;
    Rte_Assert(Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 > 0, RTE_E_INTERNAL_TriggerDisableCounter);
    Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2--;
  }
}



/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Ap_StaMd_SystemState_Mode(Rte_ModeType_StaMd_Mode nextMode)
{
  Std_ReturnType ret = RTE_E_OK;
  Rte_SwitchHook_Ap_StaMd_SystemState_Mode_Start(nextMode);

  Rte_Assert(((nextMode < RTE_TRANSITION_StaMd_Mode) && ( nextMode >= 0)), RTE_E_INTERNAL_ModeArgument);

  SuspendOSInterrupts();
  if (Rte_ModeMachine_StaMd_SystemState_Mode == RTE_TRANSITION_StaMd_Mode)
  {
    ret = RTE_E_LIMIT;
    ResumeOSInterrupts();
  }
  else
  {
    EventMaskType ModeSwitchEventMask;
    Rte_ModeType_StaMd_Mode currentMode = Rte_ModeMachine_StaMd_SystemState_Mode;

    ModeSwitchEventMask = Rte_ModeExitEventMask_StaMd_SystemState_Mode[currentMode] | Rte_ModeEntryEventMask_StaMd_SystemState_Mode[nextMode];

    if ((ModeSwitchEventMask == (EventMaskType)0) && (currentMode != nextMode))
    {
      if (nextMode == RTE_MODE_StaMd_Mode_DISABLE)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_10;
      }
      else if (nextMode == RTE_MODE_StaMd_Mode_OFF)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_10;
      }
      else if (nextMode == RTE_MODE_StaMd_Mode_OPERATE)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_10;
      }
      else if (nextMode == RTE_MODE_StaMd_Mode_WARMINIT)
      {
        ModeSwitchEventMask |= Rte_Ev_MS_Task_Trans_10;
      }
    }

    if (ModeSwitchEventMask != (EventMaskType)0)
    {
      Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[0] = nextMode;
      Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[1] = currentMode;

      Rte_ModeMachine_StaMd_SystemState_Mode = RTE_TRANSITION_StaMd_Mode;
      if (currentMode != nextMode)
      {
        Rte_IncDisableFlags_StaMd_SystemState_Mode(nextMode);
      }
      ResumeOSInterrupts();

      Rte_Task_SetEvent(Task_Trans_10, ModeSwitchEventMask);
      (void)SetEvent(Task_Trans_10, ModeSwitchEventMask);
    }
    else
    {
      Rte_ModeMachine_StaMd_SystemState_Mode = nextMode;
      ResumeOSInterrupts();
    }
  }

  Rte_SwitchHook_Ap_StaMd_SystemState_Mode_Return(nextMode);
  return ret;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Task_100ms_10
 * Priority: 32
 * Schedule: FULL
 * Alarm:    Cycle Time 0.1 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_100ms_10)
{
  Rte_Task_Dispatch(Task_100ms_10);

  /* call runnable */
  Rte_Runnable_Sa_HwTrq_HwTrq_Per3_Start();
  HwTrq_Per3();
  Rte_Runnable_Sa_HwTrq_HwTrq_Per3_Return();

  /* read implicit data */
  *(&Rte_Task_100ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per2.Rte_CuTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_CuTempEst_DegC_f32;
  *(&Rte_Task_100ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per2.Rte_MagTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_MagTempEst_DegC_f32;
  *(&Rte_Task_100ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per2.Rte_SiTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_SiTempEst_DegC_f32;

  /* call runnable */
  Rte_Runnable_Ap_CurrParamComp_CurrParamComp_Per2_Start();
  CurrParamComp_Per2();
  Rte_Runnable_Ap_CurrParamComp_CurrParamComp_Per2_Return();

  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_100ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per2 == 0)
  {
    /* call runnable */
    Rte_Runnable_Ap_PeakCurrEst_PeakCurrEst_Per2_Start();
    PeakCurrEst_Per2();
    Rte_Runnable_Ap_PeakCurrEst_PeakCurrEst_Per2_Return();

    /* write implicit data */
    Rte_PeakCurrEst_FiltEstPkCurr_AmpSq_f32 = *(&Rte_Task_100ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per2.Rte_FiltEstPkCurr_AmpSq_f32.value);
  }

  /* read implicit data */
  *(&Rte_Task_100ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per1.Rte_FiltCntrlTemp_DegC_f32.value) = Rte_CtrlTemp_FiltMeasTemp_DegC_f32;

  /* call runnable */
  Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Per1_Start();
  CmMtrCurr_Per1();
  Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Per1_Return();

  /* write implicit data */
  Rte_CmMtrCurr_MtrCurr1TempOffset_Volt_f32 = *(&Rte_Task_100ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per1.Rte_MtrCurr1TempOffset_Volt_f32.value);
  Rte_CmMtrCurr_MtrCurr2TempOffset_Volt_f32 = *(&Rte_Task_100ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per1.Rte_MtrCurr2TempOffset_Volt_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr10_DiagMgr10_Per_Start();
  DiagMgr10_Per();
  Rte_Runnable_Ap_DiagMgr10_DiagMgr10_Per_Return();

  /* call runnable */
  Rte_Runnable_NtWrap_NtWrap_Per1_Start();
  NtWrap_Per1();
  Rte_Runnable_NtWrap_NtWrap_Per1_Return();

  /* call runnable */
  Rte_Runnable_Cd_uDiag_uDiagStaticRegs_Per_Start();
  uDiagStaticRegs_Per();
  Rte_Runnable_Cd_uDiag_uDiagStaticRegs_Per_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_100ms_8
 * Priority: 31
 * Schedule: FULL
 * Alarm:    Cycle Time 0.1 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_100ms_8)
{
  Rte_Task_Dispatch(Task_100ms_8);

  /* read implicit data */
  *(&Rte_Task_100ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per3.Rte_AnaDiffHwTrq_Volt_f32.value) = Rte_HwTrq_AnaDiffHwTrq_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Per3_Start();
  HwTrq2_Per3();
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Per3_Return();

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr8_DiagMgr8_Per_Start();
  DiagMgr8_Per();
  Rte_Runnable_Ap_DiagMgr8_DiagMgr8_Per_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_100ms_9
 * Priority: 30
 * Schedule: FULL
 * Alarm:    Cycle Time 0.1 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_100ms_9)
{
  Rte_Task_Dispatch(Task_100ms_9);

  /* read implicit data */
  *(&Rte_Task_100ms_9.Rte_TB.Rte_I_SrlComInput_AmbTempAvg_DegC_f32.value) = Rte_SrlComInput_AmbTempAvg_DegC_f32;

  /* call runnable */
  Rte_Runnable_Sa_CtrlTemp_CtrlTemp_Per2_Start();
  CtrlTemp_Per2();
  Rte_Runnable_Sa_CtrlTemp_CtrlTemp_Per2_Return();

  /* read implicit data */
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_CtrlTempFinal_DegC_f32.value) = Rte_CtrlTemp_FiltMeasTemp_DegC_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_EngTemp_DegC_f32.value) = Rte_SrlComInput_EngOilTemp_DegC_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_EstPkCurr_AmpSq_f32.value) = Rte_PeakCurrEst_EstPkCurr_AmpSq_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_HwVel_HwRadpS_f32.value) = Rte_MtrVel_HandwheelVel_HwRadpS_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_ScomAMDefeat_Cnt_lgc.value) = Rte_Ap_MtrTempEst_ScomAMDefeat_Cnt_lgc;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_ScomTempDataRcvd_Cnt_lgc.value) = Rte_SrlComInput_CanMsgReceived_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_MtrTempEst_MtrTempEst_Per1_Start();
  MtrTempEst_Per1();
  Rte_Runnable_Ap_MtrTempEst_MtrTempEst_Per1_Return();

  /* write implicit data */
  Rte_Ap_MtrTempEst_AssistMechTempEst_DegC_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_AssistMechTempEst_DegC_f32.value);
  Rte_Ap_MtrTempEst_CuTempEst_DegC_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_CuTempEst_DegC_f32.value);
  Rte_Ap_MtrTempEst_MagTempEst_DegC_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_MagTempEst_DegC_f32.value);
  Rte_Ap_MtrTempEst_SiTempEst_DegC_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Per1.Rte_SiTempEst_DegC_f32.value);

  DisableAllInterrupts();
  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per3 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per3.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
    *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per3.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

    /* call runnable */
    Rte_Runnable_Ap_ActivePull_ActivePull_Per3_Start();
    ActivePull_Per3();
    Rte_Runnable_Ap_ActivePull_ActivePull_Per3_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr9_DiagMgr9_Per_Start();
  DiagMgr9_Per();
  Rte_Runnable_Ap_DiagMgr9_DiagMgr9_Per_Return();

  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_100ms_9_Rte_Trigger1_Ap_DiagMgr9_DiagMgr_Per2 == 0)
  {
    /* call runnable */
    Rte_Runnable_Ap_DiagMgr9_DiagMgr_Per2_Start();
    DiagMgr_Per2();
    Rte_Runnable_Ap_DiagMgr9_DiagMgr_Per2_Return();
  }

  /* read implicit data */
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_CuTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_CuTempEst_DegC_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_DefeatDutySvc_Cnt_lgc.value) = Rte_CDDInterface_ThermalDCSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_FiltMeasTemp_DegC_f32.value) = Rte_CtrlTemp_FiltMeasTemp_DegC_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_FilteredPkCurr_AmpSq_f32.value) = Rte_PeakCurrEst_FiltEstPkCurr_AmpSq_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_MagTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_MagTempEst_DegC_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_MotorVelCRF_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_MtrPkCurr_AmpSq_f32.value) = Rte_PeakCurrEst_EstPkCurr_AmpSq_f32;
  *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_SiTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_SiTempEst_DegC_f32;

  /* call runnable */
  Rte_Runnable_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1_Start();
  ThrmlDutyCycle_Per1();
  Rte_Runnable_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1_Return();

  /* write implicit data */
  Rte_Ap_ThrmlDutyCycle_DutyCycleLevel_Uls_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_DutyCycleLevel_Uls_f32.value);
  Rte_Ap_ThrmlDutyCycle_ThermLimitPerc_Uls_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_ThermLimitPerc_Uls_f32.value);
  Rte_Ap_ThrmlDutyCycle_ThermalLimit_MtrNm_f32 = *(&Rte_Task_100ms_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Per1.Rte_ThermalLimit_MtrNm_f32.value);

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_10ms_10
 * Priority: 40
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_10ms_10)
{
  Rte_Task_Dispatch(Task_10ms_10);

  /* read implicit data */
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Per1.Rte_DesiredTunPers_Cnt_u16.value) = Rte_SrlComInput_DesiredTunPers_Cnt_u16;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Per1.Rte_DesiredTunSet_Cnt_u16.value) = Rte_SrlComInput_DesiredTunSet_Cnt_u16;
  *(&Rte_Task_10ms_10.Rte_TB.Rte_I_HwTrq_AnaHwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_TuningSelAuth_TuningSelAuth_Per1_Start();
  TuningSelAuth_Per1();
  Rte_Runnable_Ap_TuningSelAuth_TuningSelAuth_Per1_Return();

  /* write implicit data */
  Rte_Ap_TuningSelAuth_ActiveTunPers_Cnt_u16 = *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Per1.Rte_ActiveTunPers_Cnt_u16.value);
  Rte_Ap_TuningSelAuth_ActiveTunSet_Cnt_u16 = *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Per1.Rte_ActiveTunSet_Cnt_u16.value);

  /* read implicit data */
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_MtrElecMechPolarity_Cnt_s08.value) = Rte_Polarity_MtrElecMechPolarity_Cnt_s08;

  /* call runnable */
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Per4_Start();
  CDDInterface_Per4();
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Per4_Return();

  /* write implicit data */
  Rte_CDDInterface_DampingSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_DampingSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_DftAsstTbl_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_DftAsstTbl_Cnt_lgc.value);
  Rte_CDDInterface_DrivingDynSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_DrivingDynSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_DwnldAsstGain_Uls_f32 = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_DwnldAsstGain_Uls_f32.value);
  Rte_CDDInterface_EOTImpactSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_EOTImpactSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_EOTThermalSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_EOTThermalSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_EngONSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_EngONSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_FreqDepDmpSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_FreqDepDmpSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_FricLrnSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_FricLrnSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_HysAddSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_HysAddSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_HystCompSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_HystCompSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_KinIntDiagSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_TB.Rte_I_CDDInterface_KinIntDiagSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_LimitSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_LimitSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_MEC_Cnt_enum = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_MEC_Cnt_enum.value);
  Rte_CDDInterface_MfgDiagInhibit_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_MfgDiagInhibit_Cnt_lgc.value);
  Rte_CDDInterface_ModIdxSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_ModIdxSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_MtrParmNrmLrnSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_MtrVelNrmLrnSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_MultIgnSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_MultIgnSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_ParkAstSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_ParkAstSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_PullCompSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_PullCompSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_ReturnSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_ReturnSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_RxMsgsSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_RxMsgsSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_SrlComSvcDft_Cnt_b32 = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_SrlComSvcDft_Cnt_b32.value);
  Rte_CDDInterface_TOEOLDisable_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_TOEOLDisable_Cnt_lgc.value);
  Rte_CDDInterface_ThermalDCSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_ThermalDCSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_TrqRmpSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_TrqRmpSrlComSvcDft_Cnt_lgc.value);
  Rte_CDDInterface_WIREnabled_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_WIREnabled_Cnt_lgc.value);
  Rte_CDDInterface_WhlImbRejSrlComSvcDft_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per4.Rte_WhlImbRejSrlComSvcDft_Cnt_lgc.value);

  /* call runnable */
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Per2_Start();
  AbsHwPosScom_Per2();
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Per2_Return();

  /* read implicit data */
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per3.Rte_CRFMtrTrqCmd_MtrNm_f32.value) = Rte_CtrldDisShtdn_CntDisMtrTrqCmdCRF_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Per3_Start();
  AbsHwPosScom_Per3();
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Per3_Return();

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_CntDisMtrTrqCmdMRF_MtrNm_f32.value) = Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32;
    *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_Vecu_Volt_f32.value) = Rte_BatteryVoltage_Vecu_Volt_f32;

    /* call runnable */
    Rte_Runnable_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2_Start();
    PwrLmtFuncCr_Per2();
    Rte_Runnable_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2_Return();

    /* write implicit data */
    Rte_Ap_PwrLmtFuncCr_FltTrqLmt_Uls_f32 = *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_FltTrqLmt_Uls_f32.value);
    Rte_Ap_PwrLmtFuncCr_ThresholdExceeded_Cnt_lgc = *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_ThresholdExceeded_Cnt_lgc.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  /* call runnable */
  Rte_Runnable_Cd_uDiag_uDiagECC_Per_Start();
  uDiagECC_Per();
  Rte_Runnable_Cd_uDiag_uDiagECC_Per_Return();

  /* call runnable */
  Rte_Runnable_Cd_uDiag_uDiagVIM_Per_Start();
  uDiagVIM_Per();
  Rte_Runnable_Cd_uDiag_uDiagVIM_Per_Return();

  /* call runnable */
  Rte_Runnable_Sa_ShtdnMech_ShtdnMech_Per1_Start();
  ShtdnMech_Per1();
  Rte_Runnable_Sa_ShtdnMech_ShtdnMech_Per1_Return();

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_10ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per3 == 0)
  {
    EnableAllInterrupts();
    /* call runnable */
    Rte_Runnable_Sa_TmprlMon_TmprlMon_Per3_Start();
    TmprlMon_Per3();
    Rte_Runnable_Sa_TmprlMon_TmprlMon_Per3_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_Polarity_Polarity_Per1.Rte_DiagAssistAssyPolarity_Cnt_s08.value) = Rte_Polarity_AssistAssyPolarity_Cnt_s08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_Polarity_Polarity_Per1.Rte_DiagHwPosPolarity_Cnt_s08.value) = Rte_Polarity_HwPosPolarity_Cnt_s08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_Polarity_Polarity_Per1.Rte_DiagHwTrqPolarity_Cnt_s08.value) = Rte_Polarity_HwTrqPolarity_Cnt_s08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_Polarity_Polarity_Per1.Rte_DiagMtrElecMechPolarity_Cnt_s08.value) = Rte_Polarity_MtrElecMechPolarity_Cnt_s08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_Polarity_Polarity_Per1.Rte_DiagMtrPosPolarity_Cnt_s08.value) = Rte_Polarity_MtrPosPolarity_Cnt_s08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_Polarity_Polarity_Per1.Rte_DiagMtrVelPolarity_Cnt_s08.value) = Rte_Polarity_MtrVelPolarity_Cnt_s08;

  /* call runnable */
  Rte_Runnable_Ap_Polarity_Polarity_Per1_Start();
  Polarity_Per1();
  Rte_Runnable_Ap_Polarity_Polarity_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_IWSSCalcVspd_Kph_f32.value) = Rte_SrlComInput_IWSSCalcVspd_Kph_f32;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PAEnableRqst_Cnt_lgc.value) = Rte_SrlComInput_PAEnableRqst_Cnt_lgc;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PAManoeuvrePhase_Cnt_u08.value) = Rte_SrlComInput_PAManoeuvrePhase_Cnt_u08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PATrqOvCmdRqst_HwNm_f32.value) = Rte_SrlComInput_PATrqOvCmdRqst_HwNm_f32;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PAWhlDirRLStat_Cnt_u08.value) = Rte_SrlComInput_PAWhlDirRLStat_Cnt_u08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PAWhlDirRRStat_Cnt_u08.value) = Rte_SrlComInput_PAWhlDirRRStat_Cnt_u08;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PAWhlPlsCntRLValid_Cnt_lgc.value) = Rte_SrlComInput_PAWhlPlsCntRLValid_Cnt_lgc;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PAWhlPlsCntRRValid_Cnt_lgc.value) = Rte_SrlComInput_PAWhlPlsCntRRValid_Cnt_lgc;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_PrkAsstFuncPresent_Cnt_lgc.value) = Rte_SrlComInput_PrkAsstFuncPresent_Cnt_lgc;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_TrqOvReverseGearEngage_Cnt_lgc.value) = Rte_SrlComInput_TrqOvReverseGearEngage_Cnt_lgc;
  *(&Rte_Task_10ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per2.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_PAwTO_PAwTO_Per2_Start();
  PAwTO_Per2();
  Rte_Runnable_Ap_PAwTO_PAwTO_Per2_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_10ms_9
 * Priority: 42
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_10ms_9)
{
  Rte_Task_Dispatch(Task_10ms_9);

  /* call runnable */
  Rte_Runnable_Ccl_CclPollingTask_Start();
  CclPollingTask();
  Rte_Runnable_Ccl_CclPollingTask_Return();

  /* call runnable */
  Rte_Runnable_Ccl_Ccl_10_0msTaskCont_Start();
  Ccl_10_0msTaskCont();
  Rte_Runnable_Ccl_Ccl_10_0msTaskCont_Return();

  /* call runnable */
  Rte_Runnable_Ap_SrlComInput_SrlComInput_Per1_Start();
  SrlComInput_Per1();
  Rte_Runnable_Ap_SrlComInput_SrlComInput_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ElePwr_ElePwr_Per1.Rte_MtrCurrDax_Amp_f32.value) = Rte_CDDInterface_MtrCurrDax_Amp_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ElePwr_ElePwr_Per1.Rte_MtrCurrQax_Amp_f32.value) = Rte_CDDInterface_MtrCurrQax_Amp_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ElePwr_ElePwr_Per1.Rte_MtrVoltDax_Volt_f32.value) = Rte_CDDInterface_MtrVoltDax_Volt_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ElePwr_ElePwr_Per1.Rte_MtrVoltQax_Volt_f32.value) = Rte_CDDInterface_MtrVoltQax_Volt_f32;
  *(&Rte_Task_10ms_9.Rte_TB.Rte_I_BatteryVoltage_Vecu_Volt_f32.value) = Rte_BatteryVoltage_Vecu_Volt_f32;

  /* call runnable */
  Rte_Runnable_Ap_ElePwr_ElePwr_Per1_Start();
  ElePwr_Per1();
  Rte_Runnable_Ap_ElePwr_ElePwr_Per1_Return();

  /* write implicit data */
  Rte_Ap_ElePwr_ElectricPower_Watt_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ElePwr_ElePwr_Per1.Rte_ElectricPower_Watt_f32.value);
  Rte_Ap_ElePwr_SupplyCurrent_Amp_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ElePwr_ElePwr_Per1.Rte_SupplyCurrent_Amp_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_SrlComOutput_SrlComOutput_Per1_Start();
  SrlComOutput_Per1();
  Rte_Runnable_Ap_SrlComOutput_SrlComOutput_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_DemIf_DemIf_SetInputsConditions.Rte_NET_CFG_STAT_PT_Cnt_u16.value) = Rte_SrlComInput_NET_CFG_STAT_PT_Cnt_u16;

  /* call runnable */
  Rte_Runnable_Ap_DemIf_DemIf_SetInputsConditions_Start();
  DemIf_SetInputsConditions();
  Rte_Runnable_Ap_DemIf_DemIf_SetInputsConditions_Return();

  DisableAllInterrupts();
  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_10ms_9_Rte_Trigger1_Ap_AvgFricLrn_AvgFricLrn_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_CRFMtrTrq_MtrNm_f32.value) = Rte_CtrldDisShtdn_CntDisMtrTrqCmdCRF_MtrNm_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_DefeatFricLearning_Cnt_lgc.value) = Rte_CDDInterface_FricLrnSrlComSvcDft_Cnt_lgc;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_HwAng_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_HwPosAuthority_Uls_f32.value) = Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_HwTrq_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_HwVel_HwRadpS_f32.value) = Rte_MtrVel_HandwheelVel_HwRadpS_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_Temperature_DegC_f32.value) = Rte_Ap_MtrTempEst_AssistMechTempEst_DegC_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_VehSpd_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
    *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_VehicleSpeedValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Ap_AvgFricLrn_AvgFricLrn_Per1_Start();
    AvgFricLrn_Per1();
    Rte_Runnable_Ap_AvgFricLrn_AvgFricLrn_Per1_Return();

    /* write implicit data */
    Rte_Ap_AvgFricLrn_EstFric_HwNm_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_EstFric_HwNm_f32.value);
    Rte_Ap_AvgFricLrn_FricOffset_HwNm_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_FricOffset_HwNm_f32.value);
    Rte_Ap_AvgFricLrn_SatEstFric_HwNm_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Per1.Rte_SatEstFric_HwNm_f32.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ApXcp_ApXcp_Per1.Rte_ActiveTunPers_Cnt_u16.value) = Rte_Xcp_ActiveTunPers_Cnt_u16;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ApXcp_ApXcp_Per1.Rte_ActiveTunSet_Cnt_u16.value) = Rte_Xcp_ActiveTunSet_Cnt_u16;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ApXcp_ApXcp_Per1.Rte_DesiredTunPers_Cnt_u16.value) = Rte_Xcp_DesiredTunPers_Cnt_u16;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ApXcp_ApXcp_Per1.Rte_DesiredTunSet_Cnt_u16.value) = Rte_Xcp_DesiredTunSet_Cnt_u16;

  /* call runnable */
  Rte_Runnable_Ap_ApXcp_ApXcp_Per1_Start();
  ApXcp_Per1();
  Rte_Runnable_Ap_ApXcp_ApXcp_Per1_Return();

  /* write implicit data */
  Rte_Xcp_ActiveTunOvrPtrAddr_Cnt_u32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ApXcp_ApXcp_Per1.Rte_ActiveTunOvrPtrAddr_Cnt_u32.value);
  Rte_Xcp_TuningSessionActPtr_Cnt_u8 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_ApXcp_ApXcp_Per1.Rte_TuningSessionActPtr_Cnt_u8.value);

  /* read implicit data */
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_DiagStsHwPosDis_Cnt_lgc.value) = Rte_DiagMgr_DiagStsHWASbSystmFltPres_Cnt_lgc;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_HandwheelAuthority_Uls_f32.value) = Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_HandwheelPosition_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_MtrVelCRF_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_PostLimitTorque_MtrNm_f32.value) = Rte_Ap_AstLmt_SumLimTrqCmd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_LrnEOT_LrnEOT_Per1_Start();
  LrnEOT_Per1();
  Rte_Runnable_Ap_LrnEOT_LrnEOT_Per1_Return();

  /* write implicit data */
  Rte_Ap_LrnEOT_CCWFound_Cnt_lgc = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_CCWFound_Cnt_lgc.value);
  Rte_Ap_LrnEOT_CCWPosition_HwDeg_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_CCWPosition_HwDeg_f32.value);
  Rte_Ap_LrnEOT_CWFound_Cnt_lgc = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_CWFound_Cnt_lgc.value);
  Rte_Ap_LrnEOT_CWPosition_HwDeg_f32 = *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Per1.Rte_CWPosition_HwDeg_f32.value);

  /* read implicit data */
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_BVDiag_BVDiag_Per1.Rte_Batt_Volt_f32.value) = Rte_IoHwAbstractionUsr_Batt_Volt_f32;
  *(&Rte_Task_10ms_9.Rte_RB.Rte_Ap_BVDiag_BVDiag_Per1.Rte_CCLMSAActive_Cnt_lgc.value) = Rte_Ap_BVDiag_CCLMSAActive_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_BVDiag_BVDiag_Per1_Start();
  BVDiag_Per1();
  Rte_Runnable_Ap_BVDiag_BVDiag_Per1_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_2ms_10
 * Priority: 62
 * Schedule: FULL
 * Alarm:    Cycle Time 0.002 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_2ms_10)
{
  Rte_Task_Dispatch(Task_2ms_10);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per1.Rte_AsstAssemPol_Cnt_s08.value) = Rte_Polarity_AssistAssyPolarity_Cnt_s08;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_SignlCondn_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrVel_MtrVel_Per1_Start();
  MtrVel_Per1();
  Rte_Runnable_Sa_MtrVel_MtrVel_Per1_Return();

  /* write implicit data */
  Rte_MtrVel_CRFMotorVel_MtrRadpS_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_MtrVel_CRFMotorVel_MtrRadpS_f32.value);
  Rte_MtrVel_HandwheelVel_HwRadpS_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_MtrVel_HandwheelVel_HwRadpS_f32.value);
  Rte_MtrVel_HwVelValid_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per1.Rte_HwVelValid_Cnt_lgc.value);
  Rte_MtrVel_MRFMotorVel_MtrRadpS_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per1.Rte_MRFMotorVel_MtrRadpS_f32.value);
  Rte_MtrVel_MRFMotorVelUnfiltered_MtrRadpS_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per1.Rte_MRFMotorVelUnfiltered_MtrRadpS_f32.value);
  Rte_MtrVel_SysCHandwheelVel_HwRadpS_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per1.Rte_SysCHandwheelVel_HwRadpS_f32.value);
  Rte_MtrVel_SysCMotorVelMRF_MtrRadpS_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per1.Rte_SysCMotorVelMRF_MtrRadpS_f32.value);

  /* call runnable */
  Rte_Runnable_Sa_TmprlMon_TmprlMon_Per1_Start();
  TmprlMon_Per1();
  Rte_Runnable_Sa_TmprlMon_TmprlMon_Per1_Return();

  /* call runnable */
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Per1_Start();
  CDDInterface_Per1();
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Per1_Return();

  /* write implicit data */
  Rte_CDDInterface_ADCMtrCurr1_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_ADCMtrCurr1_Volts_f32.value);
  Rte_CDDInterface_ADCMtrCurr2_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_ADCMtrCurr2_Volts_f32.value);
  Rte_CDDInterface_CorrMtrCurrPosition_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_CorrMtrCurrPosition_Rev_f32.value);
  Rte_CDDInterface_CorrMtrPosElec_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_CorrMtrPosElec_Rev_f32.value);
  Rte_CDDInterface_Cos1Theta_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_Cos1Theta_Volts_f32.value);
  Rte_CDDInterface_DutyCycleSmall_Cnt_u16 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_DutyCycleSmall_Cnt_u16.value);
  Rte_CDDInterface_ExpectedOnTimeA_Cnt_u32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_ExpectedOnTimeA_Cnt_u32.value);
  Rte_CDDInterface_ExpectedOnTimeB_Cnt_u32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_ExpectedOnTimeB_Cnt_u32.value);
  Rte_CDDInterface_ExpectedOnTimeC_Cnt_u32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_ExpectedOnTimeC_Cnt_u32.value);
  Rte_CDDInterface_LRPRPhaseadvanceCaptured_Cnt_s16 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_LRPRPhaseadvanceCaptured_Cnt_s16.value);
  Rte_CDDInterface_MeasuredOnTimeA_Cnt_u32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MeasuredOnTimeA_Cnt_u32.value);
  Rte_CDDInterface_MeasuredOnTimeB_Cnt_u32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MeasuredOnTimeB_Cnt_u32.value);
  Rte_CDDInterface_MeasuredOnTimeC_Cnt_u32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MeasuredOnTimeC_Cnt_u32.value);
  Rte_CDDInterface_ModIdxFinal_Uls_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_ModIdxFinal_Uls_f32.value);
  Rte_CDDInterface_MtrCurrDax_Amp_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrCurrDax_Amp_f32.value);
  Rte_CDDInterface_MtrCurrDaxRef_Amp_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrCurrDaxRef_Amp_f32.value);
  Rte_CDDInterface_MtrCurrK1_Amp_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrCurrK1_Amp_f32.value);
  Rte_CDDInterface_MtrCurrK2_Amp_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrCurrK2_Amp_f32.value);
  Rte_CDDInterface_MtrCurrQax_Amp_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrCurrQax_Amp_f32.value);
  Rte_CDDInterface_MtrCurrQaxFinalRef_Amp_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrCurrQaxFinalRef_Amp_f32.value);
  Rte_CDDInterface_MtrPosElec_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrPosElec_Rev_f32.value);
  Rte_CDDInterface_MtrPosMech_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrPosMech_Rev_f32.value);
  Rte_CDDInterface_MtrRevCntr_Cnt_s16 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrRevCntr_Cnt_s16.value);
  Rte_CDDInterface_MtrVoltDax_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrVoltDax_Volt_f32.value);
  Rte_CDDInterface_MtrVoltQax_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_MtrVoltQax_Volt_f32.value);
  Rte_CDDInterface_PhsReasA_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_PhsReasA_Volts_f32.value);
  Rte_CDDInterface_PhsReasB_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_PhsReasB_Volts_f32.value);
  Rte_CDDInterface_PhsReasC_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_PhsReasC_Volts_f32.value);
  Rte_CDDInterface_Sin1Theta_Volts_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_Sin1Theta_Volts_f32.value);
  Rte_CDDInterface_SysCCorrectedMtrPos_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per1.Rte_SysCCorrectedMtrPos_Rev_f32.value);

  /* call runnable */
  Rte_Runnable_IoHwAbstractionUsr_IoHwAb_FwdPathAdc_Start();
  IoHwAb_FwdPathAdc();
  Rte_Runnable_IoHwAbstractionUsr_IoHwAb_FwdPathAdc_Return();

  /* write implicit data */
  Rte_IoHwAbstractionUsr_SysCT1ADC_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FwdPathAdc.Rte_SysCT1ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_SysCT2ADC_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FwdPathAdc.Rte_SysCT2ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_T1ADC_Volt_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_IoHwAbstractionUsr_T1ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_T2ADC_Volt_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_IoHwAbstractionUsr_T2ADC_Volt_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per1.Rte_AbsPosStepSignal_Cnt_u08.value) = Rte_HwTrq_AbsPosStepSignal_Cnt_u08;

  /* call runnable */
  Rte_Runnable_Sa_HwTrq_HwTrq_Per1_Start();
  HwTrq_Per1();
  Rte_Runnable_Sa_HwTrq_HwTrq_Per1_Return();

  /* write implicit data */
  Rte_HwTrq_AnaDiffHwTrq_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per1.Rte_AnaDiffHwTrq_Volt_f32.value);
  Rte_HwTrq_AnaHwTorque_HwNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_HwTrq_AnaHwTorque_HwNm_f32.value);
  Rte_HwTrq_SrlComHwTrqValid_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per1.Rte_SrlComHwTrqValid_Cnt_lgc.value);
  Rte_HwTrq_SysCAnaHwTorque_HwNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per1.Rte_SysCAnaHwTorque_HwNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_MtrTempEst_AssistMechTempEst_DegC_f32.value) = Rte_Ap_MtrTempEst_AssistMechTempEst_DegC_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_DefeatReturnSvc_Cnt_lgc.value) = Rte_CDDInterface_ReturnSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_DiagStsHwPosDis_Cnt_lgc.value) = Rte_DiagMgr_DiagStsHWASbSystmFltPres_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_HandwheelAuthority_Uls_f32.value) = Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_HandwheelPosition_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_PAReturnSclFct_Uls_f32.value) = Rte_Ap_ArbLmt_PAReturnSclFct_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_ReturnDDFactor_Uls_f32.value) = Rte_Return_ReturnDDFactor_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_ReturnOffset_HwDeg_f32.value) = Rte_Return_ReturnOffset_HwDeg_f32;

  /* call runnable */
  Rte_Runnable_Ap_Return_Return_Per1_Start();
  Return_Per1();
  Rte_Runnable_Ap_Return_Return_Per1_Return();

  /* write implicit data */
  Rte_Return_ReturnCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Return_Return_Per1.Rte_ReturnCmd_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Assist_Assist_Per1.Rte_AssistDDFactor_Uls_f32.value) = Rte_Assist_AssistDDFactor_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Assist_Assist_Per1.Rte_DftAsstTbl_Cnt_lgc.value) = Rte_CDDInterface_DftAsstTbl_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Assist_Assist_Per1.Rte_DutyCycleLevel_Uls_f32.value) = Rte_Ap_ThrmlDutyCycle_DutyCycleLevel_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Assist_Assist_Per1.Rte_DwnldAsstGain_Uls_f32.value) = Rte_CDDInterface_DwnldAsstGain_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Assist_Assist_Per1.Rte_HwTrqHysAdd_HwNm_f32.value) = Rte_Assist_HwTrqHysAdd_HwNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Assist_Assist_Per1.Rte_IpTrqOvr_HwNm_f32.value) = Rte_Ap_ArbLmt_IpTrqOvr_HwNm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32.value) = Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_Assist_Assist_Per1_Start();
  Assist_Per1();
  Rte_Runnable_Ap_Assist_Assist_Per1_Return();

  /* write implicit data */
  Rte_Assist_BaseAssistCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Assist_BaseAssistCmd_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HystComp_HystComp_Per1.Rte_DefeatHystService_Cnt_lgc.value) = Rte_CDDInterface_HystCompSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HystComp_HystComp_Per1.Rte_FricOffset_HwNm_f32.value) = Rte_Ap_AvgFricLrn_FricOffset_HwNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_HystComp_HystComp_Per1_Start();
  HystComp_Per1();
  Rte_Runnable_Ap_HystComp_HystComp_Per1_Return();

  /* write implicit data */
  Rte_HystComp_HysteresisComp_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HystComp_HystComp_Per1.Rte_HysteresisComp_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Damping_Damping_Per1.Rte_AssistCmd_MtrNm_f32.value) = Rte_StabilityComp_AssistCmd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Damping_Damping_Per1.Rte_DampingDDFactor_Uls_f32.value) = Rte_Damping_DampingDDFactor_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Damping_Damping_Per1.Rte_DefeatDampingSvc_Cnt_lgc.value) = Rte_CDDInterface_DampingSrlComSvcDft_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_Damping_Damping_Per1_Start();
  Damping_Per1();
  Rte_Runnable_Ap_Damping_Damping_Per1_Return();

  /* write implicit data */
  Rte_Damping_DampingCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_Damping_Damping_Per1.Rte_DampingCmd_MtrNm_f32.value);

  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1 == 0)
  {
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_BaseAssistCmd_MtrNm_f32.value) = Rte_Assist_BaseAssistCmd_MtrNm_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_CRFMotorVel_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_FreqDepDmpSrlComSvcDft_Cnt_lgc.value) = Rte_CDDInterface_FreqDepDmpSrlComSvcDft_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_VehicleLonAccel_KphpS_f32.value) = Rte_Ap_SignlCondn_Vehicle_LonAccel_KphpS_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_WIRCmdAmpBlnd_MtrNm_f32.value) = Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32;

    /* call runnable */
    Rte_Runnable_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1_Start();
    FrqDepDmpnInrtCmp_Per1();
    Rte_Runnable_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1_Return();

    /* write implicit data */
    Rte_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Per1.Rte_FrqDepDmpnInrtCmp_MtrNm_f32.value);
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Assist_BaseAssistCmd_MtrNm_f32.value) = Rte_Assist_BaseAssistCmd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AssistFirewall_AssistFirewall_Per1.Rte_Defeat_AsstTbl_Service_Cnt_lgc.value) = Rte_CDDInterface_DftAsstTbl_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AssistFirewall_AssistFirewall_Per1.Rte_HighFreqAssist_MtrNm_f32.value) = Rte_HighFreqAssist_HighFreqAssist_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_HwTrq_AnaHwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AssistFirewall_AssistFirewall_Per1.Rte_HysteresisComp_MtrNm_f32.value) = Rte_HystComp_HysteresisComp_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CDDInterface_MEC_Cnt_enum.value) = Rte_CDDInterface_MEC_Cnt_enum;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_SignlCondn_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_AssistFirewall_AssistFirewall_Per1_Start();
  AssistFirewall_Per1();
  Rte_Runnable_Ap_AssistFirewall_AssistFirewall_Per1_Return();

  /* write implicit data */
  Rte_Ap_AssistFirewall_AsstFirewallActive_Uls_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_AssistFirewall_AsstFirewallActive_Uls_f32.value);
  Rte_Ap_AssistFirewall_CombinedAssist_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_AssistFirewall_CombinedAssist_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StabilityComp_StabilityComp_Per1.Rte_AssistDDFactor_Uls_f32.value) = Rte_StabilityComp_AssistDDFactor_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StabilityComp_StabilityComp_Per1.Rte_SysAssistCmd_MtrNm_MtrNm_f32.value) = Rte_Ap_StabilityComp2_SysAssistCmd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_StabilityComp_StabilityComp_Per1_Start();
  StabilityComp_Per1();
  Rte_Runnable_Ap_StabilityComp_StabilityComp_Per1_Return();

  /* write implicit data */
  Rte_StabilityComp_AssistCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_StabilityComp_AssistCmd_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_DampingCmd_MtrNm_f32.value) = Rte_Damping_DampingCmd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_Defeat_Damping_Svc_Cnt_lgc.value) = Rte_CDDInterface_DampingSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_FreqDepDmpSrlComSvcDft_Cnt_lgc.value) = Rte_CDDInterface_FreqDepDmpSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_InertiaComp_MtrNm_f32.value) = Rte_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_MtrVel_CRFMotorVel_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_VehicleLonAccel_KphpS_f32.value) = Rte_Ap_SignlCondn_Vehicle_LonAccel_KphpS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_WIRCmdAmpBlnd_MtrNm_f32.value) = Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_DampingFirewall_DampingFirewall_Per1_Start();
  DampingFirewall_Per1();
  Rte_Runnable_Ap_DampingFirewall_DampingFirewall_Per1_Return();

  /* write implicit data */
  Rte_Ap_DampingFirewall_CombinedDamping_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_DampingFirewall_CombinedDamping_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_ReturnFirewall_ReturnFirewall_Per1.Rte_Defeat_Return_Svc_Cnt_lgc.value) = Rte_CDDInterface_ReturnSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_ReturnFirewall_ReturnFirewall_Per1.Rte_HandwheelPosition_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_ReturnFirewall_ReturnFirewall_Per1.Rte_ReturnCmd_MtrNm_f32.value) = Rte_Return_ReturnCmd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_ReturnFirewall_ReturnFirewall_Per1_Start();
  ReturnFirewall_Per1();
  Rte_Runnable_Ap_ReturnFirewall_ReturnFirewall_Per1_Return();

  /* write implicit data */
  Rte_Ap_ReturnFirewall_LimitedReturn_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_ReturnFirewall_LimitedReturn_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StOpCtrl_StOpCtrl_Per1.Rte_DiagRampRate_XpmS_f32.value) = Rte_DiagMgr_DiagRampRate_XpmS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StOpCtrl_StOpCtrl_Per1.Rte_DiagRampValue_Uls_f32.value) = Rte_DiagMgr_DiagRampValue_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_DiagMgr_DiagRmpToZeroActive_Cnt_lgc.value) = Rte_DiagMgr_DiagRmpToZeroActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StOpCtrl_StOpCtrl_Per1.Rte_OperRampRate_XpmS_f32.value) = Rte_VehPwrMd_OperRampRate_XpmS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StOpCtrl_StOpCtrl_Per1.Rte_OperRampValue_Uls_f32.value) = Rte_VehPwrMd_OperRampValue_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StOpCtrl_StOpCtrl_Per1.Rte_RampSrlComSvcDft_Cnt_lgc.value) = Rte_CDDInterface_TrqRmpSrlComSvcDft_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_StOpCtrl_StOpCtrl_Per1_Start();
  StOpCtrl_Per1();
  Rte_Runnable_Ap_StOpCtrl_StOpCtrl_Per1_Return();

  /* write implicit data */
  Rte_StOpCtrl_OutputRampMult_Uls_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StOpCtrl_StOpCtrl_Per1.Rte_OutputRampMult_Uls_f32.value);
  Rte_StOpCtrl_RampDwnStatusComplete_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_StOpCtrl_RampDwnStatusComplete_Cnt_lgc.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_AssistEOTDamping_MtrNm_f32.value) = Rte_EOTActuatorMng_AssistEOTDamping_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_AssistEOTGain_Uls_f32.value) = Rte_Ap_LmtCod_EOTGainLtd_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_AssistEOTLimit_MtrNm_f32.value) = Rte_Ap_LmtCod_EOTLimitLtd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_AssistStallLimit_MtrNm_f32.value) = Rte_Ap_LmtCod_StallLimitLtd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_AssistVehSpdLimit_MtrNm_f32.value) = Rte_Ap_LmtCod_VehSpdLimitLtd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_DefeatLimitService_Cnt_lgc.value) = Rte_CDDInterface_LimitSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_LrnPnCtrCCDisable_Cnt_lgc.value) = Rte_Ap_AstLmt_LrnPnCtrCCDisable_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_LrnPnCtrEnable_Cnt_lgc.value) = Rte_Ap_AstLmt_LrnPnCtrEnable_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_LrnPnCtrTCmd_MtrNm_f32.value) = Rte_Ap_AstLmt_LrnPnCtrTCmd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_OpTrqOvr_MtrNm_f32.value) = Rte_Ap_ArbLmt_OpTrqOvr_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_OutputRampMult_Uls_f32.value) = Rte_Ap_LmtCod_OutputRampMultLtd_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_PosServCCDisable_Cnt_lgc.value) = Rte_Ap_AstLmt_PosServCCDisable_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_PowerLimitPerc_Uls_f32.value) = Rte_Ap_PwrLmtFuncCr_FltTrqLmt_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_PrkAssistCmd_MtrNm_f32.value) = Rte_Ap_AstLmt_PrkAssistCmd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_PullCompCmd_MtrNm_f32.value) = Rte_Ap_ActivePull_PullCompCmd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_ThermalLimit_MtrNm_f32.value) = Rte_Ap_LmtCod_ThermalLimitLtd_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_ThermalLimitPerc_Uls_f32.value) = Rte_Ap_ThrmlDutyCycle_ThermLimitPerc_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_WheelImbalanceCmd_MtrNm_f32.value) = Rte_Ap_WhlImbRej_WhlImbRejCmd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_AstLmt_AstLmt_Per1_Start();
  AstLmt_Per1();
  Rte_Runnable_Ap_AstLmt_AstLmt_Per1_Return();

  /* write implicit data */
  Rte_Ap_AstLmt_LimitPercentFiltered_Uls_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_LimitPercentFiltered_Uls_f32.value);
  Rte_Ap_AstLmt_PreLimitForStall_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_PreLimitForStall_MtrNm_f32.value);
  Rte_Ap_AstLmt_PreLimitTorque_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_PreLimitTorque_MtrNm_f32.value);
  Rte_Ap_AstLmt_SumLimTrqCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_AstLmt_SumLimTrqCmd_MtrNm_f32.value);
  Rte_Ap_AstLmt_TrqLimitMin_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AstLmt_AstLmt_Per1.Rte_TrqLimitMin_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1.Rte_AssistAssyPolarity_Cnt_s08.value) = Rte_Polarity_AssistAssyPolarity_Cnt_s08;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1.Rte_DiagStsF2Active_Cnt_lgc.value) = Rte_DiagMgr_DiagStsCtrldDisRmpPres_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1_Start();
  CtrldDisShtdn_Per1();
  Rte_Runnable_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1_Return();

  /* write implicit data */
  Rte_CtrldDisShtdn_CntDisMtrTrqCmdCRF_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1.Rte_CntDisMtrTrqCmdCRF_MtrNm_f32.value);
  Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1.Rte_CntDisMtrTrqCmdMRF_MtrNm_f32.value);
  Rte_CtrldDisShtdn_CtrldDmpStsCmp_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CtrldDisShtdn_CtrldDmpStsCmp_Cnt_lgc.value);
  Rte_CtrldDisShtdn_SysC_CRFMtrTrqCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1.Rte_SysC_CRFMtrTrqCmd_MtrNm_f32.value);
  Rte_CtrldDisShtdn_SysC_MRFMtrTrqCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CtrldDisShtdn_CtrldDisShtdn_Per1.Rte_SysC_MRFMtrTrqCmd_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StaMd_StaMd_Per1.Rte_ATerm_Cnt_lgc.value) = Rte_VehPwrMd_ATermActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StaMd_StaMd_Per1.Rte_CTerm_Cnt_lgc.value) = Rte_VehPwrMd_CTermActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StaMd_StaMd_Per1.Rte_TMFTestComplete_Cnt_lgc.value) = Rte_TmprlMon_TMFTestComplete_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_StaMd_StaMd_Per1_Start();
  StaMd_Per1();
  Rte_Runnable_Ap_StaMd_StaMd_Per1_Return();

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_CntDisMtrTrqCmdMRF_MtrNm_f32.value) = Rte_CtrldDisShtdn_CntDisMtrTrqCmdMRF_MtrNm_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_EstKe_VpRadpS_f32.value) = Rte_CurrParamComp_EstKe_VpRadpS_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_MotorVelMRF_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVel_MtrRadpS_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_PosServEnable_Cnt_lgc.value) = Rte_Ap_PwrLmtFuncCr_PosServEnable_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_Vecu_Volt_f32.value) = Rte_BatteryVoltage_Vecu_Volt_f32;

    /* call runnable */
    Rte_Runnable_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1_Start();
    PwrLmtFuncCr_Per1();
    Rte_Runnable_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1_Return();

    /* write implicit data */
    Rte_Ap_PwrLmtFuncCr_MRFMtrTrqCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_MRFMtrTrqCmd_MtrNm_f32.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_TmprlMon_TmprlMon_Per2 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_TmprlMon_TmprlMon_Per2.Rte_TMFTestStart_Cnt_lgc.value) = Rte_Ap_HwPwUp_TMFTestStart_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Sa_TmprlMon_TmprlMon_Per2_Start();
    TmprlMon_Per2();
    Rte_Runnable_Sa_TmprlMon_TmprlMon_Per2_Return();

    /* write implicit data */
    Rte_TmprlMon_TMFTestComplete_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_TmprlMon_TmprlMon_Per2.Rte_TMFTestComplete_Cnt_lgc.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TrqCmdScl_TrqCmdScl_Per1.Rte_MRFMtrTrqCmd_MtrNm_f32.value) = Rte_Ap_PwrLmtFuncCr_MRFMtrTrqCmd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_TrqCmdScl_TrqCmdScl_Per1_Start();
  TrqCmdScl_Per1();
  Rte_Runnable_Ap_TrqCmdScl_TrqCmdScl_Per1_Return();

  /* write implicit data */
  Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TrqCmdScl_TrqCmdScl_Per1.Rte_MRFMtrTrqCmdScl_MtrNm_f32.value);

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per2 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per2.Rte_ADCMtrCurr1_Volts_f32.value) = Rte_CDDInterface_ADCMtrCurr1_Volts_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per2.Rte_ADCMtrCurr2_Volts_f32.value) = Rte_CDDInterface_ADCMtrCurr2_Volts_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per2.Rte_CorrMtrCurrPosition_Rev_f32.value) = Rte_CDDInterface_CorrMtrCurrPosition_Rev_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per2.Rte_MtrCurrAngle_Rev_f32.value) = Rte_CurrCmd_MtrCurrAngle_Rev_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per2.Rte_MtrCurrK1_Amp_f32.value) = Rte_CDDInterface_MtrCurrK1_Amp_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per2.Rte_MtrCurrK2_Amp_f32.value) = Rte_CDDInterface_MtrCurrK2_Amp_f32;

    /* call runnable */
    Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Per2_Start();
    CmMtrCurr_Per2();
    Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Per2_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_CmMtrCurr_CmMtrCurr_Per3 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_ADCMtrCurr1_Volts_f32.value) = Rte_CDDInterface_ADCMtrCurr1_Volts_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_ADCMtrCurr2_Volts_f32.value) = Rte_CDDInterface_ADCMtrCurr2_Volts_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_MtrVel_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVel_MtrRadpS_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_SrlComSvcDft_Cnt_b32.value) = Rte_CDDInterface_SrlComSvcDft_Cnt_b32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_Vecu_Volt_f32.value) = Rte_BatteryVoltage_Vecu_Volt_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_VehSpd_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_VhSpdValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Per3_Start();
    CmMtrCurr_Per3();
    Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Per3_Return();

    /* write implicit data */
    Rte_CmMtrCurr_ComOffset_Cnt_u16 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CmMtrCurr_CmMtrCurr_Per3.Rte_ComOffset_Cnt_u16.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_TqRsDg_TqRsDg_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_DervLambdaAlphaDiag_Volt_f32.value) = Rte_Ap_PICurrCntrl_DervLambdaAlphaDiag_Volt_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_DervLambdaBetaDiag_Volt_f32.value) = Rte_Ap_PICurrCntrl_DervLambdaBetaDiag_Volt_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_OutputRampMult_Uls_f32.value) = Rte_StOpCtrl_OutputRampMult_Uls_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_TrqLimitMin_MtrNm_f32.value) = Rte_Ap_AstLmt_TrqLimitMin_MtrNm_f32;

    /* call runnable */
    Rte_Runnable_Ap_TqRsDg_TqRsDg_Per1_Start();
    TqRsDg_Per1();
    Rte_Runnable_Ap_TqRsDg_TqRsDg_Per1_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_CurrentGainSvc_Cnt_lgc.value) = Rte_CmMtrCurr_CurrentGainSvc_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrParamComp_EstKe_VpRadpS_f32.value) = Rte_CurrParamComp_EstKe_VpRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_EstLd_Henry_f32.value) = Rte_CurrParamComp_EstLd_Henry_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_EstLq_Henry_f32.value) = Rte_CurrParamComp_EstLq_Henry_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_EstR_Ohm_f32.value) = Rte_CurrParamComp_EstR_Ohm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_MtrVel_MRFMotorVel_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_MRFTrqCmdScl_MtrNm_f32.value) = Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_MtrQuad_Cnt_u08.value) = Rte_QuadDet_MtrQuad_Cnt_u08;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_BatteryVoltage_Vecu_Volt_f32.value) = Rte_BatteryVoltage_Vecu_Volt_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_VehSpd_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_CurrCmd_CurrCmd_Per1_Start();
  CurrCmd_Per1();
  Rte_Runnable_Ap_CurrCmd_CurrCmd_Per1_Return();

  /* write implicit data */
  Rte_CurrCmd_MtrCurrAngle_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrCmd_CurrCmd_Per1.Rte_MtrCurrAngle_Rev_f32.value);
  Rte_CurrCmd_MtrCurrDaxRef_Amp_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrCmd_MtrCurrDaxRef_Amp_f32.value);
  Rte_CurrCmd_MtrCurrQaxRef_Amp_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrCmd_MtrCurrQaxRef_Amp_f32.value);
  Rte_CurrCmd_MtrTrqCmdSign_Cnt_s16 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrCmd_MtrTrqCmdSign_Cnt_s16.value);
  Rte_CurrCmd_MtrVoltDaxFF_Volt_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrCmd_MtrVoltDaxFF_Volt_f32.value);
  Rte_CurrCmd_MtrVoltQaxFF_Volt_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrCmd_MtrVoltQaxFF_Volt_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_CommOffset_Cnt_u16.value) = Rte_CmMtrCurr_ComOffset_Cnt_u16;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_DaxIntegralGain_IPM_Uls_f32.value) = Rte_CDDInterface_DaxIntegralGain_IPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_DaxIntegralGain_SPM_Uls_f32.value) = Rte_CDDInterface_DaxIntegralGain_SPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_DaxPropotionalGain_IPM_Uls_f32.value) = Rte_CDDInterface_DaxPropotionalGain_IPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_DaxPropotionalGain_SPM_Uls_f32.value) = Rte_CDDInterface_DaxPropotionalGain_SPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurr1TempOffset_Volt_f32.value) = Rte_CmMtrCurr_MtrCurr1TempOffset_Volt_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurr2TempOffset_Volt_f32.value) = Rte_CmMtrCurr_MtrCurr2TempOffset_Volt_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurrDaxRef_IPM_Amp_f32.value) = Rte_CDDInterface_MtrCurrDaxRef_IPM_Amp_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurrQax12Mag_Amp_f32.value) = Rte_CDDInterface_MtrCurrQax12Mag_Amp_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurrQax12Ph_Rev_f32.value) = Rte_CDDInterface_MtrCurrQax12Ph_Rev_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurrQax6Mag_Amp_f32.value) = Rte_CDDInterface_MtrCurrQax6Mag_Amp_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurrQax6Ph_Rev_f32.value) = Rte_CDDInterface_MtrCurrQax6Ph_Rev_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrCurrQaxRef_IPM_Amp_f32.value) = Rte_CDDInterface_MtrCurrQaxRef_IPM_Amp_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrPosComputationDelay_IPM_Deg_f32.value) = Rte_CDDInterface_MtrPosComputationDelay_IPM_Deg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrPosComputationDelay_SPM_Deg_f32.value) = Rte_CDDInterface_MtrPosComputationDelay_SPM_Deg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrTrqCmdSign_IPM_Cnt_s16.value) = Rte_CDDInterface_MtrTrqCmdSign_IPM_Cnt_s16;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrVoltDaxFF_IPM_Volt_f32.value) = Rte_CDDInterface_MtrVoltDaxFF_IPM_Volt_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_MtrVoltQaxFF_IPM_Volt_f32.value) = Rte_CDDInterface_MtrVoltQaxFF_IPM_Volt_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_QaxIntegralGain_IPM_Uls_f32.value) = Rte_CDDInterface_QaxIntegralGain_IPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_QaxIntegralGain_SPM_Uls_f32.value) = Rte_CDDInterface_QaxIntegralGain_SPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_QaxPropotionalGain_IPM_Uls_f32.value) = Rte_CDDInterface_QaxPropotionalGain_IPM_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Per2.Rte_QaxPropotionalGain_SPM_Uls_f32.value) = Rte_CDDInterface_QaxPropotionalGain_SPM_Uls_f32;

  /* call runnable */
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Per2_Start();
  CDDInterface_Per2();
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Per2_Return();

  /* call runnable */
  Rte_Runnable_Sa_MtrPos2_MtrPos2_Per1_Start();
  MtrPos2_Per1();
  Rte_Runnable_Sa_MtrPos2_MtrPos2_Per1_Return();

  /* write implicit data */
  Rte_Sa_MtrPos2_CorrectedMtrPos_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos2_MtrPos2_Per1.Rte_CorrectedMtrPos_Rev_f32.value);
  Rte_Sa_MtrPos2_CosTheta1_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos2_MtrPos2_Per1.Rte_CosTheta1_Volt_f32.value);
  Rte_Sa_MtrPos2_MechMtrPos_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos2_MtrPos2_Per1.Rte_MechMtrPos_Rev_f32.value);
  Rte_Sa_MtrPos2_SinTheta1_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos2_MtrPos2_Per1.Rte_SinTheta1_Volt_f32.value);
  Rte_Sa_MtrPos2_SysCCorrectedMtrPos_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos2_MtrPos2_Per1.Rte_SysCCorrectedMtrPos_Rev_f32.value);
  Rte_Sa_MtrPos2_SysCMechMtrPos_Rev_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos2_MtrPos2_Per1.Rte_SysCMechMtrPos_Rev_f32.value);

  /* call runnable */
  Rte_Runnable_NexteerLibs_SystemTime_Per1_Start();
  SystemTime_Per1();
  Rte_Runnable_NexteerLibs_SystemTime_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_MtrDrvrInitComplete_Cnt_lgc.value) = Rte_MtrDrvDiag_MtrDrvrInitComplete_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_PwrDiscATestComplete_Cnt_lgc.value) = Rte_Sa_BkCpPc_PwrDiscATestComplete_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_PwrDiscBTestComplete_Cnt_lgc.value) = Rte_Sa_BkCpPc_PwrDiscBTestComplete_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_TMFTestComplete_Cnt_lgc.value) = Rte_TmprlMon_TMFTestComplete_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_HwPwUp_HwPwUp_Per1_Start();
  HwPwUp_Per1();
  Rte_Runnable_Ap_HwPwUp_HwPwUp_Per1_Return();

  /* write implicit data */
  Rte_Ap_HwPwUp_MtrDrvrInitStart_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_MtrDrvrInitStart_Cnt_lgc.value);
  Rte_Ap_HwPwUp_PwrDiscATestStart_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_PwrDiscATestStart_Cnt_lgc.value);
  Rte_Ap_HwPwUp_PwrDiscBTestStart_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_PwrDiscBTestStart_Cnt_lgc.value);
  Rte_Ap_HwPwUp_TMFTestStart_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Per1.Rte_TMFTestStart_Cnt_lgc.value);

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrDrvDiag_MtrDrvDiag_Per1.Rte_MtrDrvrInitStart_Cnt_lgc.value) = Rte_Ap_HwPwUp_MtrDrvrInitStart_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrDrvDiag_MtrDrvDiag_Per1.Rte_VswitchClosed_Cnt_lgc.value) = Rte_BatteryVoltage_VswitchClosed_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Sa_MtrDrvDiag_MtrDrvDiag_Per1_Start();
    MtrDrvDiag_Per1();
    Rte_Runnable_Sa_MtrDrvDiag_MtrDrvDiag_Per1_Return();

    /* write implicit data */
    Rte_MtrDrvDiag_FETFaultPhase_Cnt_enum = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrDrvDiag_MtrDrvDiag_Per1.Rte_FETFaultPhase_Cnt_enum.value);
    Rte_MtrDrvDiag_FETFaultType_Cnt_enum = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrDrvDiag_MtrDrvDiag_Per1.Rte_FETFaultType_Cnt_enum.value);
    Rte_MtrDrvDiag_MtrDrvrInitComplete_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrDrvDiag_MtrDrvDiag_Per1.Rte_MtrDrvrInitComplete_Cnt_lgc.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_MtrDrvDiag_MtrDrvDiag_Per2 == 0)
  {
    EnableAllInterrupts();
    /* call runnable */
    Rte_Runnable_Sa_MtrDrvDiag_MtrDrvDiag_Per2_Start();
    MtrDrvDiag_Per2();
    Rte_Runnable_Sa_MtrDrvDiag_MtrDrvDiag_Per2_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComLWhlSpd_Hz_f32.value) = Rte_SrlComInput_SrlComLWhlSpd_Hz_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComLWhlSpdVld_Cnt_lgc.value) = Rte_SrlComInput_SrlComLWhlSpdVld_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComRWhlSpd_Hz_f32.value) = Rte_SrlComInput_SrlComRWhlSpd_Hz_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_SrlComRWhlSpdVld_Cnt_lgc.value) = Rte_SrlComInput_SrlComRWhlSpdVld_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_WIRInputQual_WIRInputQual_Per1_Start();
  WIRInputQual_Per1();
  Rte_Runnable_Ap_WIRInputQual_WIRInputQual_Per1_Return();

  /* write implicit data */
  Rte_Ap_WIRInputQual_QualWhlFreqL_Hz_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_QualWhlFreqL_Hz_f32.value);
  Rte_Ap_WIRInputQual_QualWhlFreqR_Hz_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_QualWhlFreqR_Hz_f32.value);
  Rte_Ap_WIRInputQual_WhlFreqQualified_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WIRInputQual_WIRInputQual_Per1.Rte_WhlFreqQualified_Cnt_lgc.value);

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_DiagStsWIRDisable_Cnt_lgc.value) = Rte_DiagMgr_DiagStsWIRDisable_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_HwTrq_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_QualWhlFreqL_Hz_f32.value) = Rte_Ap_WIRInputQual_QualWhlFreqL_Hz_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_QualWhlFreqR_Hz_f32.value) = Rte_Ap_WIRInputQual_QualWhlFreqR_Hz_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_VehSpd_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_VehSpdValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_WIRMfgEnable_Cnt_lgc.value) = Rte_CDDInterface_WIREnabled_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_WhlFreqQualified_Cnt_lgc.value) = Rte_Ap_WIRInputQual_WhlFreqQualified_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Per1_Start();
    WhlImbRej_Per1();
    Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Per1_Return();

    /* write implicit data */
    Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_WIRCmdAmpBlnd_MtrNm_f32.value);
    Rte_Ap_WhlImbRej_WhlImbRejCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per1.Rte_WhlImbRejCmd_MtrNm_f32.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per3 == 0)
  {
    /* call runnable */
    Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Per3_Start();
    WhlImbRej_Per3();
    Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Per3_Return();

    /* write implicit data */
    Rte_Ap_WhlImbRej_WhlImbRejCmd_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_WhlImbRej_WhlImbRej_Per3.Rte_WhlImbRejCmd_MtrNm_f32.value);
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HighFreqAssist_HighFreqAssist_Per1.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HighFreqAssist_HighFreqAssist_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HighFreqAssist_HighFreqAssist_Per1.Rte_WIRCmdAmpBlnd_MtrNm_f32.value) = Rte_Ap_WhlImbRej_WIRCmdAmpBlnd_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_HighFreqAssist_HighFreqAssist_Per1_Start();
  HighFreqAssist_Per1();
  Rte_Runnable_Ap_HighFreqAssist_HighFreqAssist_Per1_Return();

  /* write implicit data */
  Rte_HighFreqAssist_HighFreqAssist_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HighFreqAssist_HighFreqAssist_Per1.Rte_HighFreqAssist_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_QuadDet_QuadDet_Per1.Rte_MRFCumMtrPos_Deg_f32.value) = Rte_MtrPos_CumMtrPosMRF_Deg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_QuadDet_QuadDet_Per1.Rte_MRFMtrTrqCmdScl_MtrNm_f32.value) = Rte_TrqCmdScl_MRFMtrTrqCmdScl_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_QuadDet_QuadDet_Per1_Start();
  QuadDet_Per1();
  Rte_Runnable_Ap_QuadDet_QuadDet_Per1_Return();

  /* write implicit data */
  Rte_QuadDet_InstMtrDir_Cnt_s08 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_QuadDet_QuadDet_Per1.Rte_InstMtrDir_Cnt_s08.value);
  Rte_QuadDet_MtrQuad_Cnt_u08 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_QuadDet_QuadDet_Per1.Rte_MtrQuad_Cnt_u08.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per1.Rte_MtrCurrDaxRef_Amp_f32.value) = Rte_CurrCmd_MtrCurrDaxRef_Amp_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per1.Rte_MtrCurrQaxRef_Amp_f32.value) = Rte_CurrCmd_MtrCurrQaxRef_Amp_f32;

  /* call runnable */
  Rte_Runnable_Ap_CurrParamComp_CurrParamComp_Per1_Start();
  CurrParamComp_Per1();
  Rte_Runnable_Ap_CurrParamComp_CurrParamComp_Per1_Return();

  /* write implicit data */
  Rte_CurrParamComp_EstKe_VpRadpS_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per1.Rte_EstKe_VpRadpS_f32.value);
  Rte_CurrParamComp_EstLd_Henry_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per1.Rte_EstLd_Henry_f32.value);
  Rte_CurrParamComp_EstLq_Henry_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per1.Rte_EstLq_Henry_f32.value);
  Rte_CurrParamComp_EstR_Ohm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Per1.Rte_EstR_Ohm_f32.value);

  /* call runnable */
  Rte_Runnable_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc_Start();
  IoHwAb_FdbkPathAdc();
  Rte_Runnable_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc_Return();

  /* write implicit data */
  Rte_IoHwAbstractionUsr_Batt_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc.Rte_Batt_Volt_f32.value);
  Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc.Rte_BattSwitched_Volt_f32.value);
  Rte_IoHwAbstractionUsr_InvCos2Scaled_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc.Rte_InvCos2Scaled_Volt_f32.value);
  Rte_IoHwAbstractionUsr_InvSin2Scaled_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc.Rte_InvSin2Scaled_Volt_f32.value);
  Rte_IoHwAbstractionUsr_SysCVSwitch_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc.Rte_SysCVSwitch_Volt_f32.value);
  Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_FdbkPathAdc.Rte_TemperatureADC_Volt_f32.value);

  /* call runnable */
  Rte_Runnable_Cd_uDiag_uDiagLossOfExec_Per2_Start();
  uDiagLossOfExec_Per2();
  Rte_Runnable_Cd_uDiag_uDiagLossOfExec_Per2_Return();

  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_PeakCurrEst_PeakCurrEst_Per1 == 0)
  {
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MtrCurrDax_Amp_f32.value) = Rte_CDDInterface_MtrCurrDax_Amp_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MtrCurrQax_Amp_f32.value) = Rte_CDDInterface_MtrCurrQax_Amp_f32;

    /* call runnable */
    Rte_Runnable_Ap_PeakCurrEst_PeakCurrEst_Per1_Start();
    PeakCurrEst_Per1();
    Rte_Runnable_Ap_PeakCurrEst_PeakCurrEst_Per1_Return();

    /* write implicit data */
    Rte_PeakCurrEst_EstPkCurr_AmpSq_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_EstPkCurr_AmpSq_f32.value);
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrParamComp_EstKe_VpRadpS_f32.value) = Rte_CurrParamComp_EstKe_VpRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_MtrVel_MRFMotorVel_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CurrCmd_MtrCurrDaxRef_Amp_f32.value) = Rte_CurrCmd_MtrCurrDaxRef_Amp_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TrqCanc_TrqCanc_Per1.Rte_MtrCurrQaxRef_Amp_f32.value) = Rte_CurrCmd_MtrCurrQaxRef_Amp_f32;

  /* call runnable */
  Rte_Runnable_Ap_TrqCanc_TrqCanc_Per1_Start();
  TrqCanc_Per1();
  Rte_Runnable_Ap_TrqCanc_TrqCanc_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PICurrCntrl_PICurrCntrl_Per2.Rte_CorrMtrPosElec_Rev_f32.value) = Rte_CDDInterface_CorrMtrCurrPosition_Rev_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PICurrCntrl_PICurrCntrl_Per2.Rte_EstR_Ohm_f32.value) = Rte_CurrParamComp_EstR_Ohm_f32;

  /* call runnable */
  Rte_Runnable_Ap_PICurrCntrl_PICurrCntrl_Per2_Start();
  PICurrCntrl_Per2();
  Rte_Runnable_Ap_PICurrCntrl_PICurrCntrl_Per2_Return();

  /* write implicit data */
  Rte_Ap_PICurrCntrl_DervLambdaAlphaDiag_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PICurrCntrl_PICurrCntrl_Per2.Rte_DervLambdaAlphaDiag_Volt_f32.value);
  Rte_Ap_PICurrCntrl_DervLambdaBetaDiag_Volt_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PICurrCntrl_PICurrCntrl_Per2.Rte_DervLambdaBetaDiag_Volt_f32.value);

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_DigPhsReasDiag_DigPhsReasDiag_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_ExpectedOnTimeA_Cnt_u32.value) = Rte_CDDInterface_ExpectedOnTimeA_Cnt_u32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_ExpectedOnTimeB_Cnt_u32.value) = Rte_CDDInterface_ExpectedOnTimeB_Cnt_u32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_ExpectedOnTimeC_Cnt_u32.value) = Rte_CDDInterface_ExpectedOnTimeC_Cnt_u32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_LRPRCorrectedMtrPosCaptured_Rev_f32.value) = Rte_Sa_MtrPos2_CorrectedMtrPos_Rev_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_LRPRModulationIndexCaptured_Uls_f32.value) = Rte_CDDInterface_ModIdxFinal_Uls_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_LRPRPhaseadvanceCaptured_Cnt_s16.value) = Rte_CDDInterface_LRPRPhaseadvanceCaptured_Cnt_s16;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_MeasuredOnTimeA_Cnt_u32.value) = Rte_CDDInterface_MeasuredOnTimeA_Cnt_u32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_MeasuredOnTimeB_Cnt_u32.value) = Rte_CDDInterface_MeasuredOnTimeB_Cnt_u32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_MeasuredOnTimeC_Cnt_u32.value) = Rte_CDDInterface_MeasuredOnTimeC_Cnt_u32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_MotorVelMRFUnfiltered_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVelUnfiltered_MtrRadpS_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_MtrElecMechPolarity_Cnt_s08.value) = Rte_Polarity_MtrElecMechPolarity_Cnt_s08;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1.Rte_PDActivateTest_Cnt_lgc.value) = Rte_DigPhsReasDiag_PDActivateTest_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1_Start();
    DigPhsReasDiag_Per1();
    Rte_Runnable_Ap_DigPhsReasDiag_DigPhsReasDiag_Per1_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos_MtrPos_Per2.Rte_AssistAssemblyPolarity_Cnt_s08.value) = Rte_Polarity_AssistAssyPolarity_Cnt_s08;

  /* call runnable */
  Rte_Runnable_Sa_MtrPos_MtrPos_Per2_Start();
  MtrPos_Per2();
  Rte_Runnable_Sa_MtrPos_MtrPos_Per2_Return();

  /* write implicit data */
  Rte_MtrPos_AlignedCumMtrPosMRF_Deg_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos_MtrPos_Per2.Rte_AlignedCumMtrPosMRF_Deg_f32.value);
  Rte_MtrPos_CumMtrPosCRF_Deg_f32 = *(&Rte_Task_2ms_10.Rte_TB.Rte_I_MtrPos_CumMtrPosCRF_Deg_f32.value);
  Rte_MtrPos_CumMtrPosMRF_Deg_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos_MtrPos_Per2.Rte_CumMtrPosMRF_Deg_f32.value);
  Rte_MtrPos_SysCCumMtrPosCRF_Deg_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos_MtrPos_Per2.Rte_SysCCumMtrPosCRF_Deg_f32.value);
  Rte_MtrPos_SysCCumMtrPosMRF_Deg_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_MtrPos_MtrPos_Per2.Rte_SysCCumMtrPosMRF_Deg_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_CRFMtrTrqCmd_MtrNm_f32.value) = Rte_CtrldDisShtdn_CntDisMtrTrqCmdCRF_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_CRFMtrVel_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_DiagStsHwPosDis_Cnt_lgc.value) = Rte_DiagMgr_DiagStsHWASbSystmFltPres_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_HwTrq_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_SComInpHwA_HwDeg_f32.value) = Rte_SrlComInput_StrgWhlAngl_HwDeg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_SComInpHwAValid_Cnt_lgc.value) = Rte_SrlComInput_StrgWhlAnglValid_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_VehicleSpeedValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Per1_Start();
  AbsHwPosScom_Per1();
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Per1_Return();

  /* write implicit data */
  Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_HwPos_HwDeg_f32.value);
  Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_AbsHwPosScom_AbsHwPosScom_Per1.Rte_HwPosAuthority_Uls_f32.value);

  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Ap_StbCTO_StbCTO_Per1 == 0)
  {
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTEnableRqst_Cnt_lgc.value) = Rte_SrlComInput_DSTEnableRqst_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTErrCntrRecvLevel_Cnt_u08.value) = Rte_SrlComInput_DSTErrCntrRecvLevel_Cnt_u08;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTExtSystemFltActive_Cnt_lgc.value) = Rte_SrlComInput_DSTExtSystemFltActive_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTFuncPresent_Cnt_lgc.value) = Rte_SrlComInput_DSTFuncPresent_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTRevGearValid_Cnt_lgc.value) = Rte_SrlComInput_DSTRevGearValid_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTSlewComplete_Cnt_lgc.value) = Rte_Ap_ArbLmt_DSTSlewComplete_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTTOCState_Uls_enum.value) = Rte_SrlComInput_DSTTOCState_Uls_enum;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTTrqOvCmdRqst_HwNm_f32.value) = Rte_SrlComInput_DSTTrqOvCmdRqst_HwNm_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTTrqOvRqstValid_Cnt_lgc.value) = Rte_SrlComInput_DSTTrqOvRqstValid_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DiagRedAssistLowVoltageActive_Cnt_lgc.value) = Rte_Ap_StbCTO_DiagRedAssistLowVoltageActive_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc.value) = Rte_DiagMgr_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DiagStsRecRmpToZeroFltPres_Cnt_lgc.value) = Rte_DiagMgr_DiagStsRecRmpToZeroFltPres_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_LimitPercentFiltered_Uls_f32.value) = Rte_Ap_AstLmt_LimitPercentFiltered_Uls_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_TOEOLDisable_Cnt_lgc.value) = Rte_CDDInterface_TOEOLDisable_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_TrqOvReverseGearEngage_Cnt_lgc.value) = Rte_SrlComInput_TrqOvReverseGearEngage_Cnt_lgc;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_VehicleSpeedValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Ap_StbCTO_StbCTO_Per1_Start();
    StbCTO_Per1();
    Rte_Runnable_Ap_StbCTO_StbCTO_Per1_Return();

    /* write implicit data */
    Rte_Ap_StbCTO_DSTActive_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTActive_Cnt_lgc.value);
    Rte_Ap_StbCTO_DSTSlewStart_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTSlewStart_Cnt_lgc.value);
    Rte_Ap_StbCTO_DSTState_Cnt_u08 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Per1.Rte_DSTState_Cnt_u08.value);
  }

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_DiagMgr_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc.value) = Rte_DiagMgr_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_DiagMgr_DiagStsRecRmpToZeroFltPres_Cnt_lgc.value) = Rte_DiagMgr_DiagStsRecRmpToZeroFltPres_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_HwTrq_AnaHwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_AstLmt_LimitPercentFiltered_Uls_f32.value) = Rte_Ap_AstLmt_LimitPercentFiltered_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PAEnableRqst_Cnt_lgc.value) = Rte_SrlComInput_PAEnableRqst_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PAErrInterfaceActive_Cnt_lgc.value) = Rte_SrlComInput_PAErrInterfaceActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PAExtSystemFltActive_Cnt_lgc.value) = Rte_SrlComInput_PAExtSystemFltActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PAIntSystemFltActive_Cnt_lgc.value) = Rte_SrlComInput_PAIntSystemFltActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PAWheelCriteriaMet_Cnt_lgc.value) = Rte_SrlComInput_PAWheelCriteriaMet_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PrkAsstFuncPresent_Cnt_lgc.value) = Rte_SrlComInput_PrkAsstFuncPresent_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PrkAsstSlewComplete_Cnt_lgc.value) = Rte_Ap_ArbLmt_PrkAsstSlewComplete_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_CDDInterface_TOEOLDisable_Cnt_lgc.value) = Rte_CDDInterface_TOEOLDisable_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_TrqOvReverseGearEngage_Cnt_lgc.value) = Rte_SrlComInput_TrqOvReverseGearEngage_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_PAwTO_PAwTO_Per1_Start();
  PAwTO_Per1();
  Rte_Runnable_Ap_PAwTO_PAwTO_Per1_Return();

  /* write implicit data */
  Rte_Ap_PAwTO_HandsOnDetect_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_HandsOnDetect_Cnt_lgc.value);
  Rte_Ap_PAwTO_PABoostCurveSwitch_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PABoostCurveSwitch_Cnt_lgc.value);
  Rte_Ap_PAwTO_PrkAssistActive_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PrkAssistActive_Cnt_lgc.value);
  Rte_Ap_PAwTO_PrkAssistState_Cnt_u08 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PrkAssistState_Cnt_u08.value);
  Rte_Ap_PAwTO_PrkAssistSuspend_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Per1.Rte_PrkAssistSuspend_Cnt_lgc.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_DSTState_Cnt_u08.value) = Rte_Ap_StbCTO_DSTState_Cnt_u08;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFEnableRqst_Cnt_lgc.value) = Rte_SrlComInput_HaLFEnableRqst_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFErrInterfaceActive_Cnt_lgc.value) = Rte_SrlComInput_HaLFErrInterfaceActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFExtSystemFltActive_Cnt_lgc.value) = Rte_SrlComInput_HaLFExtSystemFltActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFFuncPresent_Cnt_lgc.value) = Rte_SrlComInput_HaLFFuncPresent_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFIntSystemFltActive_Cnt_lgc.value) = Rte_SrlComInput_HaLFIntSystemFltActive_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFSWATrqFail_Cnt_lgc.value) = Rte_SrlComInput_HaLFSWATrqFail_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFSlewComplete_Cnt_lgc.value) = Rte_Ap_ArbLmt_HaLFSlewComplete_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFTrqOvReverseGearEngage_Cnt_lgc.value) = Rte_SrlComInput_HalfTrqOvRvrsGearEngage_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_PrevHaLFEnableRqst_Cnt_lgc.value) = Rte_SrlComInput_PrevHaLFEnableRqst_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_PrevHaLFTrqOvCmdRqst_MtrNm_f32.value) = Rte_SrlComInput_PrevHaLFTrqOvCmdRqst_MtrNm_f32;
  *(&Rte_Task_2ms_10.Rte_TB.Rte_I_Ap_SignlCondn_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_HaLFTO_HaLFTO_Per1_Start();
  HaLFTO_Per1();
  Rte_Runnable_Ap_HaLFTO_HaLFTO_Per1_Return();

  /* write implicit data */
  Rte_Ap_HaLFTO_HaLFActive_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFActive_Cnt_lgc.value);
  Rte_Ap_HaLFTO_HaLFState_Cnt_u08 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFState_Cnt_u08.value);
  Rte_Ap_HaLFTO_HaLFSuspend_Cnt_lgc = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_HaLFTO_HaLFTO_Per1.Rte_HaLFSuspend_Cnt_lgc.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_CcwEOT_HwDeg_f32.value) = Rte_Ap_LrnEOT_CCWPosition_HwDeg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_CcwFound_Cnt_lgc.value) = Rte_Ap_LrnEOT_CCWFound_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_CwEOT_HwDeg_f32.value) = Rte_Ap_LrnEOT_CWPosition_HwDeg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_CwFound_Cnt_lgc.value) = Rte_Ap_LrnEOT_CWFound_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_EOTDisable_Cnt_lgc.value) = Rte_CDDInterface_EOTImpactSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_HandWheelAuth_Uls_f32.value) = Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_HandWheelPos_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_MotorVel_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_PreLimitTorque_MtrNm_f32.value) = Rte_Ap_AstLmt_PreLimitTorque_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_EOTActuatorMng_EOTActuatorMng_Per1_Start();
  EOTActuatorMng_Per1();
  Rte_Runnable_Ap_EOTActuatorMng_EOTActuatorMng_Per1_Return();

  /* write implicit data */
  Rte_EOTActuatorMng_AssistEOTDamping_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_AssistEOTDamping_MtrNm_f32.value);
  Rte_EOTActuatorMng_AssistEOTGain_Uls_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_AssistEOTGain_Uls_f32.value);
  Rte_EOTActuatorMng_AssistEOTLimit_MtrNm_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_EOTActuatorMng_EOTActuatorMng_Per1.Rte_AssistEOTLimit_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_SignlCondn_SignlCondn_Per1.Rte_SrlComVehSpeed_Kph_f32.value) = Rte_SrlComInput_SrlComVehSpd_Kph_f32;
  *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_SignlCondn_SignlCondn_Per1.Rte_SrlCom_VehicleLonAccel_KphpS_f32.value) = Rte_SrlComInput_VehAccelX_KphpS_f32;

  /* call runnable */
  Rte_Runnable_Ap_SignlCondn_SignlCondn_Per1_Start();
  SignlCondn_Per1();
  Rte_Runnable_Ap_SignlCondn_SignlCondn_Per1_Return();

  /* write implicit data */
  Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_SignlCondn_SignlCondn_Per1.Rte_VehicleSpeed_Kph_f32.value);
  Rte_Ap_SignlCondn_Vehicle_LonAccel_KphpS_f32 = *(&Rte_Task_2ms_10.Rte_RB.Rte_Ap_SignlCondn_SignlCondn_Per1.Rte_Vehicle_LonAccel_KphpS_f32.value);

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_2ms_10_Rte_Trigger1_Sa_OvrVoltMon_OvrVoltMon_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_10.Rte_RB.Rte_Sa_OvrVoltMon_OvrVoltMon_Per1.Rte_PwrDiscBTestStart_Cnt_lgc.value) = Rte_Ap_HwPwUp_PwrDiscBTestStart_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Sa_OvrVoltMon_OvrVoltMon_Per1_Start();
    OvrVoltMon_Per1();
    Rte_Runnable_Sa_OvrVoltMon_OvrVoltMon_Per1_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr10_DiagMgr_Per1_Start();
  DiagMgr_Per1();
  Rte_Runnable_Ap_DiagMgr10_DiagMgr_Per1_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_2ms_8
 * Priority: 61
 * Schedule: FULL
 * Alarm:    Cycle Time 0.002 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_2ms_8)
{
  Rte_Task_Dispatch(Task_2ms_8);

  /* read implicit data */
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Per1.Rte_AsstAssemPol_Cnt_s08.value) = Rte_Polarity_AssistAssyPolarity_Cnt_s08;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Per1.Rte_CumMtrPosMRF_Deg_f32.value) = Rte_MtrPos_CumMtrPosMRF_Deg_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrVel2_MtrVel2_Per1_Start();
  MtrVel2_Per1();
  Rte_Runnable_Sa_MtrVel2_MtrVel2_Per1_Return();

  /* write implicit data */
  Rte_Sa_MtrVel2_SysCDiagHandWheelVel_HwRadpS_f32 = *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Per1.Rte_SysCDiagHandWheelVel_HwRadpS_f32.value);
  Rte_Sa_MtrVel2_SysCDiagMtrVelMRF_MtrRadpS_f32 = *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Per1.Rte_SysCDiagMtrVelMRF_MtrRadpS_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_HwTrqScaleVal_VoltsPerDeg_f32.value) = Rte_HwTrq_HwTrqScaleVal_VoltsPerDeg_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCT1ADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_SysCT1ADC_Volt_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCT2ADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_SysCT2ADC_Volt_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_T1TrimVal_Volt_f32.value) = Rte_HwTrq_T1TrimVal_Volt_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_T2TrimVal_Volt_f32.value) = Rte_HwTrq_T2TrimVal_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Per1_Start();
  HwTrq2_Per1();
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Per1_Return();

  /* write implicit data */
  Rte_Sa_HwTrq2_SysCHwTorqueSqd_HwNmSq_f32 = *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per1.Rte_SysCHwTorqueSqd_HwNmSq_f32.value);

  if (Rte_Ap_8_TriggerDisableFlags.Rte_Trigger_Task_2ms_8_Rte_Trigger1_Ap_Gsod_Gsod_Per1 == 0)
  {
    /* call runnable */
    Rte_Runnable_Ap_Gsod_Gsod_Per1_Start();
    Gsod_Per1();
    Rte_Runnable_Ap_Gsod_Gsod_Per1_Return();
  }

  /* call runnable */
  Rte_Runnable_Ap_StaMd8_StaMd8_Per1_Start();
  StaMd8_Per1();
  Rte_Runnable_Ap_StaMd8_StaMd8_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_MtrPos3_MtrPos3_Per1.Rte_InvCos2Scaled_Volt_f32.value) = Rte_IoHwAbstractionUsr_InvCos2Scaled_Volt_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Sa_MtrPos3_MtrPos3_Per1.Rte_InvSin2Scaled_Volt_f32.value) = Rte_IoHwAbstractionUsr_InvSin2Scaled_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrPos3_MtrPos3_Per1_Start();
  MtrPos3_Per1();
  Rte_Runnable_Sa_MtrPos3_MtrPos3_Per1_Return();

  /* read implicit data */
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Ap_StabilityComp2_StabilityComp2_Per1.Rte_AssistDDFactor_Uls_f32.value) = Rte_Ap_StabilityComp2_AssistDDFactor_Uls_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Ap_StabilityComp2_StabilityComp2_Per1.Rte_AsstFWActive_Uls_f32.value) = Rte_Ap_AssistFirewall_AsstFirewallActive_Uls_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Ap_StabilityComp2_StabilityComp2_Per1.Rte_CombinedAssist_MtrNm_f32.value) = Rte_Ap_AssistFirewall_CombinedAssist_MtrNm_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Ap_StabilityComp2_StabilityComp2_Per1.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_2ms_8.Rte_RB.Rte_Ap_StabilityComp2_StabilityComp2_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_StabilityComp2_StabilityComp2_Per1_Start();
  StabilityComp2_Per1();
  Rte_Runnable_Ap_StabilityComp2_StabilityComp2_Per1_Return();

  /* write implicit data */
  Rte_Ap_StabilityComp2_SysAssistCmd_MtrNm_f32 = *(&Rte_Task_2ms_8.Rte_RB.Rte_Ap_StabilityComp2_StabilityComp2_Per1.Rte_SysAssistCmd_MtrNm_f32.value);

  /* call runnable */
  Rte_Runnable_Sa_TmprlMon2_TmprlMon2_Per1_Start();
  TmprlMon2_Per1();
  Rte_Runnable_Sa_TmprlMon2_TmprlMon2_Per1_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_2ms_9
 * Priority: 60
 * Schedule: FULL
 * Alarm:    Cycle Time 0.002 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_2ms_9)
{
  Rte_Task_Dispatch(Task_2ms_9);

  /* read implicit data */
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per1.Rte_Batt_Volt_f32.value) = Rte_IoHwAbstractionUsr_Batt_Volt_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per1.Rte_BattSwitched_Volt_f32.value) = Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32;

  /* call runnable */
  Rte_Runnable_Ap_BatteryVoltage_BatteryVoltage_Per1_Start();
  BatteryVoltage_Per1();
  Rte_Runnable_Ap_BatteryVoltage_BatteryVoltage_Per1_Return();

  /* write implicit data */
  Rte_BatteryVoltage_SysC_Vecu_Volt_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per1.Rte_SysC_Vecu_Volt_f32.value);
  Rte_BatteryVoltage_Vecu_Volt_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per1.Rte_Vecu_Volt_f32.value);
  Rte_BatteryVoltage_VswitchClosed_Cnt_lgc = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per1.Rte_VswitchClosed_Cnt_lgc.value);

  DisableAllInterrupts();
  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_DisableLearning_Cnt_lgc.value) = Rte_Ap_ArbLmt_PICmpDisableLearning_Cnt_lgc;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_DisableOutput_Cnt_lgc.value) = Rte_CDDInterface_PullCompSrlComSvcDft_Cnt_lgc;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_HandwheelAuthority_Uls_f32.value) = Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_HandwheelPosition_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_HandwheelVelocity_HwRadpS_f32.value) = Rte_MtrVel_HandwheelVel_HwRadpS_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_SrlComYawRate_DegpS_f32.value) = Rte_Ap_ActivePull_SrlComYawRate_DegpS_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per1.Rte_VehicleSpeedValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Ap_ActivePull_ActivePull_Per1_Start();
    ActivePull_Per1();
    Rte_Runnable_Ap_ActivePull_ActivePull_Per1_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Ap_ActivePull_ActivePull_Per2 == 0)
  {
    /* read implicit data */
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per2.Rte_DisableOutput_Cnt_lgc.value) = Rte_CDDInterface_PullCompSrlComSvcDft_Cnt_lgc;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per2.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

    /* call runnable */
    Rte_Runnable_Ap_ActivePull_ActivePull_Per2_Start();
    ActivePull_Per2();
    Rte_Runnable_Ap_ActivePull_ActivePull_Per2_Return();

    /* write implicit data */
    Rte_Ap_ActivePull_PullCompCmd_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_ActivePull_ActivePull_Per2.Rte_PullCompCmd_MtrNm_f32.value);
  }

  /* read implicit data */
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehSpdLmt_VehSpdLmt_Per1.Rte_CCWPosition_HwDeg_f32.value) = Rte_Ap_LrnEOT_CCWPosition_HwDeg_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehSpdLmt_VehSpdLmt_Per1.Rte_CWPosition_HwDeg_f32.value) = Rte_Ap_LrnEOT_CWPosition_HwDeg_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehSpdLmt_VehSpdLmt_Per1.Rte_HwPos_HwDeg_f32.value) = Rte_Ap_AbsHwPosScom_HwPos_HwDeg_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehSpdLmt_VehSpdLmt_Per1.Rte_HwPosAuth_Uls_f32.value) = Rte_Ap_AbsHwPosScom_HwPosAuthority_Uls_f32;
  *(&Rte_Task_2ms_9.Rte_TB.Rte_I_Ap_SignlCondn_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_VehSpdLmt_VehSpdLmt_Per1_Start();
  VehSpdLmt_Per1();
  Rte_Runnable_Ap_VehSpdLmt_VehSpdLmt_Per1_Return();

  /* write implicit data */
  Rte_VehSpdLmt_AstVehSpdLimit_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_TB.Rte_I_VehSpdLmt_AstVehSpdLimit_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_CtrlTemp_CtrlTemp_Per1.Rte_DiagStsTempRdPrf_Cnt_lgc.value) = Rte_DiagMgr_DiagStsDefTemp_Cnt_lgc;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_CtrlTemp_CtrlTemp_Per1.Rte_TemperatureADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_CtrlTemp_CtrlTemp_Per1_Start();
  CtrlTemp_Per1();
  Rte_Runnable_Sa_CtrlTemp_CtrlTemp_Per1_Return();

  /* write implicit data */
  Rte_CtrlTemp_FiltMeasTemp_DegC_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_CtrlTemp_CtrlTemp_Per1.Rte_FiltMeasTemp_DegC_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_AssistEOTGain_Uls_f32.value) = Rte_EOTActuatorMng_AssistEOTGain_Uls_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_AssistEOTLimit_MtrNm_f32.value) = Rte_EOTActuatorMng_AssistEOTLimit_MtrNm_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_AssistStallLimit_MtrNm_f32.value) = Rte_HiLoadStall_AssistStallLimit_MtrNm_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_OutputRampMult_Uls_f32.value) = Rte_StOpCtrl_OutputRampMult_Uls_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_ThermalLimit_MtrNm_f32.value) = Rte_Ap_ThrmlDutyCycle_ThermalLimit_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_LmtCod_LmtCod_Per1_Start();
  LmtCod_Per1();
  Rte_Runnable_Ap_LmtCod_LmtCod_Per1_Return();

  /* write implicit data */
  Rte_Ap_LmtCod_EOTGainLtd_Uls_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_EOTGainLtd_Uls_f32.value);
  Rte_Ap_LmtCod_EOTLimitLtd_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_EOTLimitLtd_MtrNm_f32.value);
  Rte_Ap_LmtCod_OutputRampMultLtd_Uls_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_OutputRampMultLtd_Uls_f32.value);
  Rte_Ap_LmtCod_StallLimitLtd_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_StallLimitLtd_MtrNm_f32.value);
  Rte_Ap_LmtCod_ThermalLimitLtd_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_ThermalLimitLtd_MtrNm_f32.value);
  Rte_Ap_LmtCod_VehSpdLimitLtd_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_LmtCod_LmtCod_Per1.Rte_VehSpdLimitLtd_MtrNm_f32.value);

  /* read implicit data */
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_HiLoadStall_HiLoadStall_Per1.Rte_DftStallLimit_Cnt_lgc.value) = Rte_CDDInterface_EOTThermalSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_HiLoadStall_HiLoadStall_Per1.Rte_MtrVelCRF_MtrRadpS_f32.value) = Rte_MtrVel_CRFMotorVel_MtrRadpS_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_HiLoadStall_HiLoadStall_Per1.Rte_PreLimitForStall_MtrNm_f32.value) = Rte_Ap_AstLmt_PreLimitForStall_MtrNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_HiLoadStall_HiLoadStall_Per1_Start();
  HiLoadStall_Per1();
  Rte_Runnable_Ap_HiLoadStall_HiLoadStall_Per1_Return();

  /* write implicit data */
  Rte_HiLoadStall_AssistStallLimit_MtrNm_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_HiLoadStall_HiLoadStall_Per1.Rte_AssistStallLimit_MtrNm_f32.value);

  DisableAllInterrupts();
  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_2ms_9_Rte_Trigger1_Sa_BkCpPc_BkCpPc_Per1 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_Batt_Volt_f32.value) = Rte_IoHwAbstractionUsr_Batt_Volt_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_BattSwitched_Volt_f32.value) = Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_MotorVelocityMRFUnfiltered_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVelUnfiltered_MtrRadpS_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_OVERRIDESIGDIAGADC_Volt_f32.value) = Rte_Sa_BkCpPc_OVERRIDESIGDIAGADC_Volt_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_PMOSDIAGADC_Volt_f32.value) = Rte_Sa_BkCpPc_PMOSDIAGADC_Volt_f32;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_PwrDiscATestStart_Cnt_lgc.value) = Rte_Ap_HwPwUp_PwrDiscATestStart_Cnt_lgc;
    *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_PwrDiscBTestStart_Cnt_lgc.value) = Rte_Ap_HwPwUp_PwrDiscBTestStart_Cnt_lgc;

    /* call runnable */
    Rte_Runnable_Sa_BkCpPc_BkCpPc_Per1_Start();
    BkCpPc_Per1();
    Rte_Runnable_Sa_BkCpPc_BkCpPc_Per1_Return();

    /* write implicit data */
    Rte_Sa_BkCpPc_PwrDiscATestComplete_Cnt_lgc = *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_PwrDiscATestComplete_Cnt_lgc.value);
    Rte_Sa_BkCpPc_PwrDiscBTestComplete_Cnt_lgc = *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_PwrDiscBTestComplete_Cnt_lgc.value);
    Rte_Sa_BkCpPc_PwrDiscClosed_Cnt_lgc = *(&Rte_Task_2ms_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Per1.Rte_PwrDiscClosed_Cnt_lgc.value);
  }
  else
  {
    EnableAllInterrupts();
  }

  /* call runnable */
  Rte_Runnable_Ap_StaMd9_StaMd9_Per1_Start();
  StaMd9_Per1();
  Rte_Runnable_Ap_StaMd9_StaMd9_Per1_Return();

  /* call runnable */
  Rte_Runnable_Ccl_Ccl_2_0msTaskCont_Start();
  Ccl_2_0msTaskCont();
  Rte_Runnable_Ccl_Ccl_2_0msTaskCont_Return();

  /* read implicit data */
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_DefaultVehSpd_Cnt_lgc.value) = Rte_DiagMgr_DiagStsDefVehSpd_Cnt_lgc;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_EngONSrlComSvcDft_Cnt_lgc.value) = Rte_CDDInterface_EngONSrlComSvcDft_Cnt_lgc;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_EngRPM_Cnt_u16.value) = Rte_SrlComInput_EngRPM_Cnt_u16;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_EssEngStop_Cnt_lgc.value) = Rte_SrlComInput_EssEngStop_Cnt_lgc;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_SpStPrsnt_Cnt_lgc.value) = Rte_SrlComInput_SpStPrsnt_Cnt_lgc;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_VehSpd_Kph_f32.value) = Rte_SrlComInput_SrlComVehSpd_Kph_f32;
  *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_VehSpdValid_Cnt_lgc.value) = Rte_SrlComInput_SrlComVehSpdValid_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_VehPwrMd_VehPwrMd_Per1_Start();
  VehPwrMd_Per1();
  Rte_Runnable_Ap_VehPwrMd_VehPwrMd_Per1_Return();

  /* write implicit data */
  Rte_VehPwrMd_ATermActive_Cnt_lgc = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_ATermActive_Cnt_lgc.value);
  Rte_VehPwrMd_CTermActive_Cnt_lgc = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_CTermActive_Cnt_lgc.value);
  Rte_VehPwrMd_OperRampRate_XpmS_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OperRampRate_XpmS_f32.value);
  Rte_VehPwrMd_OperRampValue_Uls_f32 = *(&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OperRampValue_Uls_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_ApXcp_DAQ_2msTL_Start();
  DAQ_2msTL();
  Rte_Runnable_Ap_ApXcp_DAQ_2msTL_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_4ms_10
 * Priority: 52
 * Schedule: FULL
 * Alarm:    Cycle Time 0.004 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_4ms_10)
{
  Rte_Task_Dispatch(Task_4ms_10);

  /* call runnable */
  Rte_Runnable_Cd_uDiag_uDiagLossOfExec_Per3_Start();
  uDiagLossOfExec_Per3();
  Rte_Runnable_Cd_uDiag_uDiagLossOfExec_Per3_Return();

  /* read implicit data */
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per2.Rte_CntrlDisRampComplete_Cnt_lgc.value) = Rte_CtrldDisShtdn_CtrldDmpStsCmp_Cnt_lgc;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per2.Rte_SysCHwTorqueSqd_HwNmSq_f32.value) = Rte_Sa_HwTrq2_SysCHwTorqueSqd_HwNmSq_f32;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per2.Rte_T1ADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_T1ADC_Volt_f32;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Per2.Rte_T2ADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_T2ADC_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_HwTrq_HwTrq_Per2_Start();
  HwTrq_Per2();
  Rte_Runnable_Sa_HwTrq_HwTrq_Per2_Return();

  /* read implicit data */
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per2.Rte_SysCDiagHandWheelVel_HwRadpS_f32.value) = Rte_Sa_MtrVel2_SysCDiagHandWheelVel_HwRadpS_f32;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Sa_MtrVel_MtrVel_Per2.Rte_SysCDiagMtrVelMRF_MtrRadpS_f32.value) = Rte_Sa_MtrVel2_SysCDiagMtrVelMRF_MtrRadpS_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrVel_MtrVel_Per2_Start();
  MtrVel_Per2();
  Rte_Runnable_Sa_MtrVel_MtrVel_Per2_Return();

  DisableAllInterrupts();
  if (Rte_Ap_10_TriggerDisableFlags.Rte_Trigger_Task_4ms_10_Rte_Trigger1_Ap_WhlImbRej_WhlImbRej_Per2 == 0)
  {
    EnableAllInterrupts();
    /* call runnable */
    Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Per2_Start();
    WhlImbRej_Per2();
    Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Per2_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  /* read implicit data */
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_DSTActive_Cnt_lgc.value) = Rte_Ap_StbCTO_DSTActive_Cnt_lgc;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_DSTState_Cnt_u08.value) = Rte_Ap_StbCTO_DSTState_Cnt_u08;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_DSTTrqOvCmdRqst_HwNm_f32.value) = Rte_SrlComInput_DSTTrqOvCmdRqst_HwNm_f32;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_HaLFActive_Cnt_lgc.value) = Rte_Ap_HaLFTO_HaLFActive_Cnt_lgc;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_HaLFTOState_Cnt_u08.value) = Rte_Ap_HaLFTO_HaLFState_Cnt_u08;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_HaLFTrqOvCmdRqst_MtrNm_f32.value) = Rte_SrlComInput_HaLFTrqOvCmdRqst_MtrNm_f32;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_PATrqOvCmdRqst_HwNm_f32.value) = Rte_SrlComInput_PATrqOvCmdRqst_HwNm_f32;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_PrkAssistState_Cnt_u08.value) = Rte_Ap_PAwTO_PrkAssistState_Cnt_u08;
  *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_VehicleSpeed_Kph_f32.value) = Rte_Ap_SignlCondn_VehicleSpeed_Kph_f32;

  /* call runnable */
  Rte_Runnable_Ap_ArbLmt_ArbLmt_Per1_Start();
  ArbLmt_Per1();
  Rte_Runnable_Ap_ArbLmt_ArbLmt_Per1_Return();

  /* write implicit data */
  Rte_Ap_ArbLmt_ActiveFunctionBits_Cnt_u08 = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_ActiveFunctionBits_Cnt_u08.value);
  Rte_Ap_ArbLmt_DSTSlewComplete_Cnt_lgc = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_DSTSlewComplete_Cnt_lgc.value);
  Rte_Ap_ArbLmt_HaLFSlewComplete_Cnt_lgc = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_HaLFSlewComplete_Cnt_lgc.value);
  Rte_Ap_ArbLmt_IpTrqOvr_HwNm_f32 = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_IpTrqOvr_HwNm_f32.value);
  Rte_Ap_ArbLmt_OpTrqOvr_MtrNm_f32 = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_OpTrqOvr_MtrNm_f32.value);
  Rte_Ap_ArbLmt_PAReturnSclFct_Uls_f32 = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_PAReturnSclFct_Uls_f32.value);
  Rte_Ap_ArbLmt_PICmpDisableLearning_Cnt_lgc = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_PICmpDisableLearning_Cnt_lgc.value);
  Rte_Ap_ArbLmt_PrkAsstSlewComplete_Cnt_lgc = *(&Rte_Task_4ms_10.Rte_RB.Rte_Ap_ArbLmt_ArbLmt_Per1.Rte_PrkAsstSlewComplete_Cnt_lgc.value);

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_4ms_8
 * Priority: 51
 * Schedule: FULL
 * Alarm:    Cycle Time 0.004 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_4ms_8)
{
  Rte_Task_Dispatch(Task_4ms_8);

  /* read implicit data */
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Per2.Rte_HandWheelVel_HwRadpS_f32.value) = Rte_MtrVel_HandwheelVel_HwRadpS_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Per2.Rte_MRFMotorVel_MtrRadpS_f32.value) = Rte_MtrVel_MRFMotorVel_MtrRadpS_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrVel2_MtrVel2_Per2_Start();
  MtrVel2_Per2();
  Rte_Runnable_Sa_MtrVel2_MtrVel2_Per2_Return();

  /* read implicit data */
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_AnaHwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_SysCT1ADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_SysCT1ADC_Volt_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_SysCT2ADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_SysCT2ADC_Volt_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_T1TrimVal_Volt_f32.value) = Rte_HwTrq_T1TrimVal_Volt_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_HwTrq2_HwTrq2_Per2.Rte_T2TrimVal_Volt_f32.value) = Rte_HwTrq_T2TrimVal_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Per2_Start();
  HwTrq2_Per2();
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Per2_Return();

  /* read implicit data */
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_MtrPos3_MtrPos3_Per2.Rte_CorrectedMtrPos_Rev_f32.value) = Rte_Sa_MtrPos2_CorrectedMtrPos_Rev_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_MtrPos3_MtrPos3_Per2.Rte_InvCos2Scaled_Volt_f32.value) = Rte_IoHwAbstractionUsr_InvCos2Scaled_Volt_f32;
  *(&Rte_Task_4ms_8.Rte_RB.Rte_Sa_MtrPos3_MtrPos3_Per2.Rte_InvSin2Scaled_Volt_f32.value) = Rte_IoHwAbstractionUsr_InvSin2Scaled_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrPos3_MtrPos3_Per2_Start();
  MtrPos3_Per2();
  Rte_Runnable_Sa_MtrPos3_MtrPos3_Per2_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_4ms_9
 * Priority: 50
 * Schedule: FULL
 * Alarm:    Cycle Time 0.004 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_4ms_9)
{
  Rte_Task_Dispatch(Task_4ms_9);

  DisableAllInterrupts();
  if (Rte_Ap_9_TriggerDisableFlags.Rte_Trigger_Task_4ms_9_Rte_Trigger1_BatteryVoltage_BatteryVoltage_Per2 == 0)
  {
    EnableAllInterrupts();
    /* read implicit data */
    *(&Rte_Task_4ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per2.Rte_BattSwitched_Volt_f32.value) = Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32;
    *(&Rte_Task_4ms_9.Rte_RB.Rte_Ap_BatteryVoltage_BatteryVoltage_Per2.Rte_SysCVSwitch_Volt_f32.value) = Rte_IoHwAbstractionUsr_SysCVSwitch_Volt_f32;

    /* call runnable */
    Rte_Runnable_Ap_BatteryVoltage_BatteryVoltage_Per2_Start();
    BatteryVoltage_Per2();
    Rte_Runnable_Ap_BatteryVoltage_BatteryVoltage_Per2_Return();
  }
  else
  {
    EnableAllInterrupts();
  }

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_Init_10
 * Priority: 72
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Init_10)
{
  Rte_Task_Dispatch(Task_Init_10);

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr10_DiagMgr10_Init_Start();
  DiagMgr10_Init();
  Rte_Runnable_Ap_DiagMgr10_DiagMgr10_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_StaMd_StaMd_Init1_Start();
  Call_StaMd_Init1();
  Rte_Runnable_Ap_StaMd_StaMd_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_Polarity_Polarity_Init1_Start();
  Polarity_Init1();
  Rte_Runnable_Ap_Polarity_Polarity_Init1_Return();

  /* write implicit data */
  Rte_Polarity_AssistAssyPolarity_Cnt_s08 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_Polarity_Polarity_Init1.Rte_AssistAssyPolarity_Cnt_s08.value);
  Rte_Polarity_HwPosPolarity_Cnt_s08 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_Polarity_Polarity_Init1.Rte_HwPosPolarity_Cnt_s08.value);
  Rte_Polarity_HwTrqPolarity_Cnt_s08 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_Polarity_Polarity_Init1.Rte_HwTrqPolarity_Cnt_s08.value);
  Rte_Polarity_MtrElecMechPolarity_Cnt_s08 = *(&Rte_Task_Init_10.Rte_TB.Rte_I_Polarity_MtrElecMechPolarity_Cnt_s08.value);
  Rte_Polarity_MtrPosPolarity_Cnt_s08 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_Polarity_Polarity_Init1.Rte_MtrPosPolarity_Cnt_s08.value);
  Rte_Polarity_MtrVelPolarity_Cnt_s08 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_Polarity_Polarity_Init1.Rte_MtrVelPolarity_Cnt_s08.value);
  Rte_Polarity_SysC_MtrElecMechPolarity_Cnt_s32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_Polarity_Polarity_Init1.Rte_SysC_MtrElecMechPolarity_Cnt_s32.value);

  /* call runnable */
  Rte_Runnable_Cd_uDiag_uDiagResetHandler_Init_Start();
  uDiagResetHandler_Init();
  Rte_Runnable_Cd_uDiag_uDiagResetHandler_Init_Return();

  /* call runnable */
  Rte_Runnable_IoHwAbstractionUsr_IoHwAb_Init_Start();
  IoHwAb_Init();
  Rte_Runnable_IoHwAbstractionUsr_IoHwAb_Init_Return();

  /* write implicit data */
  Rte_IoHwAbstractionUsr_Batt_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_Batt_Volt_f32.value);
  Rte_IoHwAbstractionUsr_BattSwitched_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_BattSwitched_Volt_f32.value);
  Rte_IoHwAbstractionUsr_InvCos2Scaled_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_InvCos2Scaled_Volt_f32.value);
  Rte_IoHwAbstractionUsr_InvSin2Scaled_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_InvSin2Scaled_Volt_f32.value);
  Rte_IoHwAbstractionUsr_SysCT1ADC_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_SysCT1ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_SysCT2ADC_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_SysCT2ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_SysCVSwitch_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_SysCVSwitch_Volt_f32.value);
  Rte_IoHwAbstractionUsr_T1ADC_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_T1ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_T2ADC_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_T2ADC_Volt_f32.value);
  Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_IoHwAbstractionUsr_IoHwAb_Init.Rte_TemperatureADC_Volt_f32.value);

  /* read implicit data */
  *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Init1.Rte_DesiredTunPers_Cnt_u16.value) = Rte_SrlComInput_DesiredTunPers_Cnt_u16;
  *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Init1.Rte_DesiredTunSet_Cnt_u16.value) = Rte_SrlComInput_DesiredTunSet_Cnt_u16;

  /* call runnable */
  Rte_Runnable_Ap_TuningSelAuth_TuningSelAuth_Init1_Start();
  TuningSelAuth_Init1();
  Rte_Runnable_Ap_TuningSelAuth_TuningSelAuth_Init1_Return();

  /* write implicit data */
  Rte_Ap_TuningSelAuth_ActiveTunPers_Cnt_u16 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Init1.Rte_ActiveTunPers_Cnt_u16.value);
  Rte_Ap_TuningSelAuth_ActiveTunSet_Cnt_u16 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_TuningSelAuth_TuningSelAuth_Init1.Rte_ActiveTunSet_Cnt_u16.value);

  /* call runnable */
  Rte_Runnable_Sa_MtrPos_MtrPos_Init1_Start();
  MtrPos_Init1();
  Rte_Runnable_Sa_MtrPos_MtrPos_Init1_Return();

  /* call runnable */
  Rte_Runnable_Sa_MtrPos2_MtrPos2_Init1_Start();
  MtrPos2_Init1();
  Rte_Runnable_Sa_MtrPos2_MtrPos2_Init1_Return();

  /* call runnable */
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Init1_Start();
  CDDInterface_Init1();
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Init1_Return();

  /* write implicit data */
  Rte_CDDInterface_IgnCnt_Cnt_u16 = *(&Rte_Task_Init_10.Rte_RB.Rte_Sa_CDDInterface_CDDInterface_Init1.Rte_IgnCnt_Cnt_u16.value);
  Rte_CDDInterface_MEC_Cnt_enum = *(&Rte_Task_Init_10.Rte_TB.Rte_I_CDDInterface_MEC_Cnt_enum.value);

  /* call runnable */
  Rte_Runnable_Sa_MtrVel_MtrVel_Init1_Start();
  MtrVel_Init1();
  Rte_Runnable_Sa_MtrVel_MtrVel_Init1_Return();

  /* call runnable */
  Rte_Runnable_Sa_MtrVel3_MtrVel3_Init_Start();
  MtrVel3_Init();
  Rte_Runnable_Sa_MtrVel3_MtrVel3_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_DigPhsReasDiag_DigPhsReasDiag_Init_Start();
  DigPhsReasDiag_Init();
  Rte_Runnable_Ap_DigPhsReasDiag_DigPhsReasDiag_Init_Return();

  /* call runnable */
  Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Init_Start();
  CmMtrCurr_Init();
  Rte_Runnable_Sa_CmMtrCurr_CmMtrCurr_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_CurrCmd_CurrCmd_Init_Start();
  CurrCmd_Init();
  Rte_Runnable_Ap_CurrCmd_CurrCmd_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Init1_Start();
  WhlImbRej_Init1();
  Rte_Runnable_Ap_WhlImbRej_WhlImbRej_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_CurrParamComp_CurrParamComp_Init_Start();
  CurrParamComp_Init();
  Rte_Runnable_Ap_CurrParamComp_CurrParamComp_Init_Return();

  /* write implicit data */
  Rte_CurrParamComp_EstKe_VpRadpS_f32 = *(&Rte_Task_Init_10.Rte_TB.Rte_I_CurrParamComp_EstKe_VpRadpS_f32.value);
  Rte_CurrParamComp_EstLd_Henry_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Init.Rte_EstLd_Henry_f32.value);
  Rte_CurrParamComp_EstLq_Henry_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Init.Rte_EstLq_Henry_f32.value);
  Rte_CurrParamComp_EstR_Ohm_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_CurrParamComp_CurrParamComp_Init.Rte_EstR_Ohm_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Init1_Start();
  AbsHwPosScom_Init1();
  Rte_Runnable_Ap_AbsHwPosScom_AbsHwPosScom_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_HystComp_HystComp_Init1_Start();
  HystComp_Init1();
  Rte_Runnable_Ap_HystComp_HystComp_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_StbCTO_StbCTO_Init1_Start();
  StbCTO_Init1();
  Rte_Runnable_Ap_StbCTO_StbCTO_Init1_Return();

  /* write implicit data */
  Rte_Ap_StbCTO_DSTActive_Cnt_lgc = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Init1.Rte_DSTActive_Cnt_lgc.value);
  Rte_Ap_StbCTO_DSTSlewStart_Cnt_lgc = *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_StbCTO_StbCTO_Init1.Rte_DSTSlewStart_Cnt_lgc.value);

  /* call runnable */
  Rte_Runnable_Sa_HwTrq_HwTrq_Init_Start();
  HwTrq_Init();
  Rte_Runnable_Sa_HwTrq_HwTrq_Init_Return();

  /* write implicit data */
  Rte_HwTrq_HwTrqScaleVal_VoltsPerDeg_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Init.Rte_HwTrqScaleVal_VoltsPerDeg_f32.value);
  Rte_HwTrq_T1TrimVal_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Init.Rte_T1TrimVal_Volt_f32.value);
  Rte_HwTrq_T2TrimVal_Volt_f32 = *(&Rte_Task_Init_10.Rte_RB.Rte_Sa_HwTrq_HwTrq_Init.Rte_T2TrimVal_Volt_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_HaLFTO_HaLFTO_Init1_Start();
  HaLFTO_Init1();
  Rte_Runnable_Ap_HaLFTO_HaLFTO_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Init_Start();
  FrqDepDmpnInrtCmp_Init();
  Rte_Runnable_Ap_FrqDepDmpnInrtCmp_FrqDepDmpnInrtCmp_Init_Return();

  /* read implicit data */
  *(&Rte_Task_Init_10.Rte_RB.Rte_Ap_PAwTO_PAwTO_Init1.Rte_HwTorque_HwNm_f32.value) = Rte_HwTrq_AnaHwTorque_HwNm_f32;

  /* call runnable */
  Rte_Runnable_Ap_PAwTO_PAwTO_Init1_Start();
  PAwTO_Init1();
  Rte_Runnable_Ap_PAwTO_PAwTO_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_Damping_Damping_Init1_Start();
  Damping_Init1();
  Rte_Runnable_Ap_Damping_Damping_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_TqRsDg_TqRsDg_Init1_Start();
  TqRsDg_Init1();
  Rte_Runnable_Ap_TqRsDg_TqRsDg_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_TrqCanc_TrqCanc_Init_Start();
  TrqCanc_Init();
  Rte_Runnable_Ap_TrqCanc_TrqCanc_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_DampingFirewall_DampingFirewall_Init1_Start();
  DampingFirewall_Init1();
  Rte_Runnable_Ap_DampingFirewall_DampingFirewall_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_StabilityComp_StabilityComp_Init1_Start();
  StabilityComp_Init1();
  Rte_Runnable_Ap_StabilityComp_StabilityComp_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Init1_Start();
  PwrLmtFuncCr_Init1();
  Rte_Runnable_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_AstLmt_AstLmt_Init_Start();
  AstLmt_Init();
  Rte_Runnable_Ap_AstLmt_AstLmt_Init_Return();

  /* call runnable */
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Init2_Start();
  CDDInterface_Init2();
  Rte_Runnable_Sa_CDDInterface_CDDInterface_Init2_Return();

  /* call runnable */
  Rte_Runnable_Ap_AssistFirewall_AssistFirewall_Init1_Start();
  AssistFirewall_Init1();
  Rte_Runnable_Ap_AssistFirewall_AssistFirewall_Init1_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_Init_8
 * Priority: 71
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Init_8)
{
  Rte_Task_Dispatch(Task_Init_8);

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr8_DiagMgr8_Init_Start();
  DiagMgr8_Init();
  Rte_Runnable_Ap_DiagMgr8_DiagMgr8_Init_Return();

  /* read implicit data */
  *(&Rte_Task_Init_8.Rte_RB.Rte_Sa_MtrVel2_MtrVel2_Init.Rte_CumMtrPosMRF_Deg_f32.value) = Rte_MtrPos_CumMtrPosMRF_Deg_f32;

  /* call runnable */
  Rte_Runnable_Sa_MtrVel2_MtrVel2_Init_Start();
  MtrVel2_Init();
  Rte_Runnable_Sa_MtrVel2_MtrVel2_Init_Return();

  /* call runnable */
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Init1_Start();
  HwTrq2_Init1();
  Rte_Runnable_Sa_HwTrq2_HwTrq2_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_StabilityComp2_StabilityComp2_Init1_Start();
  StabilityComp2_Init1();
  Rte_Runnable_Ap_StabilityComp2_StabilityComp2_Init1_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_Init_9
 * Priority: 70
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Init_9)
{
  Rte_Task_Dispatch(Task_Init_9);

  /* call runnable */
  Rte_Runnable_Ap_DemIf_DemIf_Init_Start();
  DemIf_Init();
  Rte_Runnable_Ap_DemIf_DemIf_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr9_DiagMgr9_Init_Start();
  DiagMgr9_Init();
  Rte_Runnable_Ap_DiagMgr9_DiagMgr9_Init_Return();

  /* call runnable */
  Rte_Runnable_Ap_DiagMgr9_DiagMgr_Init1_Start();
  DiagMgr_Init1();
  Rte_Runnable_Ap_DiagMgr9_DiagMgr_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_SrlComInput_SrlComInput_Init_Start();
  SrlComInput_Init();
  Rte_Runnable_Ap_SrlComInput_SrlComInput_Init_Return();

  /* read implicit data */
  *(&Rte_Task_Init_9.Rte_RB.Rte_Sa_CtrlTemp_CtrlTemp_Init1.Rte_TemperatureADC_Volt_f32.value) = Rte_IoHwAbstractionUsr_TemperatureADC_Volt_f32;

  /* call runnable */
  Rte_Runnable_Sa_CtrlTemp_CtrlTemp_Init1_Start();
  CtrlTemp_Init1();
  Rte_Runnable_Sa_CtrlTemp_CtrlTemp_Init1_Return();

  /* write implicit data */
  Rte_CtrlTemp_FiltMeasTemp_DegC_f32 = *(&Rte_Task_Init_9.Rte_TB.Rte_I_CtrlTemp_FiltMeasTemp_DegC_f32.value);

  /* read implicit data */
  *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_AmbTemp_DegC_f32.value) = Rte_SrlComInput_AmbTempAvg_DegC_f32;
  *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_EngTemp_DegC_f32.value) = Rte_SrlComInput_EngOilTemp_DegC_f32;
  *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_ScomTempDataRcvd_Cnt_lgc.value) = Rte_SrlComInput_CanMsgReceived_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_MtrTempEst_MtrTempEst_Init1_Start();
  MtrTempEst_Init1();
  Rte_Runnable_Ap_MtrTempEst_MtrTempEst_Init1_Return();

  /* write implicit data */
  Rte_Ap_MtrTempEst_AssistMechTempEst_DegC_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_AssistMechTempEst_DegC_f32.value);
  Rte_Ap_MtrTempEst_CuTempEst_DegC_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_CuTempEst_DegC_f32.value);
  Rte_Ap_MtrTempEst_MagTempEst_DegC_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_MagTempEst_DegC_f32.value);
  Rte_Ap_MtrTempEst_SiTempEst_DegC_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_MtrTempEst_MtrTempEst_Init1.Rte_SiTempEst_DegC_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_VehPwrMd_VehPwrMd_Init1_Start();
  VehPwrMd_Init1();
  Rte_Runnable_Ap_VehPwrMd_VehPwrMd_Init1_Return();

  /* write implicit data */
  Rte_VehPwrMd_OperRampRate_XpmS_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Init1.Rte_OperRampRate_XpmS_f32.value);
  Rte_VehPwrMd_OperRampValue_Uls_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Init1.Rte_OperRampValue_Uls_f32.value);

  /* read implicit data */
  *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Init1.Rte_IgnTimeOff_Cnt_u32.value) = Rte_Ap_ThrmlDutyCycle_IgnTimeOff_Cnt_u32;
  *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Init1.Rte_VehTimeValid_Cnt_lgc.value) = Rte_Ap_ThrmlDutyCycle_VehTimeValid_Cnt_lgc;

  /* call runnable */
  Rte_Runnable_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Init1_Start();
  ThrmlDutyCycle_Init1();
  Rte_Runnable_Ap_ThrmlDutyCycle_ThrmlDutyCycle_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_AvgFricLrn_AvgFricLrn_Init1_Start();
  AvgFricLrn_Init1();
  Rte_Runnable_Ap_AvgFricLrn_AvgFricLrn_Init1_Return();

  /* write implicit data */
  Rte_Ap_AvgFricLrn_FricOffset_HwNm_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_AvgFricLrn_AvgFricLrn_Init1.Rte_FricOffset_HwNm_f32.value);

  /* call runnable */
  Rte_Runnable_Ap_ActivePull_ActivePull_Init1_Start();
  ActivePull_Init1();
  Rte_Runnable_Ap_ActivePull_ActivePull_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_SrlComOutput_SrlComOutput_Init1_Start();
  SrlComOutput_Init1();
  Rte_Runnable_Ap_SrlComOutput_SrlComOutput_Init1_Return();

  /* call runnable */
  Rte_Runnable_Ap_LrnEOT_LrnEOT_Init1_Start();
  LrnEOT_Init1();
  Rte_Runnable_Ap_LrnEOT_LrnEOT_Init1_Return();

  /* write implicit data */
  Rte_Ap_LrnEOT_CCWFound_Cnt_lgc = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Init1.Rte_CCWFound_Cnt_lgc.value);
  Rte_Ap_LrnEOT_CCWPosition_HwDeg_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Init1.Rte_CCWPosition_HwDeg_f32.value);
  Rte_Ap_LrnEOT_CWFound_Cnt_lgc = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Init1.Rte_CWFound_Cnt_lgc.value);
  Rte_Ap_LrnEOT_CWPosition_HwDeg_f32 = *(&Rte_Task_Init_9.Rte_RB.Rte_Ap_LrnEOT_LrnEOT_Init1.Rte_CWPosition_HwDeg_f32.value);

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_TransB_9
 * Priority: 13
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_TransB_9)
{
  Rte_Task_Dispatch(Task_TransB_9);

  /* call runnable */
  Rte_Runnable_Ap_StaMd9_StaMd9_Trns_DemShutdown_Start();
  StaMd9_Trns_DemShutdown();
  Rte_Runnable_Ap_StaMd9_StaMd9_Trns_DemShutdown_Return();

  (void)TerminateTask();
}

/**********************************************************************************************************************
 * Task:     Task_Trans_10
 * Priority: 12
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Trans_10)
{
  EventMaskType ev;

  Rte_Task_Dispatch(Task_Trans_10);

  for(;;)
  {
    Rte_Task_WaitEvent(Task_Trans_10, Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT | Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1 | Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2 | Rte_Ev_Run_DiagMgr_DiagMgr10_Trns | Rte_Ev_MS_Task_Trans_10);
    (void)WaitEvent(Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT | Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1 | Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2 | Rte_Ev_Run_DiagMgr_DiagMgr10_Trns | Rte_Ev_MS_Task_Trans_10);
    Rte_Task_WaitEventRet(Task_Trans_10, Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT | Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1 | Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2 | Rte_Ev_Run_DiagMgr_DiagMgr10_Trns | Rte_Ev_MS_Task_Trans_10);
    (void)GetEvent(Task_Trans_10, &ev);
    (void)ClearEvent(ev & (Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT | Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1 | Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2 | Rte_Ev_Run_DiagMgr_DiagMgr10_Trns | Rte_Ev_MS_Task_Trans_10));

    if ((ev & Rte_Ev_Run_DiagMgr_DiagMgr10_Trns) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_DiagMgr10_DiagMgr10_Trns_Start();
      DiagMgr10_Trns();
      Rte_Runnable_Ap_DiagMgr10_DiagMgr10_Trns_Return();
    }

    if ((ev & Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_ePWM2_ePWM2_Trns2_Start();
      ePWM2_Trns2();
      Rte_Runnable_Ap_ePWM2_ePWM2_Trns2_Return();
    }

    if (((ev & Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT) != (EventMaskType)0))
    {
      /* call runnable */
      Rte_Runnable_Ap_HwPwUp_HwPwUp_Trns1_Start();
      HwPwUp_Trns1();
      Rte_Runnable_Ap_HwPwUp_HwPwUp_Trns1_Return();

      /* write implicit data */
      Rte_Ap_HwPwUp_MtrDrvrInitStart_Cnt_lgc = *(&Rte_Task_Trans_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Trns1.Rte_MtrDrvrInitStart_Cnt_lgc.value);
      Rte_Ap_HwPwUp_PwrDiscATestStart_Cnt_lgc = *(&Rte_Task_Trans_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Trns1.Rte_PwrDiscATestStart_Cnt_lgc.value);
      Rte_Ap_HwPwUp_PwrDiscBTestStart_Cnt_lgc = *(&Rte_Task_Trans_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Trns1.Rte_PwrDiscBTestStart_Cnt_lgc.value);
      Rte_Ap_HwPwUp_TMFTestStart_Cnt_lgc = *(&Rte_Task_Trans_10.Rte_RB.Rte_Ap_HwPwUp_HwPwUp_Trns1.Rte_TMFTestStart_Cnt_lgc.value);
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Sa_TmprlMon_TmprlMon_Trns1_Start();
      TmprlMon_Trns1();
      Rte_Runnable_Sa_TmprlMon_TmprlMon_Trns1_Return();

      /* write implicit data */
      Rte_TmprlMon_TMFTestComplete_Cnt_lgc = *(&Rte_Task_Trans_10.Rte_RB.Rte_Sa_TmprlMon_TmprlMon_Trns1.Rte_TMFTestComplete_Cnt_lgc.value);

      /* call runnable */
      Rte_Runnable_Sa_MtrDrvDiag_MtrDrvDiag_Trns1_Start();
      MtrDrvDiag_Trns1();
      Rte_Runnable_Sa_MtrDrvDiag_MtrDrvDiag_Trns1_Return();

      /* write implicit data */
      Rte_MtrDrvDiag_MtrDrvrInitComplete_Cnt_lgc = *(&Rte_Task_Trans_10.Rte_RB.Rte_Sa_MtrDrvDiag_MtrDrvDiag_Trns1.Rte_MtrDrvrInitComplete_Cnt_lgc.value);
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Sa_TmprlMon_TmprlMon_Trns2_Start();
      TmprlMon_Trns2();
      Rte_Runnable_Sa_TmprlMon_TmprlMon_Trns2_Return();

      /* call runnable */
      Rte_Runnable_Ap_HwPwUp_HwPwUp_Trns2_Start();
      HwPwUp_Trns2();
      Rte_Runnable_Ap_HwPwUp_HwPwUp_Trns2_Return();
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_StaMd_StaMd_Trns1_Start();
      StaMd_Trns1();
      Rte_Runnable_Ap_StaMd_StaMd_Trns1_Return();
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_DigPhsReasDiag_DigPhsReasDiag_Trans1_Start();
      DigPhsReasDiag_Trans1();
      Rte_Runnable_Ap_DigPhsReasDiag_DigPhsReasDiag_Trans1_Return();

      /* call runnable */
      Rte_Runnable_Ap_ePWM2_ePWM2_Trns1_Start();
      ePWM2_Trns1();
      Rte_Runnable_Ap_ePWM2_ePWM2_Trns1_Return();
    }

    if (((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT) != (EventMaskType)0))
    {
      /* call runnable */
      Rte_Runnable_RteErrata10_RteErrata10_Trns_Start();
      RteErrata10_Trns();
      Rte_Runnable_RteErrata10_RteErrata10_Trns_Return();
    }

    if (((ev & Rte_Ev_Run_Ap_HwPwUp_HwPwUp_Trns1) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_WARMINIT) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_DISABLE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OPERATE) != (EventMaskType)0) || ((ev & Rte_Ev_Run_Ap_ePWM2_ePWM2_Trns2) != (EventMaskType)0) || ((ev & Rte_Ev_Run_DiagMgr_DiagMgr10_Trns) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_10_StaMd_SystemState_Mode_OFF) != (EventMaskType)0) || ((ev & Rte_Ev_MS_Task_Trans_10) != (EventMaskType)0))
    {
      Rte_ModeType_StaMd_Mode previousMode;
      Rte_ModeType_StaMd_Mode nextMode;

      Rte_Assert((Rte_ModeMachine_StaMd_SystemState_Mode == RTE_TRANSITION_StaMd_Mode), RTE_E_INTERNAL_TransitionState);

      DisableAllInterrupts();
      previousMode = Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[1];
      nextMode = Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[0];

      if (previousMode != nextMode)
      {
        Rte_DecDisableFlags_StaMd_SystemState_Mode(previousMode);
      }

      Rte_ModeMachine_StaMd_SystemState_Mode = Rte_ModeInfo_StaMd_SystemState_Mode.Rte_ModeQueue[0];

      EnableAllInterrupts();


    }
  }
}

/**********************************************************************************************************************
 * Task:     Task_Trans_8
 * Priority: 11
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Trans_8)
{
  EventMaskType ev;

  Rte_Task_Dispatch(Task_Trans_8);

  for(;;)
  {
    Rte_Task_WaitEvent(Task_Trans_8, Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns | Rte_Ev_Run_RteErrata8_RteErrata8_Trns | Rte_Ev_MS_Task_Trans_8);
    (void)WaitEvent(Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns | Rte_Ev_Run_RteErrata8_RteErrata8_Trns | Rte_Ev_MS_Task_Trans_8);
    Rte_Task_WaitEventRet(Task_Trans_8, Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns | Rte_Ev_Run_RteErrata8_RteErrata8_Trns | Rte_Ev_MS_Task_Trans_8);
    (void)GetEvent(Task_Trans_8, &ev);
    (void)ClearEvent(ev & (Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns | Rte_Ev_Run_RteErrata8_RteErrata8_Trns | Rte_Ev_MS_Task_Trans_8));

    if ((ev & Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_DiagMgr8_DiagMgr8_Trns_Start();
      DiagMgr8_Trns();
      Rte_Runnable_Ap_DiagMgr8_DiagMgr8_Trns_Return();
    }

    if ((ev & Rte_Ev_Run_RteErrata8_RteErrata8_Trns) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_RteErrata8_RteErrata8_Trns_Start();
      RteErrata8_Trns();
      Rte_Runnable_RteErrata8_RteErrata8_Trns_Return();
    }

    if (((ev & Rte_Ev_Run_Ap_DiagMgr8_DiagMgr8_Trns) != (EventMaskType)0) || ((ev & Rte_Ev_Run_RteErrata8_RteErrata8_Trns) != (EventMaskType)0) || ((ev & Rte_Ev_MS_Task_Trans_8) != (EventMaskType)0))
    {
      Rte_ModeType_StaMd_Mode previousMode;
      Rte_ModeType_StaMd_Mode nextMode;

      Rte_Assert((Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode == RTE_TRANSITION_StaMd_Mode), RTE_E_INTERNAL_TransitionState);

      DisableAllInterrupts();
      previousMode = Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[1];
      nextMode = Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[0];

      if (previousMode != nextMode)
      {
        Rte_DecDisableFlags_Ap_StaMd8_SystemState8_Mode(previousMode);
      }

      Rte_ModeMachine_Ap_StaMd8_SystemState8_Mode = Rte_ModeInfo_Ap_StaMd8_SystemState8_Mode.Rte_ModeQueue[0];

      EnableAllInterrupts();


    }
  }
}

/**********************************************************************************************************************
 * Task:     Task_Trans_9
 * Priority: 10
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Trans_9)
{
  EventMaskType ev;

  Rte_Task_Dispatch(Task_Trans_9);

  for(;;)
  {
    Rte_Task_WaitEvent(Task_Trans_9, Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT | Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_MS_Task_Trans_9);
    (void)WaitEvent(Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT | Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_MS_Task_Trans_9);
    Rte_Task_WaitEventRet(Task_Trans_9, Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT | Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_MS_Task_Trans_9);
    (void)GetEvent(Task_Trans_9, &ev);
    (void)ClearEvent(ev & (Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE | Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT | Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF | Rte_Ev_MS_Task_Trans_9));

    if ((ev & Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_DiagMgr9_DiagMgr9_Trns_Start();
      DiagMgr9_Trns();
      Rte_Runnable_Ap_DiagMgr9_DiagMgr9_Trns_Return();

      /* call runnable */
      Rte_Runnable_Ap_DiagMgr9_DiagMgr_Trns1_Start();
      DiagMgr_Trns1();
      Rte_Runnable_Ap_DiagMgr9_DiagMgr_Trns1_Return();
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Sa_BkCpPc_BkCpPc_Trns2_Start();
      BkCpPc_Trns2();
      Rte_Runnable_Sa_BkCpPc_BkCpPc_Trns2_Return();

      /* write implicit data */
      Rte_Sa_BkCpPc_PwrDiscATestComplete_Cnt_lgc = *(&Rte_Task_Trans_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Trns2.Rte_PwrDiscATestComplete_Cnt_lgc.value);
      Rte_Sa_BkCpPc_PwrDiscBTestComplete_Cnt_lgc = *(&Rte_Task_Trans_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Trns2.Rte_PwrDiscBTestComplete_Cnt_lgc.value);
      Rte_Sa_BkCpPc_PwrDiscClosed_Cnt_lgc = *(&Rte_Task_Trans_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Trns2.Rte_PwrDiscClosed_Cnt_lgc.value);
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Sa_BkCpPc_BkCpPc_Trns1_Start();
      BkCpPc_Trns1();
      Rte_Runnable_Sa_BkCpPc_BkCpPc_Trns1_Return();

      /* write implicit data */
      Rte_Sa_BkCpPc_PwrDiscATestComplete_Cnt_lgc = *(&Rte_Task_Trans_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Trns1.Rte_PwrDiscATestComplete_Cnt_lgc.value);
      Rte_Sa_BkCpPc_PwrDiscBTestComplete_Cnt_lgc = *(&Rte_Task_Trans_9.Rte_RB.Rte_Sa_BkCpPc_BkCpPc_Trns1.Rte_PwrDiscBTestComplete_Cnt_lgc.value);
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_ActivePull_ActivePull_Trns1_Start();
      ActivePull_Trns1();
      Rte_Runnable_Ap_ActivePull_ActivePull_Trns1_Return();
    }

    if ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF) != (EventMaskType)0)
    {
      /* call runnable */
      Rte_Runnable_Ap_AvgFricLrn_AvgFricLrn_Trns1_Start();
      AvgFricLrn_Trns1();
      Rte_Runnable_Ap_AvgFricLrn_AvgFricLrn_Trns1_Return();
    }

    if (((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT) != (EventMaskType)0))
    {
      /* call runnable */
      Rte_Runnable_RteErrata9_RteErrata9_Trns_Start();
      RteErrata9_Trns();
      Rte_Runnable_RteErrata9_RteErrata9_Trns_Return();
    }

    if (((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OPERATE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF) != (EventMaskType)0) || ((ev & Rte_Ev_OnExit_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_OFF) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_DISABLE) != (EventMaskType)0) || ((ev & Rte_Ev_OnEntry_Task_Trans_9_Ap_StaMd9_SystemState9_Mode_WARMINIT) != (EventMaskType)0) || ((ev & Rte_Ev_MS_Task_Trans_9) != (EventMaskType)0))
    {
      Rte_ModeType_StaMd_Mode previousMode;
      Rte_ModeType_StaMd_Mode nextMode;

      Rte_Assert((Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode == RTE_TRANSITION_StaMd_Mode), RTE_E_INTERNAL_TransitionState);

      DisableAllInterrupts();
      previousMode = Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[1];
      nextMode = Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[0];

      if (previousMode != nextMode)
      {
        Rte_DecDisableFlags_Ap_StaMd9_SystemState9_Mode(previousMode);
      }

      Rte_ModeMachine_Ap_StaMd9_SystemState9_Mode = Rte_ModeInfo_Ap_StaMd9_SystemState9_Mode.Rte_ModeQueue[0];

      EnableAllInterrupts();


    }
  }
}

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
# ifdef RTE_MAGIC_NUMBER
#  if RTE_MAGIC_NUMBER != 1468867288
#   error "The magic number of the generated file <C:/Sankar/Chrysler/Synergy/CL/Temp_work/Chrysler_LWR_EPS_TMS570/SwProject/Source/GenDataRte/Rte.c> is different. Please check time and date of the generated RTE files!"
#  endif
# else
#  define RTE_MAGIC_NUMBER 1468867288
# endif  /* RTE_MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */
