#include <iostream>
#include "process.h"
#include "show_result.h"
using std::cout, std::endl;

int main()
{
    Process pro;
    pro.planProcess();
    cout << "planing end" << endl;
    cout << "showing result" << endl;
    ShowResult show;
    show.drawResult();
    return 0;
}
