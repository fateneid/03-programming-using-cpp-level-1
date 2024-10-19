#pragma once

#include <iostream>
using namespace std;

namespace L20_P20 {

    void Task()
    {
        float A, Area;
        const float PI = 3.14;

        cout << "Please enter the A:" << "\n";
        cin >> A;

        Area = (PI * A * A) / 4;

        cout << "\n" << Area << "\n";

    }


}
