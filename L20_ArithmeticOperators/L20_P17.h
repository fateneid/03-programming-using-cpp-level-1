#pragma once

#include <iostream>
using namespace std;

namespace L20_P17 {

    void Task()
    {
        int a, h;

        cout << "Please enter the width:" << endl;
        cin >> a;

        cout << "Please enter the height:" << endl;
        cin >> h;

        cout << endl << (a * h) / 2 << endl;
    }

}
