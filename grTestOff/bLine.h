#pragma once
#include "Base.h"
#include "Line.h"
class bLine :
    public Base,
    public Line
{
public:
    bLine(Point p, Color c, double s = 1, double r = 0) : 
        Line(p, c, s, r), 
        Base("Line")
    {
        draw();
    }
    bLine(Point p1, Point p2, Color c) : 
        Line(p1, c, getDist(p1,p2), p1.getDir(p2)), 
        Base("Line")
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
        vc << Base::order << ". " << Base::name <<
            ": x = " << coor.getCoor(0) << 
            ", y = " << coor.getCoor(1) << 
            ", rotation = " << rotation << " rad" << 
            ", scale = " << scale << "\n\n";
        TFlush();
    }
};

