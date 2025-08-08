#include<iostream>
#include "pnc_map.h"
using std::cout, std::endl;

void MapTest()
{
    cout << "this is map test" << endl;
    PNC_Map mymap;
    mymap.mapInfo();
}
int main()
{
    MapTest();
    return 0;
}
