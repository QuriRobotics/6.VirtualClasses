#pragma once
class Point
{
private:
	int x, y;
public:
	Point();
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Point(Point &a)
	{
		this->x = a.x;
		this->y = a.y;
	}
	Point operator=(Point a)
	{
		this->x = a.x;
		this->y = a.y;
	}

	friend Point operator+(Point a, Point b);
};

