#include "libfields/kinetics.h"
#include "libfields/field.h"
#include "libfields/plot.h"

// Declare total time and interval

#define T_DIVISION 100000
#define T_TOTAL 60.0                // seconds
#define T_INTERVAL (T_TOTAL / T_DIVISION) // seconds


double time;

// Declare objects

object* A;

// Computation function

int fd();

// main

int main(int argc,char** argv)
{
    fd();

    return 0;
}   

// fd implementation

int fd()
{
    extern object* A;
    extern double time;

    vector* B = vecInit();
    B = vecSet(0,0,8);
    A = objInit();

    // Initialize objects

    A->m = 1e-2;
    A->c = 1e-3;
    A->v = vecSet(0,1,2);

    // Initialize plot

    plot_t plotHandle = plot3DInit(0.5);

    // Iteration

    plot3DCache(plotHandle,A->pos->x,A->pos->y,A->pos->z);
    for(time = T_INTERVAL ;time <= T_TOTAL ;time += T_INTERVAL)
    {
        A->F = mForce(A->c,A->v,B);
        // F = BIL = qVB

        objUpdate(A,T_INTERVAL);
        plot3DCache(plotHandle,A->pos->x,A->pos->y,A->pos->z);
    }

    // Show plot and close plot

    plotShow(plotHandle);
    
    printf("\nPress any key to exit...\n");
    getchar();
    plotClose(plotHandle);

    return 0;
}