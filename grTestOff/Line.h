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

    void move(Point offset)
    {
        bcolor.apply();
        draw();
        p1 = p1 + offset;
        p2 = p2 + offset;
        color.apply();
        draw();
    }
    void draw()
    {
        //Point pp1, pp2;
        //pp1 = p + s * (p1 - p);
        //pp2 = p + s * (p2 - p);
        drawline(p1, p2);
    }
};

