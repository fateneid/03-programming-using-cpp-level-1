#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P19{

    void Task()
    {
        float D, Area;
        const float pi = 3.14;

        cout << "Please enter the diameter:" << endl;
        cin >> D;

        Area = (pi * pow(D, 2)) / 4;

        cout << ceil(Area) << endl;

    }

}