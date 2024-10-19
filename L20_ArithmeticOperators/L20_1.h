#pragma once

#include <iostream>
using namespace std;

namespace L20_1 {

    void Task()
    {
        int A, B;

        cout << "Please enter the first Number A?" << endl;
        cin >> A;

        cout << "Please enter the second Number B?" << endl;
        cin >> B;

        cout << endl << A << " + " << B << " = " << A + B << endl;
        cout << A << " - " << B << " = " << A - B << endl;
        cout << A << " * " << B << " = " << A * B << endl;
        cout << A << " / " << B << " = " << A / B << endl;
        cout << A << " % " << B << " = " << A % B << endl;
    }

}


