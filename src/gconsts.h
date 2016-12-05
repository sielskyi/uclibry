/** \file gconsts.h
*	\brief General constants definitions.
*
*	\author		sielskyi (SLL)
*	\date		2016/11/20
*	\version	01.01
*
*	\section	sect1	Descriptions
*	\section	sect99	 Version log
*	- 01.01: Initial version.
*/
#ifndef __UCLIBRY_GCONST_H
#define __UCLIBRY_GCONST_H
/******************************************************************************/
#define DAYS_IN_YEAR			365UL		///< Days in a year
#define DAYS_IN_YEAR_LEAP		366UL		///< Days in a leap year
#define MONS_IN_YEAR			12UL		///< Months in a year
#define DAYS_IN_MON_31			31UL		///< 31 days in a month
#define DAYS_IN_MON_30			30UL		///< 30 days in a month
#define DAYS_IN_MON_28			28UL		///< 28 days in a month
#define DAYS_IN_MON_29			29UL		///< 29 days in a month
#define HOURS_IN_DAY			24UL		///< Hours in a day
#define MINS_IN_HOUR			60UL		///< Minuts in a hour
#define SECS_IN_MIN				60UL		///< Seconds in a minute
#define MSECS_IN_SEC			1000UL		///< MiliSeconds in a second
#define MCSECS_IN_SEC			1000000UL	///< MicroSeconds in a Second
#define NSECS_IN_SEC			1000000000UL	///< NanoSeconds in a Second
#define PSECS_IN_SEC			1000000000000UL	///< PicoSeconds in a Second
#define MCSECS_IN_MSEC			1000UL		///< MicroSeconds in a MiliSecond
#define NSECS_IN_MSEC			1000000UL	///< NanoSeconds in a MiliSecond
#define PSECS_IN_MSEC			1000000000UL	///< PicoSeconds in a MiliSecond
#define NSECS_IN_MCSEC			1000UL		///< NanoSeconds in a MicroSecond
#define PSECS_IN_MCSEC			1000000UL	///< PicoSeconds in a MicroSecond
#define PSECS_IN_NSEC			1000UL		///< PicoSeconds in a NanoSecond

#define PERCENTS				100UL		///< Percents

#define BITS_IN_BYTE			8UL			///< Bits in Byte
#define BYTES_IN_KBYTE			1024UL		///< Bytes in KiloByte
#define BYTES_IN_MBYTE			1048576UL	///< Bytes in MegaByte
#define KBYTES_IN_MBYTE			1024UL		///< KiloBytes in MegaByte
#define BYTES_IN_GBYTE			1073741824UL///< Bytes in GigaByte
#define KBYTES_IN_GBYTE			1048576UL	///< KiloBytes in GigaByte
#define MBYTES_IN_GBYTE			1024UL		///< MegaByte in GigaByte

#define BYTE_COUNT_MAX			0x100U		///< Maximum counts in a Byte
#define BYTE_VALUE_MAX			0xFFU		///< Maximum Byte value
#define BYTE_VALUE_MIN			0x00U		///< Minimum Byte value
#define BYTE_BITS_NUM			8U			///< Bits in Byte		
#define BYTE_BYTES_NUM			1U			///< Bytes in Byte

#define UINT8_COUNT_MAX			0x100U		///< Maximum counts in a UInt8
#define UINT8_VALUE_MAX			0xFFU		///< Maximum UInt8 value
#define UINT8_VALUE_MIN			0x00U		///< Minimum UInt8 value
#define UINT8_BITS_NUM			8U			///< Bits in UInt8
#define UINT8_BYTES_NUM			1U			///< Bytes in UInt8

#define INT8_COUNT_MAX		   	0x100U		///< Maximum counts in a Int8
#define INT8_VALUE_MAX		   	127			///< Maximum Int8 value
#define INT8_VALUE_MIN		   	-128			///< Minimum Int8 value
#define INT8_BITS_NUM		   	8U			///< Bits in Int8
#define INT8_BYTES_NUM		   	1U			///< Bytes in Int8

#define UINT16_COUNT_MAX		0x10000UL	///< Maximum counts in a UInt16
#define UINT16_VALUE_MAX		0xFFFFUL	///< Maximum UInt16 value
#define UINT16_VALUE_MIN		0x0000UL	///< Minimum UInt16 value
#define UINT16_BITS_NUM			16U			///< Bits in UInt16
#define UINT16_BYTES_NUM		2U			///< Bytes in UInt16

#define INT16_COUNT_MAX			0x10000UL	///< Maximum counts in a Int16
#define INT16_VALUE_MAX			37767		///< Maximum Int16 value
#define INT16_VALUE_MIN			-32768		///< Minimum Int16 value
#define INT16_BITS_NUM			16U			///< Bits in Int16
#define INT16_BYTES_NUM			2U			///< Bytes in Int16

#define UINT32_COUNT_MAX		0x100000000UL	///< Maximum counts in a UInt32
#define UINT32_VALUE_MAX		0xFFFFFFFFUL	///< Maximum UInt32 value
#define UINT32_VALUE_MIN		0x00000000UL	///< Minimum UInt32 value
#define UINT32_BITS_NUM			32U				///< Bits in UInt32
#define UINT32_BYTES_NUM		4U				///< Bytes in UInt32

#define INT32_COUNT_MAX			0x100000000UL	///< Maximum counts in a Int32
#define INT32_VALUE_MAX			2147483647		///< Maximum Int32 value
#define INT32_VALUE_MIN			-2147483648		///< Minimum Int32 value
#define INT32_BITS_NUM			32U				///< Bits in Int32
#define INT32_BYTES_NUM			4U				///< Bytes in Int32

#define UINT64_COUNT_MAX		0x10000000000000000UL	///< Maximum counts in a UInt64
#define UINT64_VALUE_MAX		0xFFFFFFFFFFFFFFFFUL	///< Maximum UInt64 value
#define UINT64_VALUE_MIN		0x0000000000000000UL	///< Minimum UInt64 value
#define UINT64_BITS_NUM			64U						///< Bits in UInt64
#define UINT64_BYTES_NUM		8U						///< Bytes in UInt64

#define INT64_COUNT_MAX			0x10000000000000000UL	///< Maximum counts in a Int64
#define INT64_VALUE_MAX			9223372036854775807		///< Maximum Int64 value
#define INT64_VALUE_MIN			-9223372036854775808	///< Minimum Int64 value
#define INT64_BITS_NUM			64U						///< Bits in Int64
#define INT64_BYTES_NUM			8U						///< Bytes in Int64

/******************************************************************************/
#endif	// __UCLIBRY_GCONST_H
