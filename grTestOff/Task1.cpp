//#include "vstub.h"

#include "Line.h"
#include "Arc.h"
#include "bLine.h"
#include "bArc.h"
#include "bSegment.h"
#include "bLineWrapper.h"
#include "bSector.h"

#define M_PI 3.1415926

void test()
{
	bLineWrapper line(Point(100, 25), Point(50, 100), Point(0, 0), Color::RED());
	bArc arc(Point(100, 100), 30, 2, 1, Point(50, 100), Color::RED());
	bSegment seg(Point(150, 150), 30, 0, 1.5, Point(150, 150), Color::GREEN());
	//bSector sec(Point(100, 200), 50, -0.5, 1.5, Point(100, 200), Color::BLUE());

	Figure* sec = new bSector(Point(100, 200), 50, -0.5, 1.5, Point(100, 200), Color::BLUE());

	Base::PrintAll();

	vgetchar();

	arc.translate(Point(10,40)); // Figure->seg = new bSegment
	line.translate(Point(10, 40)); // Base->sec = new bSector
	seg.translate(Point(50, 70)); // удаление через базовые классы +
	sec->translate(Point(80, -20)); // координаты привязать к точке привязки +

	Base::PrintAll();

	/*bLineWrapper line(Point(100, 25), Point(50, 100), Point(0, 0), Color::RED());
	bArc arc(Point(100, 100), 30, 2, 1, Point(50, 100), Color::RED());
	bSegment seg(Point(150, 150), 30, 0, 1.5, Point(150, 150), Color::GREEN());
	bSector sec(Point(0, 0), 50, -0.5, 1.5, Point(100, 200), Color::BLUE());*/
}

int main(void)
{
	
	//bLineWrapper line(Point(100, 25), Point(50, 100), Point(0, 0), Color::RED());
	Base* seg = new bSegment(Point(0, 0), 30, 0, 1.5, Point(150, 150), Color::GREEN());
	Figure* sec = new bSector(Point(0, 0), 50, -0.5, 1.5, Point(100, 200), Color::BLUE());
	//Base* line = new bLine(Point(100, 25), Point(50, 100), Point(0, 0), Color::RED());
	Base::PrintAll();

	vgetchar();

	delete sec;
	bLine line(Point(100, 25), Point(50, 100), Point(0, 0), Color::RED());
	delete seg;

	Base::PrintAll();

	vgetchar();
	return 0;
}

