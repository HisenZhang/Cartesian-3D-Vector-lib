#include "include/vector.h"
#define G 6.67428e-11 
#define M_EARTH 5.972e24
#define R_EARTH 6371000.0


int main(int argc, char const *argv[])
{
    int theta;

    for(theta = 0;theta < 628;theta+=10)
    {
        printf("% .2f\t",theta/100.0);
        double phi;
        vector M = vecSet(R_EARTH * cos(theta/100.0),R_EARTH * sin(theta/100.0),0.0);
        vector T = vecInit();

        vector g = vecSub(T,M);
        // vecPrint(g);

        phi = G * M_EARTH / pow(vecMod(g),2); 
        // printf("% .4f\n",phi);

        g = vecUnit(g);
        vecPrint(g);
    }


    return 0;
}
