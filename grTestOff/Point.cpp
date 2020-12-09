#include "Point.h"

Point operator+(Point a, Point b)
{
	Point sum(a.x + b.x, a.y + b.y);
	return sum;
}