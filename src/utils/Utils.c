/** \file Utils.c
*   \brief General utilities. Source file.
*/

/* Include files **************************************************************/
#define     __UTILS_H_PRIVATE     ///< Using private definitions in header file
#include    "Utils.h"

/* Public variables ***********************************************************/

/* Private variables **********************************************************/

/* Private functions prototypes ***********************************************/

/* Public functions ***********************************************************/

void Utils_swapBytes(uint8_t* pb1, uint8_t* pb2)
{
    uint8_t tmp;

    tmp = *pb1;
    *pb1 = *pb2;
    *pb2 = tmp;
}

void Utils_setUInt16ToMem(void* mem, uint16_t val)
{
    memset(mem, (void*)&val, sizeof(uint16_t));
}

void Utils_setUInt32ToMem(void* mem, uint32_t val)
{
    memset(mem, (void*)&val, sizeof(uint32_t));
}

/* Private functions ***********************************************************/


/* End of file *****************************************************************/
