#pragma once
#include "Base.h"
#include "Line.h"
class bLine :
    public Base,
    public Line,
    virtual public Figure
{
public:
    bLine(Point p1, Point p2, Point p, Color c, double s = 1) : 
        Line(p1, p2, p, c, s), 
        Base("Line"),
        Figure(p, c, s)
    {
        color.apply();
        draw();
    }
};

