#pragma once

#include <iostream>
#include<Cmath>
using namespace std;

namespace L35_P20 {

    float findArea(float a) {

        return (3.14 * pow(a, 2)) / 4;
    }

    void Task()
    {
        float a;
        cout << "Enter A:" << endl;
        cin >> a;

        cout << findArea(a) << endl;
    }

}

