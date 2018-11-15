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
    vector A = vecSet(1.0, 2.0, 0.0);
    vector B = vecSet(0.0, 1.0, 3.0);

    printf("Vector A,B\n");
    vecPrint(A);
    vecnPrint(B, 4);

    printf("\nADD, SUB, CRX, DOT, SCL\n");
    vecPrint(vecAdd(A,B));
    vecPrint(vecSub(A,B));
    vecPrint(vecCrx(A,B));
    printf("% .2f\n",vecDot(A,B));
    vecPrint(vecScl(A, 4.0));
    
    printf("\nUnit A,B\n");
    vecPrint(vecUnit(A));
    vecPrint(vecUnit(B));

    printf("\nNEG A,B\n");
    vecPrint(vecNeg(A));
    vecPrint(vecNeg(B));
    
    printf("\nMOD A,B\n");
    printf("% .2f\n",vecMod(A));
    printf("% .2f\n",vecMod(B));

    return 0;
}
