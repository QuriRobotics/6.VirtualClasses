//#include "vstub.h"
#include "Line.h"
#include "Arc.h"

#define M_PI 3.1415926

int main(void)
{
	Line line(Point(50, 50), Color::RED(), 100, 1);
	Arch arc(Point(100, 150), Color::RED(), 20, M_PI);
	//line.draw();
	vgetchar();

	for (double r = 0; r <= 0.1; r += 0.001)
	{
		line.translate(Point(1, 2), r);
		arc.translate(Point(2, 1));
		Sleep(10);
	}


	vgetchar();
	return 0;
}

