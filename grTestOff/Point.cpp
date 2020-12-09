#include "Point.h"

void drawline(Point p1, Point p2)
{
	drawline(p1.x, p1.y, p2.x, p2.y);
}

void drawarc(Point p1, int radius, double StartAngle, double SweepAngle)
{
	drawarc(p1.x, p1.y, radius, StartAngle, SweepAngle);
}

Point operator+(Point a, Point b)
{
	Point sum(a.x + b.x, a.y + b.y);
	return sum;
}

double getDist(Point a, Point b)
{
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y - b.y) * (a.y - b.y));
}
