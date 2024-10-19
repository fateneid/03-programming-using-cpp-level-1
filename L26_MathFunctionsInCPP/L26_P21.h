#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P21 {

    void Task()
    {
        float l, Area;
        const float pi = 3.14;

        cout << "Please enter the l:" << endl;
        cin >> l;

        Area = pow(l, 2) / (pi * 4);

        cout << floor(Area) << endl;

    }

}
