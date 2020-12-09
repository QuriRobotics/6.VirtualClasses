#pragma once

#include "vstub.h"

class Color
{
private:
	int r, g, b;
public:
	Color() {}
	Color(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	Color(const Color &c)
	{
		this->r = c.r;
		this->g = c.g;
		this->b = c.b;
	}
	void operator=(Color c)
	{
		this->r = c.r;
		this->g = c.g;
		this->b = c.b;
	}

	void apply()
	{
		setcolor(r, g, b);
	}

	static Color BLACK()
	{
		return Color(0,0,0);
	}
	static Color RED()
	{
		return Color(255, 0, 0);
	}
	static Color GREEN()
	{
		return Color(0, 255, 0);
	}
	static Color BLUE()
	{
		return Color(0, 0, 255);
	}
};