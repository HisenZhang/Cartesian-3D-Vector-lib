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

#include "include/vector.h"

int main(int argc, char const *argv[])
{
    // Initialize vectors

    vector A = vecSet(1.0, 2.0, 0.0); 
    vector B = vecSet(0.0, 1.0, 3.0);


    // vecPrint() pretty print the vector
    // in the form of <x,y,z> |modulus|
    
    printf("Vector A,B\n");
    vecPrint(A); // < 1.00, 2.00, 0.00> | 2.24| 
    vecnPrint(B, 4); // < 0.0000, 1.0000, 3.0000> | 3.1623|

    // Arithmetic operations
	// The comming statements demonstarte 
    // 1. Vector Addtion
    // 2. Vector Subtraction
    // 3. Vector Cross Product
    // 4. Vector Dot Product
    // 5. Vector Scalar Product
        
    printf("\nADD, SUB, CRX, DOT, SCL\n");
    vecPrint(vecAdd(A, B));  // < 1.00, 3.00, 3.00> | 4.36|
    vecPrint(vecSub(A, B));  // < 1.00, 1.00,-3.00> | 3.32|
    vecPrint(vecCrx(A, B));  // < 6.00,-3.00, 1.00> | 6.78|
    printf("% .2f\n",vecDot(A, B)); // 2.00
    vecPrint(vecScl(A, 4.0));  // < 8.00, 0.00, 0.00> | 8.00|
    
    // Find unit vector
    
    printf("\nUnit A,B\n");
    vecPrint(vecUnit(A));  // < 0.45, 0.89, 0.00> | 2.24|
    vecPrint(vecUnit(B));  // < 0.00, 0.32, 0.95> | 3.16|

    // Take negative

    printf("\nNEG A,B\n");
    vecPrint(vecNeg(A));  // <-1.00,-2.00,-0.00> | 2.24|
    vecPrint(vecNeg(B));  // <-0.00,-1.00,-3.00> | 3.16|

    // Take modulus
    
    printf("\nMOD A,B\n");
    printf("|% .2f|\n",vecMod(A));  // 2.24
    printf("|% .2f|\n",vecMod(B));  // 3.16

    return 0;
}