#include "Point.h"

void drawline(Point p1, Point p2)
{
	drawline(p1.x, p1.y, p2.x, p2.y);
}

Point operator+(Point a, Point b)
{
	Point sum(a.x + b.x, a.y + b.y);
	return sum;
}