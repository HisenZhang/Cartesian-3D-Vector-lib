#include "plot.h"

FILE* plot2DInit(double ptSize)
{
    FILE *gnuplot = popen("./utils/gnuplot -presist", "w");
    fprintf(gnuplot, "set pointsize %f\n",ptSize);
    fprintf(gnuplot, "load \"./config.plt\"\n");
    fprintf(gnuplot, "plot '-' lt rgb \"blue\"\n");

    return gnuplot;
}

FILE* plot3DInit(double ptSize)
{
    FILE *gnuplot = popen("./utils/gnuplot -presist", "w");
    fprintf(gnuplot, "set pointsize %f\n",ptSize);
    fprintf(gnuplot, "set xlabel \"X\"\n");
    fprintf(gnuplot, "set ylabel \"Y\"\n");
    fprintf(gnuplot, "set zlabel \"Z\"\n");

    fprintf(gnuplot, "load \"./config.plt\"\n");
    fprintf(gnuplot, "splot '-' lt rgb \"blue\"\n");

    return gnuplot;
}

int plot2DCache(FILE* gnuPlotHandle, double x, double y)
{
    fprintf(gnuPlotHandle, "%e %e\n", x, y);

    return 0;
}

int plot3DCache(FILE* gnuPlotHandle, double x, double y, double z)
{
    fprintf(gnuPlotHandle, "%e %e %e\n", x, y, z);

    return 0;
}

int plotShow(FILE* gnuPlotHandle)
{
    fprintf(gnuPlotHandle, "e\n");
    fflush(gnuPlotHandle);

    return 0;
}

int plotClose(FILE* gnuPlotHandle)
{
    fclose(gnuPlotHandle);

    return 0;
}