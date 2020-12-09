#pragma once

#include "Point.h"
#include "Color.h"

class Figure
{
protected:
	Point coor;
	Color color;

	double scale;
	double rotation;

public:
	Color bcolor;

	Figure(Point p, Color c = Color(0,0,0), double s = 1, double r = 0)
	{
		this->coor = p;
		this->color = c;
		this->scale = s;
		this->rotation = r;
		bcolor = Color(0, 0, 0);
		color.apply();
	}
	void translate(Point offset, double rotate = 0)
	{
		bcolor.apply();
		draw();
		coor = coor + offset;
		rotation += rotate;
		color.apply();
		draw();
	}/*
	static void setBColor(Color c)
	{
		bcolor = c;
	}*/
	void setPosition(Point pos)
	{
		bcolor.apply();
		draw();
		coor = pos;
		color.apply();
		draw();
	}
	void setRotation(double rot)
	{
		bcolor.apply();
		draw();
		rotation = rot;
		color.apply();
		draw();
	}
	void setScale(double sc)
	{
		bcolor.apply();
		draw();
		scale = sc;
		color.apply();
		draw();
	}
	virtual void draw() = 0;
};

