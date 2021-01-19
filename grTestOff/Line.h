#pragma once
#include "Figure.h"
class Line :
    virtual public Figure
{
protected:
public:

    Point p1, p2;

    Line(Point pp1, Point pp2, Point p, Color c, double s = 1) : Figure(p, c, s)
    {
        p1 = pp1;
        p2 = pp2;
        draw();
    }

    void draw()
    {
        Point pp1, pp2;
        pp1 = coor + p1;
        pp2 = coor + p2;
        drawline(pp1, pp2);
    }
};

