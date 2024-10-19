#pragma once

#include <iostream>
using namespace std;

namespace L42_P08 {


    void Task()
    {
        float mark;

        cout << "Please enter your mark:" << endl;
        cin >> mark;

        if (mark >= 50) {
            cout << "PASS";
        }
        else {
            cout << "Fail";
        }
    }

}

