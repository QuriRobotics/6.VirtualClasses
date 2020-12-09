#pragma once
#include "Figure.h"
class Arch :
    public Figure
{
protected:
    double arcSwp;
public:
    Arch(Point p, Color c, double s = 1, double sweep = 2 * 3.1415926, double r = 0) :Figure(p, c, s, r)
    {
        arcSwp = sweep;
        draw();
    }

    void setArcSweep(double sweep)
    {
        arcSwp = sweep;
    }

    void draw()
    {
        drawarc(coor, scale, rotation, arcSwp);
    }
};

