/*
 * STD_TYPES.h
 *
 *  Created on: Oct 6, 2023
 *      Author: ENG.Mohamed
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#define False      0
#define True       1

/* Definition of standard types */

typedef unsigned char             uint8_t;
typedef signed char               sint8_t;

typedef unsigned short            uint16_t;
typedef signed short              sint16_t;

typedef unsigned int              uint32_t;
typedef signed int                sint32_t;

typedef unsigned long long        uint64_t;
typedef signed long long          sint64_t;

/* Definition of volatile standard types */

typedef volatile unsigned char             vuint8_t;
typedef volatile signed char               vint8_t;

typedef volatile unsigned short            vuint16_t;
typedef volatile signed short              vint16_t;

typedef volatile unsigned int              vuint32_t;
typedef volatile signed int                vint32_t;

typedef volatile unsigned long long        vuint64_t;
typedef volatile signed long long          vint64_t;



#endif /* STD_TYPES_H_ */
