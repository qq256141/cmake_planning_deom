#include <iostream>
#include "show_result.h"
#include <graphics.h>
using std::cout, std::endl;

void ShowResult::drawResult()
{
    initgraph(1000,1000);
    setbkcolor(WHITE);
    cleardevice();

    cout << "draw circles:" << endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(500, 500, 200); // Draw a circle at (500, 500) with radius 200
    circle(500, 500, 400); // Draw a smaller circle at the same center
    system("pause");
    closegraph(); // Close the graphics window
}