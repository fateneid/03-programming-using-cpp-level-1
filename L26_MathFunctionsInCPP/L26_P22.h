#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P22 {

    void Task()
    {
        float a, b, Area;
        const float pi = 3.14;

        cout << "Please enter the a:" << endl;
        cin >> a;
        cout << "Please enter the b:" << endl;
        cin >> b;

        Area = (pi * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

        cout << floor(Area) << endl;

    }

}
