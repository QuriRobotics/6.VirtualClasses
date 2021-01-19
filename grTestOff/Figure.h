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
		bcolor.apply();
		draw();
		coor = coor + offset;
		//move(offset);
		color.apply();
		draw();
	}
	virtual ~Figure()
	{

	}

	virtual void draw() = 0;
};

