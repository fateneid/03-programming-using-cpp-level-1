#pragma once

#include <iostream>
#include<Cmath>
using namespace std;

namespace L35_P23 {

    float findArea(float a, float b, float c) {

        float p, d, area;
        p = (a + b + c) / 2;
        d = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
        area = 3.14 * pow(d, 2);
        return area;
    }

    void Task()
    {
        float a, b, c;
        cout << "Enter a:" << endl;
        cin >> a;
        cout << "Enter b:" << endl;
        cin >> b;
        cout << "Enter c:" << endl;
        cin >> c;

        cout << findArea(a, b, c) << endl;
    }


}
