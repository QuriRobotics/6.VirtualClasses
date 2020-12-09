#pragma once

#include"vstub.h"

class Point
{
protected:
	int x, y;
public:
	Point() {}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	/*Point(Point &a)
	{
		this->x = a.x;
		this->y = a.y;
	}*/

	int getCoor(int n)
	{
		switch (n)
		{
		case 0:
			return x;
		case 1:
			return y;
		}
	}

	void operator=(Point a)
	{
		this->x = a.x;
		this->y = a.y;
	}
	Point rotransl(double angle, double scale)
	{
		Point out = Point(this->x + cos(angle) * scale, this->y + sin(angle) * scale);
		return out;
	}
	double getDir(Point p)
	{
		return atan2(p.y - y, p.x - x);
	}

	friend void drawline(Point p1, Point p2);
	friend void drawarc(Point p1, int radius, double StartAngle, double SweepAngle);
	friend Point operator+(Point a, Point b);
	friend double getDist(Point a, Point b);
};

