#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P18 {

    void Task()
    {
        float r, Area;
        const float pi = 3.14;
        cout << "Enter r:" << endl;
        cin >> r;

        Area = pi * pow(r, 2);

        cout << ceil(Area) << endl;

    }

}
