#pragma once
#include "bLine.h"
class bLineWrapper :
    public bLine,
    virtual public Figure
{
public:
    bLineWrapper(Point p1, Point p2, Point p, Color c, double s = 1) :
        bLine(p1, p2, p, c, s),
        Figure(p, c, s)
    {
        color.apply();
        draw();
    }
};

