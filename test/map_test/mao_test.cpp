#include "pnc_map.h"
#include <iostream>
using std::cout, std::endl;

void mapTest() {
    cout << "this is pnc_map test" << endl;
    PNC_Map mymap;
    mymap.map_info();
}

int main() {
    mapTest();
    return 0;
}