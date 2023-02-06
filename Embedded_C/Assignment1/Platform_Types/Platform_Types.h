/*
 * Platform_Types.h
 *
 *  Created on: Feb 6, 2023
 *      Author: User
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdint.h>
#include <stdbool.h>


/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define LOGIC_HIGH        (1u)
#define LOGIC_LOW         (0u)

#define NULL_PTR    ((void*)0)



typedef unsigned char         uint8;
typedef signed char           sint8;
typedef unsigned short        uint16;
typedef signed short          sint16;
typedef unsigned long         uint32;
typedef signed long           sint32;
typedef unsigned long long    uint64;
typedef signed long long      sint64;
typedef float                 float32;
typedef double                float64;


typedef volatile sint8   vint8;
typedef volatile uint8   vuint8;


typedef volatile sint16   vint16;
typedef volatile uint16   vuint16;

typedef volatile sint32   vint32;
typedef volatile uint32   vuint32;

typedef volatile sint64   vint64;
typedef volatile uint64   vuint64;


#endif /* PLATFORM_TYPES_H_ */
