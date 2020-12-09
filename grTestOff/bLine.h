#pragma once
#include "Base.h"
#include "Line.h"
class bLine :
    public Base,
    public Line
{
public:
    bLine(Point p, Color c, double s = 1, double r = 0) : Line(p, c, s, r), Base("Line")
    {
        draw();
    }

    void draw()
    {
        drawline(coor, coor.rotransl(rotation, scale));
    }
    void Print()
    {
        //printf("%d. %s\n", order, name);
        vc << order << ". " << name <<
            ": x = " << coor.getCoor(0) << 
            ", y = " << coor.getCoor(1) << 
            ", rotation = " << rotation << " rad" << 
            ", scale = " << scale << "\n";
        TFlush();
    }
};

