#pragma once
#include "bArc.h"
#include "bLine.h"
class bSegment:
	public Base,
	public bArc,
	public bLine,
	public Figure
{
public:
	bSegment(Point p, Color c, double s = 10, double sw = 1, double r = 0):
		Base("Segment"),
		Figure(p,c,s,r),
		bArc(p,c,s,sw,r),
		bLine(p.rotransl(-r, s), p.rotransl(-r - sw, s), c)
	{
		//draw();
	}

	void draw()
	{
		//Color::BLACK().apply();
		bArc::draw();
		bLine::draw();

		//bSegment(Figure::coor, Figure::color, Figure::scale, arcSwp, Figure::rotation);

		//bArc(Figure::coor, Figure::color, Figure::scale, arcSwp, Figure::rotation);

		//Point p1 = Figure::coor.rotransl(Figure::rotation, Figure::scale);
		//Point p2 = Figure::coor.rotransl(Figure::rotation + arcSwp, Figure::scale);
	
		//bLine(p1, p2, Figure::color);

		//bArc::draw();
		//bLine::draw();
	}

	void Print()
	{
		bArc::Print();
		bLine::Print();
		//printf("%d. %s\n", order, name);
		vc << Base::order << ". " << Base::name <<
			": x = " << bArc::coor.getCoor(0) <<
			", y = " << bArc::coor.getCoor(1) <<
			", scale = " << bArc::scale <<
			", sweep = " << arcSwp << "rad" <<
			", rotation = " << bArc::rotation << " rad" << "\n\n";
		TFlush();
	}
};

