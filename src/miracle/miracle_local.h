/*
 * miracle_local.h -- Local Miracle Parser
 * Copyright (C) 2002-2003 Ushodaya Enterprises Limited
 * Author: Charles Yates <charles.yates@pandora.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _MIRACLE_LOCAL_H_
#define _MIRACLE_LOCAL_H_

/* Application header files */
#include <valerie/valerie_parser.h>

#ifdef __cplusplus
extern "C"
{
#endif

/** Local parser API.
*/

extern valerie_parser miracle_parser_init_local( );

#ifdef __cplusplus
}
#endif

#endif
