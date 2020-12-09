#pragma once
#include "Figure.h"
class Line :
    public Figure
{
protected:
public:
    Line(Point p, Color c, double s = 1, double r = 0) :Figure(p, c, s, r)
    {
        draw();
    }

    void draw()
    {
        drawline(coor, coor.rotransl(rotation, scale));
    }
};

