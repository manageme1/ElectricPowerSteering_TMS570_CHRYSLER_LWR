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
 *          File:  Rte_MemMap.h
 *     Workspace:  C:/_Synergy_Projects/Working/PwrLmtFuncCr-nz63rn/PwrLmtFuncCr/autosar
 *     SW-C Type:  Ap_PwrLmtFuncCr
 *  Generated at:  Thu Sep  5 08:54:48 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 MyCompany  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  RTE Memory Mapping header file
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * RTE specific defines
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_CODE
 *********************************************************************************************************************/

/* open sections */
#ifdef RTE_START_SEC_CODE
# undef RTE_START_SEC_CODE
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_CONST_UNSPECIFIED
# undef RTE_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_CODE
# undef RTE_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_CONST_UNSPECIFIED
# undef RTE_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * SW-C specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_AP_PWRLMTFUNCCR_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# undef RTE_START_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_AP_PWRLMTFUNCCR_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# undef RTE_STOP_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
# ifdef RTE_MAGIC_NUMBER
#  if RTE_MAGIC_NUMBER != 1378379875
#   error "The magic number of the generated file <C:/_Synergy_Projects/Working/PwrLmtFuncCr-nz63rn/PwrLmtFuncCr/utp/contract/Ap_PwrLmtFuncCr/Rte_MemMap.h> is different. Please check time and date of the generated RTE files!"
#  endif
# else
#  define RTE_MAGIC_NUMBER 1378379875
# endif  /* RTE_MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */
