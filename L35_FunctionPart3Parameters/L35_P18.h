#pragma once

#include <iostream>
#include<Cmath>
using namespace std;

namespace L35_P18 {

    float findArea(float r) {

        return 3.14 * pow(r, 2);
    }

    void Task()
    {
        float r;
        cout << "Enter r:" << endl;
        cin >> r;

        cout << findArea(r) << endl;
    }

}

