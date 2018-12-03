#include "field.h"

vector* eForce(double q_1, double q_2, vector* R)
{
    double force =  q_1 * q_2 / (4* PI* E_0) / pow(R->mag,2);
    return vecScl(vecUnit(R), force);
}


vector* eFieldStrength(double q, vector* R)
{
    double force =  q / (4* PI* E_0) / pow(R->mag,2);
    return vecScl(vecUnit(R), force);
}


double ePotential(double q, vector* R)
{
    return q / (4* PI* E_0) / R->mag;
}


vector* gForce(double m_1, double m_2, vector* R)
{
    double force =  G * m_1 * m_2 / pow(R->mag,2);
    return vecScl(vecUnit(R), force);
}


vector* gFieldStrength(double m, vector* R)
{
    double force =  G * m / pow(R->mag,2);
    return vecScl(vecUnit(R), force);
}


double gPotential(double m, vector* R)
{
    return - G * m / R->mag;
}

vector* mForce(double C, vector* V, vector* B)
{
    return vecCrx(vecScl(V,C),B);
}