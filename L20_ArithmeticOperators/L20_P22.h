#pragma once

#include <iostream>
using namespace std;

namespace L20_P22 {

    void Task()
    {
        float a, b, Area;
        const float PI = 3.14;

        cout << "Please enter the a:" << "\n";
        cin >> a;
        cout << "Please enter the b:" << "\n";
        cin >> b;

        Area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));

        cout << "\n" << Area << "\n";

    }

}



