#ifndef _KINETICS_H
#define _KINETICS_H

#include "vector.h"

typedef struct Object
{
    double m;
    double c;
    double ke;
    double pe;

    vector* F;
    vector* pos; 
    vector* a;
    vector* v;
}object;

object* objInit();
int objUpdate(object* X, double time);

int objStatus(object* X);

#endif