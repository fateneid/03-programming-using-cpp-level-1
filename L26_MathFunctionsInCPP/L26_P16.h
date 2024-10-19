#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P16 {

    void Task()
    {
        float a, d, Area;
        cout << "Enter a:" << endl;
        cin >> a;
        cout << "Enter d:" << endl;
        cin >> d;

        Area = a * sqrt(pow(d, 2) - pow(a, 2));

        cout << Area << endl;

    }

}

