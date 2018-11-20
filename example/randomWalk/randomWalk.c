#include "../../include/vector.h"
#include <time.h> // for srand() to set random seed

// set maximum step to perform

#define MAX_STEP 1000

// computation function

int randomWalk();

// main

int main(int argc, char const *argv[])
{
    randomWalk();

    return 0;
}

int randomWalk()
{
    // Initialize the position vector of an object
    vector position = vecSet(0,0,0);

    // Initialize randDiection
    vector randDiection = vecSet(0,0,0);

    // Set random seed
    srand(time(0));

    // Iteration
    for(int step = 0;step < MAX_STEP;step++)
    {
        // since the random direction could have 
        // negative component, take the difference

        randDiection = vecSet(rand() - rand(),
                              rand() - rand(),
                              rand() - rand());

        // we suppose each step has length of
        // 1 unit, so take the unit vector of 
        // random direction.
        randDiection = vecUnit(randDiection);

        // update the position
        position = vecAdd(position,randDiection);
    }

    // Print the result
    vecPrint(position);
    
    return 0;
}