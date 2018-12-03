#ifndef _PLOT_H
#define _PLOT_H

#include <stdio.h>

FILE* plot2DInit(double ptSize);
FILE* plot3DInit(double ptSize);
int plot2DCache(FILE* gnuPlotHandle, double x, double y);
int plot3DCache(FILE* gnuPlotHandle, double x, double y, double z);
int plotShow(FILE* gnuplotHandler);
int plotClose(FILE* gnuplotHandler);

#endif