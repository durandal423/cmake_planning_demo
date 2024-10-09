#include "show_result.h"
#include <graphics.h>
#include <iostream>
using std::cout, std::endl;

void ShowResult::drawResult() {
    initgraph(500, 500);
    setbkcolor(WHITE);
    cleardevice();

    cout << "draw circles: " << endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(250, 250, 100);
    circle(250, 250, 200);

    system("pause");
    closegraph();
}