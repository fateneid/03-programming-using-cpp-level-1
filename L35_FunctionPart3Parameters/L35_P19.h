#pragma once

#include <iostream>
#include<Cmath>
using namespace std;

namespace L35_P19 {

    float findArea(float d) {

        return (3.14 * pow(d, 2)) / 4;
    }

    void Task()
    {
        float d;
        cout << "Enter d:" << endl;
        cin >> d;

        cout << findArea(d) << endl;
    }

}
