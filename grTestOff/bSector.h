#pragma once
#include "Figure.h"
#include "bArc.h"
#include "bLine.h"
#include "bLineWrapper.h"
class bSector :
	public Base,
	public bArc,
	public bLine,
	public bLineWrapper,
	virtual public Figure
{
public:
	bSector(Point pp1, int radius, double rot, double swp, Point p, Color c, double s = 1) :
		Base("Sector"),
		Figure(p, c, s),
		bArc(pp1, radius, rot, swp, p, c, s),
		bLine(pp1, pp1.rotransl(-rot - swp, radius), p, c, s),
		bLineWrapper(pp1, pp1.rotransl(-rot, radius), p, c, s)
	{

	}
	void move(Point offset)
	{
		bArc::move(offset);
		bLine::move(offset);
		bLineWrapper::move(offset);
	}

	void draw()
	{
		bArc::draw();
		bLine::draw();
		bLineWrapper::draw();
	}

	void Print()
	{
		bArc::Print();
		bLine::Print();
		bLineWrapper::Print();
		//printf("%d. %s\n", order, name);
		vc << Base::order << ". " << Base::name <<
			": x = " << bArc::coor.getCoor(0) <<
			", y = " << bArc::coor.getCoor(1) << "\n\n";
		TFlush();
	}
};

