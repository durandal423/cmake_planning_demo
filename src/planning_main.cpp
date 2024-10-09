#include "process.h"
#include "show_result.h"
#include <iostream>
using std::cout, std::endl;

int main() {
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end" << endl;

    cout << "show result: " << endl;
    ShowResult show;
    show.drawResult();

    return 0;
}