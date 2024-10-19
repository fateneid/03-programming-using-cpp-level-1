#pragma once

#include <iostream>
using namespace std;

namespace L20_P21 {

    void Task()
    {
        float l, Area;
        const float PI = 3.14;

        cout << "Please enter the l:" << "\n";
        cin >> l;

        Area = (l * l) / (4 * PI);

        cout << "\n" << Area << "\n";

    }


}