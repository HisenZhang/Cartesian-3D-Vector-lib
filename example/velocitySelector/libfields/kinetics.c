#include "kinetics.h"

object* objInit()
{
    object* result = (object*) malloc(sizeof(object));

    result->m = 0.0;
    result->c = 0.0;
    result->ke = 0.0;
    result->pe = 0.0;

    result->F = vecSet(0,0,0);
    result->pos = vecSet(0,0,0);
    result->a = vecSet(0,0,0);
    result->v = vecSet(0,0,0);

    return result;
}


int objUpdate(object* X, double time)
{
    
    vector* u = X->v;
    
    // a = F / m
    X->a = vecScl(X->F, 1.0 / X->m);
    // v = u + at  
    X->v = vecAdd(u,vecScl(X->a, time)); 
    // x = ut + 0.5*a(t^2)  
    X->pos = vecAdd(X->pos,vecAdd(vecScl(u,time),
        vecScl(X->a, 0.5 * pow(time,2))));        
    // ke = 0.5*m*(v^2)
    X->ke += 0.5 * X->m * pow(X->v->mag,2);

    // X->pe

    return 0;
}

int objStatus(object* X)
{
    extern double time;

    printf("\nUp to %.2f s\n",time);
    printf("a,v,position\n");
    vecnPrint(X->a,0);
    vecnPrint(X->v,0);
    vecnPrint(X->pos,0);
    return 0;
}