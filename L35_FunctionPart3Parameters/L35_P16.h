#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace L35_P16 {

    float findArea(float a, float d) {
        float area = a * sqrt(pow(d, 2) - pow(a, 2));
        return area;
    }

    void Task()
    {
        float a, d;
        cout << "a?" << endl;
        cin >> a;
        cout << "d?" << endl;
        cin >> d;

        cout << findArea(a, d) << endl;


    }

}

