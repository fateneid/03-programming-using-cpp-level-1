#pragma once

#include <iostream>
using namespace std;

namespace L20_P19 {

    void Task()
    {
        float D, Area;
        const float PI = 3.14;

        cout << "Please enter the diameter:" << "\n";
        cin >> D;

        Area = (PI * D * D) / 4;

        cout << "\n" << Area << "\n";

    }


}


