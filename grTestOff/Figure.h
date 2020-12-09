#pragma once

#include "Point.h"
#include "Color.h"

class Figure
{
private:
	Point coor;
	Color color;

public:
	Figure(Point p, Color c)
	{
		this->coor = p;
		this->color = c;
	}
	void translate(Point offset)
	{
		coor = coor + offset;
	}
};

