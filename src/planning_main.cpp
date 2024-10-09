#include "process.h"
#include <iostream>
using std::cout, std::endl;

int main() {
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end" << endl;

    return 0;
}