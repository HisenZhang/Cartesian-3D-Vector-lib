/**
 * Copyright (C) 2018 hisenzhang
 * 
 * This file is part of Cartesian 3D Vector lib.
 * 
 * Cartesian 3D Vector lib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Cartesian 3D Vector lib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Cartesian 3D Vector lib.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _VECTOR_H
#define _VECTOR_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// define vector type
typedef struct Vector{
    double x;
    double y;
    double z;
    double mag;
}vector;

// initialize vector

vector vecInit();
vector vecSet(double x, double y, double z);

// basic vector operation

double vecMod(vector V);
vector vecUnit(vector V);
vector vecNeg(vector V);

// vector addition / subtraction

vector vecAdd(vector A, vector B);
vector vecSub(vector A, vector B);

// vector product

double vecDot(vector A, vector B);
vector vecCrx(vector A, vector B);
vector vecScl(vector A, double s);

// prettyprint vector

int vecPrint(vector V);
int vecnPrint(vector V, int p);

#endif