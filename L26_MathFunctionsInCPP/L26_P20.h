#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P20 {

    void Task()
    {
        float A, Area;
        const float pi = 3.14;

        cout << "Please enter the A:" << endl;
        cin >> A;

        Area = (pi * pow(A, 2)) / 4;

        cout << ceil(Area) << endl;

    }

}
