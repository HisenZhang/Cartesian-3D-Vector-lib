#ifndef _PLOT_H
#define _PLOT_H

#include <stdio.h>

typedef FILE* plot_t;

plot_t plot2DInit(double ptSize);
plot_t plot3DInit(double ptSize);
int plot2DCache(plot_t gnuPlotHandle, double x, double y);
int plot3DCache(plot_t gnuPlotHandle, double x, double y, double z);
int plotShow(plot_t gnuplotHandler);
int plotClose(plot_t gnuplotHandler);

#endif