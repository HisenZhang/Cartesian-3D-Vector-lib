#include "plot.h"

plot_t plot2DInit(double ptSize)
{
    FILE *gnuplot = popen("./utils/gnuplot -presist", "w");
    fprintf(gnuplot, "set pointsize %f\n",ptSize);
    fprintf(gnuplot, "load \"./config.plt\"\n");
    fprintf(gnuplot, "plot '-' lt rgb \"blue\"\n");

    return gnuplot;
}

plot_t plot3DInit(double ptSize)
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

int plot2DCache(plot_t gnuPlotHandle, double x, double y)
{
    fprintf(gnuPlotHandle, "%e %e\n", x, y);

    return 0;
}

int plot3DCache(plot_t gnuPlotHandle, double x, double y, double z)
{
    fprintf(gnuPlotHandle, "%e %e %e\n", x, y, z);

    return 0;
}

int plotShow(plot_t gnuPlotHandle)
{
    fprintf(gnuPlotHandle, "e\n");
    fflush(gnuPlotHandle);

    return 0;
}

int plotClose(plot_t gnuPlotHandle)
{
    fclose(gnuPlotHandle);

    return 0;
}