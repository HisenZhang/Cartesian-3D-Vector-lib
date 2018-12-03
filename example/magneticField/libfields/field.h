#ifndef _FIELD_H
#define _FIELD_H

#include "vector.h"
#include "const.h"


vector* eForce(double q_1, double q_2, vector* R);
vector* eFieldStrength(double q, vector* R);
double ePotential(double q, vector* R);

vector* gForce(double m_1, double m_2, vector* R);
vector* gFieldStrength(double m, vector* R);
double gPotential(double m, vector* R);

vector* mForce(double C, vector* V, vector* B);

#endif