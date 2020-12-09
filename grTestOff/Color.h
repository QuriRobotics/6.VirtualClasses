#pragma once

#include "vstub.h"

class Color
{
private:
	int r, g, b;
public:
	Color();
	Color(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	Color(Color& c)
	{
		this->r = c.r;
		this->g = c.g;
		this->b = c.b;
	}
	Color operator=(Color &c)
	{
		this->r = c.r;
		this->g = c.g;
		this->b = c.b;
	}

	void apply()
	{
		setcolor(r, g, b);
	}
};