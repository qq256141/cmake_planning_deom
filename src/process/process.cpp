#include <iostream>
#include "process.h"
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "Planning process..." << endl;
    my_map.mapInfo();
    cout << "Process planned successfully." << endl;
}