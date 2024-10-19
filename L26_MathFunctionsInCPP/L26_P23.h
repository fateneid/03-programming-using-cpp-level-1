#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P23 {

    void Task()
    {
        float a, b, c, d, p, Area;
        const float pi = 3.14;

        cout << "Please enter the a:" << endl;
        cin >> a;
        cout << "Please enter the b:" << endl;
        cin >> b;
        cout << "Please enter the c:" << endl;
        cin >> c;

        p = (a + b + c) / 2;
        d = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
        Area = pi * pow(d, 2);

        cout << round(Area) << endl;

    }

}