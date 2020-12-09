//#include "vstub.h"
#include "bLine.h"
#include "bArc.h"
#include "Base.h"

#define M_PI 3.1415926

void test5()
{
	Line line(Point(50, 50), Color::RED(), 100, 1);
	Arch arc(Point(100, 150), Color(15, 89, 125), 20, M_PI);
	//line.draw();
	vgetchar();

	for (double r = 0; r <= 0.1; r += 0.001)
	{
		line.translate(Point(1, 2), r);
		arc.translate(Point(2, 1));
		Sleep(10);
	}
}

int main(void)
{
	bLine bline1(Point(50, 50), Color::RED(), 100, 1);
	bLine bline2(Point(20, 50), Color::BLUE(), 10, -0.2);
	bArc arc1(Point(200, 200), Color(15, 89, 125), 20, 3.0/4*M_PI, 2);
	bArc arc2(Point(100, 150), Color::GREEN(), 20, M_PI);

	Base::PrintAll();


	vgetchar();
	return 0;
}

