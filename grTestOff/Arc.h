#pragma once
#include "Figure.h"
class Arch :
    virtual public Figure
{
protected:
    Point p1;
    int r;
    double angle;
    double sweep;
public:
    Arch(Point pp1, int radius, double rot, double swp, Point p, Color c, double s = 1) :Figure(p, c, s)
    {
        p1 = pp1;
        r = radius;
        angle = rot;
        sweep = swp;
        draw();
    }

    void move(Point offset)
    {
        bcolor.apply();
        draw();
        p1 = p1 + offset;
        color.apply();
        draw();
    }
    void draw()
    {
        drawarc(p1, r, angle, sweep);
    }
};

