#pragma once
#include "Base.h"
#include "Arc.h"
class bArc :
    public Base,
    public Arch,
    virtual public Figure
{
public:
    bArc(Point pp1, int radius, double rot, double swp, Point p, Color c, double s = 1):
        Arch(pp1 , radius, rot, swp, p, c, s),
        Base("Arc"),
        Figure(p, c, s)
    {
        color.apply();
        draw();
    }

    void draw()
    {
        drawarc(p1, r, angle, sweep);
    }
    //void Print()
    //{
    //    //printf("%d. %s\n", order, name);
    //    vc << Base::order << ". " << Base::name <<
    //        ": x = " << coor.getCoor(0) <<
    //        ", y = " << coor.getCoor(1) << "\n\n";
    //    TFlush();
    //}
};

