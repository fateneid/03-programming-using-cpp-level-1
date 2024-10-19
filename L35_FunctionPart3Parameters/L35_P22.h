#pragma once

#include <iostream>
#include<Cmath>
using namespace std;

namespace L35_P22 {

    float findArea(float a, float b) {

        float area = (3.14 * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
        return area;
    }

    void Task()
    {
        float a, b;
        cout << "Enter a:" << endl;
        cin >> a;
        cout << "Enter b:" << endl;
        cin >> b;

        cout << findArea(a, b) << endl;
    }

}