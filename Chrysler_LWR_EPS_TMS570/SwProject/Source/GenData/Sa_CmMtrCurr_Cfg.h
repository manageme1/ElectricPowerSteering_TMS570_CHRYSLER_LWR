
/*****************************************************************************
* Copyright 2010 MyCompany Automotive, All Rights Reserved.
* MyCompany Confidential
*
* Module File Name  : Sa_CmMtrCurr_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 11.10.2013 13:09:22
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          2 %
 * %date_modified:    Fri Oct 11 16:23:28 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 09/20/12   1       ssk       Initial template creation
 * 	 	
 */

#ifndef SA_CMMTRCURR_CFG_H
#define SA_CMMTRCURR_CFG_H


/*******************************************************************************
**                      Define Section                                       **
*******************************************************************************/


/* Disable all checkpoints that are not enabled */
#define Rte_Call_CmMtrCurr_Per1_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CmMtrCurr_Per1_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CmMtrCurr_Per2_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CmMtrCurr_Per2_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CmMtrCurr_Per3_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_CmMtrCurr_Per3_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 


#define MTRCURRPHASEBC   /*configuration between phase A, PhaseB, PhaseC */
#endif /* CMMTRCURR_CFG_H */

/*** End of file **************************************************************/
