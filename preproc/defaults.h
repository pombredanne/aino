/*
 *   preproc/defaults.h
 *   Default values for the parameters which need to be in sync across
 *   the files.
 *   
 *   Copyright (C) 2005-2008 Ville H. Tuulos
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __DEFAULTS_H__
#define __DEFAULTS_H__

/* tune blooms to yield at most one false hit in 10^6 queries */
#define BLOOM_FALSE_HIT_RATE 6
/* size of the actual bloom w.r.t the optimal. */
#define BLOOM_SCALER 1.0
/* do not make a bloom for ixemes having less than 8 occurrences */
#define BLOOM_MIN_OCCURRENCES 8

#endif /* __DEFAULTS_H__ */
