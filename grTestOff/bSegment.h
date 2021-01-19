#pragma once
#include "bArc.h"
#include "bLine.h"
class bSegment:
	public Base,
	public bArc,
	public bLine,
	virtual public Figure
{
public:
	bSegment(Point pp1, int radius, double rot, double swp, Point p, Color c, double s = 1):
		Base("Segment"),
		Figure(p,c,s),
		bArc(pp1, radius, rot, swp, p, c, s),
		bLine(pp1.rotransl(-rot, radius), pp1.rotransl(-rot-swp, radius), p, c, s)
	{
		draw();
	}

	void move(Point offset)
	{
		bArc::move(offset);
		bLine::move(offset);
	}
	void draw()
	{
		bArc::draw();
		bLine::draw();
	}

	//void Print()
	//{
	//	bArc::Print();
	//	bLine::Print();
	//	//printf("%d. %s\n", order, name);
	//	vc << Base::order << ". " << Base::name <<
	//		": x = " << bArc::coor.getCoor(0) <<
	//		", y = " << bArc::coor.getCoor(1) << "\n\n";
	//	TFlush();
	//}
};

