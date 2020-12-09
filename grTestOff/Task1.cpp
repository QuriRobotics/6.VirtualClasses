//#include "vstub.h"
#include "Line.h"

int main(void)
{
	//Line::bcolor = Color(0,0,0);

	Line line(Point(50, 50), Color::RED(), 100, 1);
	//line.draw();
	vgetchar();

	for (double r = 0; r <= 1; r += 0.01)
	{
		line.translate(Point(1, 2), r);
		Sleep(100);
	}


	vgetchar();
	return 0;
}

