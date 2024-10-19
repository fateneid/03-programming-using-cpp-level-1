#pragma once

#include <iostream>
#include<Cmath>
using namespace std;

namespace L35_P21 {


    float findArea(float l) {

        return pow(l, 2) / (4 * 3.14);
    }

    void Task()
    {
        float l;
        cout << "Enter l:" << endl;
        cin >> l;

        cout << findArea(l) << endl;
    }

}
