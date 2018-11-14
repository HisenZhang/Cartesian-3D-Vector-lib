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

#include "vector.h"

// initialize vector

vector vecInit()
{
    vector result;
    result.x = 0.0;
    result.y = 0.0;
    result.z = 0.0;

    result.mag = 0.0;

    return result;
}


vector vecSet(double x, double y, double z)
{
    vector result;
    result.x = x;
    result.y = y;
    result.z = z;

    result.mag = vecMod(result);

    return result;
}


// basic vector operation

double vecMod(vector V)
{
    return sqrt(pow(V.x,2) + pow(V.y,2) + pow(V.z,2));
}


vector vecUnit(vector V)
{
    vector result;
    result.x = V.x / V.mag;
    result.y = V.y / V.mag;
    result.z = V.z / V.mag;

    result.mag = 1.0;

    return result;
}


vector vecNeg(vector V)
{
    vector result;
    result.x = - V.x;
    result.y = - V.y;
    result.z = - V.z;

    result.mag = V.mag;
    
    return result;
}


// vector addition / subtraction

vector vecAdd(vector A, vector B)
{
    vector result;
    result.x = A.x + B.x;
    result.y = A.y + B.y;
    result.z = A.z + B.z;
    
    result.mag = vecMod(result);

    return result;
}


vector vecSub(vector A, vector B)
{
    vector result;
    result.x = A.x - B.x;
    result.y = A.y - B.y;
    result.z = A.z - B.z;
    
    result.mag = vecMod(result);

    return result;
}


// vector product

double vecDot(vector A, vector B)
{
    return A.x * B.x + A.y * B.y + A.z * B.z;
}


vector vecCrx(vector A, vector B)
{
    vector result;
    result.x = A.y * B.z - A.z * B.y;
    result.y = - A.x * B.z - A.z * B.x;
    result.z = A.x * B.y - A.y * B.x;

    result.mag = vecMod(result);

    return result;
}


vector vecScl(vector A, double S)
{
    vector result;
    result.x *= S;
    result.y *= S;
    result.z *= S;
    
    result.mag = vecMod(result);

    return result;
}


// prettyprint vector

int vecPrint(vector V)
{
    printf("<% .2f,% .2f,% .2f> |% .2f|\n", V.x, V.y, V.z, V.mag);
    
    return 0;
}
