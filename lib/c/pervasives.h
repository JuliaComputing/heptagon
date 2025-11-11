/***********************************************************************/
/*                                                                     */
/*                             Heptagon                                */
/*                                                                     */
/* Gwenael Delaval, LIG/INRIA, UJF                                     */
/* Leonard Gerard, Parkas, ENS                                         */
/* Adrien Guatto, Parkas, ENS                                          */
/* Cedric Pasteur, Parkas, ENS                                         */
/* Marc Pouzet, Parkas, ENS                                            */
/*                                                                     */
/* Copyright 2012 ENS, INRIA, UJF                                      */
/*                                                                     */
/* This file is part of the Heptagon compiler.                         */
/*                                                                     */
/* Heptagon is free software: you can redistribute it and/or modify it */
/* under the terms of the GNU General Public License as published by   */
/* the Free Software Foundation, either version 3 of the License, or   */
/* (at your option) any later version.                                 */
/*                                                                     */
/* Heptagon is distributed in the hope that it will be useful,         */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of      */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       */
/* GNU General Public License for more details.                        */
/*                                                                     */
/* You should have received a copy of the GNU General Public License   */
/* along with Heptagon.  If not, see <http://www.gnu.org/licenses/>    */
/*                                                                     */
/***********************************************************************/

/* Pervasives module for the Heptagon compiler */

#ifndef DECADES_PERVASIVES_H
#define DECADES_PERVASIVES_H

#include <stdint.h>

typedef float real;

/* between(i, n) returns idx between 0 and n-1. */
static inline int between(int idx, int n)
{
  int o = (idx >= n) ? n-1 : (idx < 0 ? 0 : idx);
  return o;
}

/* Type conversion macros for all numeric types */
/* These use C's implicit conversion and casting rules to work with any numeric type */
#define int8(x) ((int8_t)(x))
#define uint8(x) ((uint8_t)(x))
#define int16(x) ((int16_t)(x))
#define uint16(x) ((uint16_t)(x))
#define int32(x) ((int32_t)(x))
#define uint32(x) ((uint32_t)(x))
#define int64(x) ((int64_t)(x))
#define uint64(x) ((uint64_t)(x))
#define float(x) ((float)(x))
#define double(x) ((double)(x))

#endif

