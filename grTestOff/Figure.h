#pragma once

#include "Point.h"
#include "Color.h"

class Figure
{
protected:
	Point coor;
	Color color;

	double scale;

public:
	Color bcolor;

	Figure(){}
	Figure(Point p, Color c = Color(0,0,0), double s = 1)
	{
		this->coor = p;
		this->color = c;
		this->scale = s;
		bcolor = Color(0, 0, 0);
		color.apply();
	}
	void translate(Point offset)
	{
		coor = coor + offset;
		bcolor.apply();
		draw();
		move(offset);
		color.apply();
		draw();
	}

	virtual void move(Point offset) = 0;
	virtual void draw() = 0;
};

