#pragma once

#include"vstub.h"

class Point
{
private:
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

	friend void drawline(Point p1, Point p2);
	friend Point operator+(Point a, Point b);
};

