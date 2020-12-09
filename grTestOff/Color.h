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
		Color c(0, 0, 0);
		return c;
	}
	static Color RED()
	{
		Color c(255, 0, 0);
		return c;
	}
};