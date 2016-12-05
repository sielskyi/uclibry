/** \file utils.h
*   \brief   General utilities. Header file.
*
*   \author     sielskyi (SLL)
*   \date       2016/11/21
*   \version    01.01
*
*   \section    sect1   Descriptions
*   \section    sect99   Version log
*   - 01.01: First release.
*/
#ifndef __UCLIBRY_UTILS_H
#define __UCLIBRY_UTILS_H
/******************************************************************************/

/* Include files **************************************************************/

#include "clibry.h"			///< CLibry main header file.

/* Constants ******************************************************************/
  
/* Porting ********************************************************************/

/* Types **********************************************************************/

/* Functionality **************************************************************/

/** \macro Bitfield get
	\param	reg 	- source registr.
	\param	mask 	- mask of bitfield.
	\param	pos  	- position of bitfield.
*/
#define BITFIELD_VAL_GET(reg, vmask, pos)    ((reg >> pos) & vmask)

/** \macro Bitfield set
	\param	reg 	- source registr.
	\param	mask 	- mask of bitfield.
	\param	pos  	- position of bitfield.
	\param  val  	- value to set.
*/
#define BITFIELD_VAL_SET(reg, mask, pos, val)    \
    do{ reg &= ~mask; reg |= ((val << pos) & mask); } while(0)
		

/* Public Variables ***********************************************************/


/* Public Functions ***********************************************************/

void Utils_SwapBytes(uint8_t* pb1, uint8_t* pb2);
void Utils_SetUInt16ToMem(void* mem, uint16_t val);
void Utils_SetUInt32ToMem(void* mem, uint32_t val);

/******************************************************************************/
#endif  // __UCLIBRY_UTILS_H



