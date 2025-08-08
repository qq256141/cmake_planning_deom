#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using Eigen::MatrixXd;
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "Planning process..." << endl;
    my_map.mapInfo();

    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1)+1;
    cout << m << endl;
    cout << "Process planned successfully." << endl;
}