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

/* Type conversion functions for sized integers */
static inline int8_t int8(int x) { return (int8_t)x; }
static inline uint8_t uint8(int x) { return (uint8_t)x; }
static inline int16_t int16(int x) { return (int16_t)x; }
static inline uint16_t uint16(int x) { return (uint16_t)x; }
static inline int32_t int32(int x) { return (int32_t)x; }
static inline uint32_t uint32(int x) { return (uint32_t)x; }
static inline int64_t int64(int x) { return (int64_t)x; }
static inline uint64_t uint64(int x) { return (uint64_t)x; }

#endif

