/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_PwrLmtFuncCr.h
 *     Workspace:  C:/_Synergy_Projects/Working/PwrLmtFuncCr-nz63rn/PwrLmtFuncCr/autosar
 *     SW-C Type:  Ap_PwrLmtFuncCr
 *  Generated at:  Thu Sep  5 08:54:47 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 MyCompany  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_PwrLmtFuncCr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_PWRLMTFUNCCR_H
# define _RTE_AP_PWRLMTFUNCCR_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_PwrLmtFuncCr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AltFaultActive_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_CntDisMtrTrqCmdMRF_MtrNm_f32 ((Float)0)
# define Rte_InitValue_EstKe_VpRadpS_f32 ((Float)0)
# define Rte_InitValue_FltTrqLmt_Uls_f32 ((Float)0)
# define Rte_InitValue_MRFMtrTrqCmd_MtrNm_f32 ((Float)0)
# define Rte_InitValue_MotorVelMRF_MtrRadpS_f32 ((Float)0)
# define Rte_InitValue_PosServEnable_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_ThresholdExceeded_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_Vecu_Volt_f32 ((Float)5)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_PwrLmtFuncCr_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_PwrLmtFuncCr_NxtrDiagMgr_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, P2VAR(UInt8, AUTOMATIC, RTE_AP_PWRLMTFUNCCR_APPL_VAR) Status_Ptr_T_u08);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_PwrLmtFuncCr_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_PwrLmtFuncCr_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_PWRLMTFUNCCR_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_PwrLmtFuncCr_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_PWRLMTFUNCCR_APPL_VAR) CurrentTime);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_PwrLmtFuncCr_Per1_AltFaultActive_Cnt_lgc() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_AltFaultActive_Cnt_lgc->value)

# define Rte_IRead_PwrLmtFuncCr_Per1_CntDisMtrTrqCmdMRF_MtrNm_f32() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_CntDisMtrTrqCmdMRF_MtrNm_f32->value)

# define Rte_IRead_PwrLmtFuncCr_Per1_EstKe_VpRadpS_f32() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_EstKe_VpRadpS_f32->value)

# define Rte_IRead_PwrLmtFuncCr_Per1_MotorVelMRF_MtrRadpS_f32() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_MotorVelMRF_MtrRadpS_f32->value)

# define Rte_IRead_PwrLmtFuncCr_Per1_PosServEnable_Cnt_lgc() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_PosServEnable_Cnt_lgc->value)

# define Rte_IRead_PwrLmtFuncCr_Per1_Vecu_Volt_f32() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_Vecu_Volt_f32->value)

# define Rte_IWrite_PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32() \
  (&Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32->value)

# define Rte_IRead_PwrLmtFuncCr_Per2_CntDisMtrTrqCmdMRF_MtrNm_f32() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per2_CntDisMtrTrqCmdMRF_MtrNm_f32->value)

# define Rte_IRead_PwrLmtFuncCr_Per2_Vecu_Volt_f32() \
  (Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per2_Vecu_Volt_f32->value)

# define Rte_IWrite_PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32(data) \
  ( \
  Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32->value = (data) \
  )

# define Rte_IWriteRef_PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32() \
  (&Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32->value)

# define Rte_IWrite_PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc() \
  (&Rte_Inst_Ap_PwrLmtFuncCr->PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_PwrLmtFuncCr_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_NxtrDiagMgr_GetNTCStatus Rte_Call_Ap_PwrLmtFuncCr_NxtrDiagMgr_GetNTCStatus
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Ap_PwrLmtFuncCr_NxtrDiagMgr_SetNTCStatus
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_PwrLmtFuncCr_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_PwrLmtFuncCr_SystemTime_GetSystemTime_mS_u32




# define RTE_START_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLmtFuncCr_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PWRLMTFUNCCR_APPL_CODE) PwrLmtFuncCr_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLmtFuncCr_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *     and not in Mode(s) <OFF, DISABLE, WARMINIT>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Boolean Rte_IRead_PwrLmtFuncCr_Per1_AltFaultActive_Cnt_lgc(void)
 *   Float Rte_IRead_PwrLmtFuncCr_Per1_CntDisMtrTrqCmdMRF_MtrNm_f32(void)
 *   Float Rte_IRead_PwrLmtFuncCr_Per1_EstKe_VpRadpS_f32(void)
 *   Float Rte_IRead_PwrLmtFuncCr_Per1_MotorVelMRF_MtrRadpS_f32(void)
 *   Boolean Rte_IRead_PwrLmtFuncCr_Per1_PosServEnable_Cnt_lgc(void)
 *   Float Rte_IRead_PwrLmtFuncCr_Per1_Vecu_Volt_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32(void)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PWRLMTFUNCCR_APPL_CODE) PwrLmtFuncCr_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLmtFuncCr_Per2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *     and not in Mode(s) <WARMINIT, DISABLE, OFF>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Float Rte_IRead_PwrLmtFuncCr_Per2_CntDisMtrTrqCmdMRF_MtrNm_f32(void)
 *   Float Rte_IRead_PwrLmtFuncCr_Per2_Vecu_Volt_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32(Float data)
 *   Float *Rte_IWriteRef_PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32(void)
 *   void Rte_IWrite_PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc(void)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 *Status_Ptr_T_u08)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PWRLMTFUNCCR_APPL_CODE) PwrLmtFuncCr_Per2(void);

# define RTE_STOP_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1u)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1378379875
#    error "The magic number of the generated file <C:/_Synergy_Projects/Working/PwrLmtFuncCr-nz63rn/PwrLmtFuncCr/utp/contract/Ap_PwrLmtFuncCr/Rte_Ap_PwrLmtFuncCr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1378379875
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_PWRLMTFUNCCR_H */
