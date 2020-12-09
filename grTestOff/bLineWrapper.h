#pragma once
#include "bLine.h"
class bLineWrapper :
    public bLine
{
public:
    bLineWrapper(Point p, Color c, double s = 1, double r = 0) :
        bLine(p, c, s, r)
    {
        draw();
    }
    bLineWrapper(Point p1, Point p2, Color c) :
        bLine(p1, c, getDist(p1, p2), p1.getDir(p2))
    {
        draw();
    }
};

