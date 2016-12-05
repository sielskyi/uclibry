/** \file utils.c
*   \brief General utilities. Source file.
*/

/* Include files **************************************************************/
#define     __UCLIBRY_UTILS_H_PRIVATE     ///< Using private definitions
#include    "utils.h"

/* Private functions prototypes ***********************************************/

/* Public variables ***********************************************************/

/* Private variables **********************************************************/

/* Public functions ***********************************************************/

/** \fn void Utils_SwapBytes(uint8_t* pb1, uint8_t* pb2)
	Swap two bytes through the pointers.
    Public function.
    \param  pb1     - pointer to the first byte.
    \param  pb2     - pointer to the second byte.
    \return void.
*/
void Utils_SwapBytes(uint8_t* pb1, uint8_t* pb2){
    uint8_t tmp;

	tmp = *pb1;
	*pb1 = *pb2;
	*pb2 = tmp;
}

/** \fn void Utils_SetUInt16ToMem(void* mem, uint16_t val)
	Set UInt16 value to memory.
    Public function.
    \param  mem     - pointer to destination memory.
    \param  val     - UInt16 value to set.
    \return void.
*/
void Utils_SetUInt16ToMem(void* mem, uint16_t val){
    memset(mem, (void*)&val, sizeof(uint16_t));
}

/** \fn void Utils_SetUInt32ToMem(void* mem, uint32_t val)
	Set UInt32 value to memory.
    Public function.
    \param  mem     - pointer to destination memory.
    \param  val     - UInt32 value to set.
    \return void.
*/
void Utils_SetUInt32ToMem(void* mem, uint32_t val){
    memset(mem, (void*)&val, sizeof(uint32_t));
}

/* Private functions ***********************************************************/


/* End of file *****************************************************************/