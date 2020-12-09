//#include "vstub.h"
#include "Line.h"
#include "Arc.h"
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
	Base();
	Base test("Ku");
	Base arc("Arc");
	Base::PrintAll();


	vgetchar();
	return 0;
}

