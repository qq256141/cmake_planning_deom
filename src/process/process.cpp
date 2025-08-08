#include <iostream>
#include "process.h"
using namespace std;

void Process::planProcess()
{
    cout << "Planning process..." << endl;
    my_map.mapInfo();
    cout << "Process planned successfully." << endl;
}