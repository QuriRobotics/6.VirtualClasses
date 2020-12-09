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

    /*void move(Point offset)
    {
        bcolor.apply();
        draw();
        p1 = p1 + offset;
        p2 = p2 + offset;
    }*/
    void draw()
    {
        drawline(p1, p2);
    }
    void Print()
    {
        //printf("%d. %s\n", order, name);
        vc << Base::order << ". " << Base::name <<
            ": x = " << coor.getCoor(0) << 
            ", y = " << coor.getCoor(1) << "\n\n";
        TFlush();
    }
};

