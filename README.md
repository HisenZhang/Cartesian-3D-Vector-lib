# Cartesian 3D Vector lib
A simple vector library written in plain C for educational purpose.

## Example
```c
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
    vecPrint(B); // < 0.00, 1.00, 3.00> | 3.16|

    // Arithmetic operations

    printf("\nADD, SUB, CRX, DOT\n");
    vecPrint(vecAdd(A,B));  // < 1.00, 3.00, 3.00> | 4.36|
    vecPrint(vecSub(A,B));  // < 1.00, 1.00,-3.00> | 3.32|
    vecPrint(vecCrx(A,B));  // < 6.00,-3.00, 1.00> | 6.78|
    printf("% .2f\n",vecDot(A,B)); // 2.00
    
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
```
## Functions
### Arithmetic
#### Addition

`vecAdd(A,B)` returns the sum: `A+B`.

#### Subtraction

`vecSub(A,B)` returns the difference: `A-B`.

#### Negative

`vecNeg(V)` returns the nagetive: `-V`.

#### Modulus

`vecMod(V)` returns the modulus: `|V|`.

#### Unit Vector

`vecUnit(V)` returns the unit vector: `^V`.

#### Dot Product

`vecDot(A,B)` returns the dot product: `A·B`.

#### Cross Product

`vecCrx(A,B)` returns the Cross product: `A×B`.

### Utils
#### Initialization

There're two ways to initialize a vector:
1. `vecSet(x,y,z)` returns a vector specify the coordinates (x,y,z).
2. `vecInit()` returns a vector with coordinates all of `0.0`.

#### Pretty Print

`vecPrint(A)` prints the vector in the form of `<x,y,z> |modulus|`.
