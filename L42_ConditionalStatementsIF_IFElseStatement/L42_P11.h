#pragma once

#include <iostream>
using namespace std;

namespace L42_P11 {

    void Task()
    {
        float mark1, mark2, mark3;

        cout << "Please enter your mark1:" << endl;
        cin >> mark1;
        cout << "Please enter your mark2:" << endl;
        cin >> mark2;
        cout << "Please enter your mark3:" << endl;
        cin >> mark3;

        float avg = (mark1 + mark2 + mark3) / 3;

        cout << avg << endl;

        if (avg >= 50) {
            cout << "PASS";
        }
        else {
            cout << "FAIL";
        }
    }

}