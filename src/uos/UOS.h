/** \file UOS.h
*   \brief   uClibry Opirating system. Header file.
*
*   \author     sielskyi (SLL)
*   \date       2016/12/15
*   \version    01.01
*
*   \section    sect1   Descriptions
*   \section    sect99   Version log
*   - 01.01: First release.
*/
#ifndef __UCLIBRY_UOS_H
#define __UCLIBRY_UOS_H

#ifdef	__cplusplus
extern "C" {
#endif
/******************************************************************************/

/* Include files **************************************************************/

#include "uclibry.h"			///< uCLibry main header file.

/* Constants ******************************************************************/
  
/* Porting ********************************************************************/

/* Types **********************************************************************/

/* Functionality **************************************************************/

/* Public Variables ***********************************************************/


/* Public Functions ***********************************************************/

/*

UOS_init();
UOS_task();
UOS_start();
UOS_stop();
UOS_suspend();
UOS_resume();

UOS_Process_create(name, ptask, pdsc, priority);
UOS_Process_init(pdsc);
UOS_Process_task(pdsc);
UOS_Process_start(pdsc);
UOS_Process_stop(pdsc);
UOS_Process_suspend(pdsc);
UOS_Process_resume(pdsc);
UOS_Process_setPriority(pdsc, priority);
UOS_Process_getPriority(pdsc);

UOS_Timer_create(tdsc);

*/
/******************************************************************************/
#ifdef	__cplusplus
}
#endif

#endif  // __UCLIBRY_UOS_H
/* End of file ****************************************************************/
