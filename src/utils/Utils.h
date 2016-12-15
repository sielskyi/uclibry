/** \file Utils.h
*   \brief   General utilities. Header file.
*
*   \author     sielskyi (SLL)
*   \date       2016/12/15
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

#include "uclibry.h"			///< uCLibry main header file.

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

/** \fn void Utils_swapBytes(uint8_t* pb1, uint8_t* pb2)
	Swap two bytes through the pointers.
    Public function.
    \param  pb1     - pointer to the first byte.
    \param  pb2     - pointer to the second byte.
    \return void.
*/
void Utils_swapBytes(uint8_t* pb1, uint8_t* pb2);

/** \fn void Utils_setUInt16ToMem(void* mem, uint16_t val)
	Set UInt16 value to memory.
    Public function.
    \param  mem     - pointer to destination memory.
    \param  val     - UInt16 value to set.
    \return void.
*/
void Utils_setUInt16ToMem(void* mem, uint16_t val);

/** \fn void Utils_setUInt32ToMem(void* mem, uint32_t val)
	Set UInt32 value to memory.
    Public function.
    \param  mem     - pointer to destination memory.
    \param  val     - UInt32 value to set.
    \return void.
*/
void Utils_setUInt32ToMem(void* mem, uint32_t val);

/******************************************************************************/
#endif  // __UCLIBRY_UTILS_H
/* End of file ****************************************************************/
