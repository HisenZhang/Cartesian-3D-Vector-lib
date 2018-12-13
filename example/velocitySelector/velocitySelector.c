#include "libfields/kinetics.h"
#include "libfields/field.h"
#include "libfields/plot.h"

#define T_DIVISION 10000
#define T_TOTAL 10.0                // seconds
#define T_INTERVAL (T_TOTAL / T_DIVISION) // seconds

object* A;

double time;

int main(int argc, char const *argv[])
{
    extern object* A;
    extern double time;

    vector* E = vecSet(0,0,1);
    vector* B = vecSet(0,-1,0);
    
    for(int i = 1; i < 5;i++)
    {

        // Initialize plot

        plot_t plotHandle = plot3DInit(0.5);

        A = objInit();

        A->pos = vecSet(0,0,0);
        A->v = vecSet(i,i,i);
        A->m = 1;
        A->c = 1;

        // Iteration
        
        
        plot3DCache(plotHandle,A->pos->x,A->pos->y,A->pos->z);
        for(time = T_INTERVAL ;time <= T_TOTAL ;time += T_INTERVAL)
        {
            A->F = vecAdd(mForce(A->c,A->v,B),vecScl(E,A->c));
            // F = BIL = qVB

            objUpdate(A,T_INTERVAL);
            plot3DCache(plotHandle,A->pos->x,A->pos->y,A->pos->z);
        }

        // Show plot and close plot

        plotShow(plotHandle);
        plotClose(plotHandle);  

    }

    printf("\nPress any key to exit...\n");
    getchar();

    return 0;
}

