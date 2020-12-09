#pragma once
#include "Base.h"
#include "Arc.h"
class bArc :
    public Base,
    public Arch
{
public:
    bArc(Point p, Color c, double s = 1, double sweep = 2 * 3.1415926, double r = 0): 
        Arch(p, c, s, sweep, r),
        Base("Arc")
    {
        draw();
    }

    void draw()
    {
        drawarc(coor, scale, rotation, arcSwp);
    }
    void Print()
    {
        //printf("%d. %s\n", order, name);
        vc << Base::order << ". " << Base::name <<
            ": x = " << coor.getCoor(0) <<
            ", y = " << coor.getCoor(1) <<
            ", scale = " << scale << 
            ", sweep = " << arcSwp << "rad" <<
            ", rotation = " << rotation << " rad" <<"\n\n";
        TFlush();
    }
};

