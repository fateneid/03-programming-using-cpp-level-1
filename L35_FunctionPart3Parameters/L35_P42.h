#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace L35_P42 {

    float TotalSeconds(int Days, int Hours, int  Minutes, int Seconds) {

        return (Days * 24 * 60 * 60 + Hours * 60 * 60 + Minutes * 60 + Seconds);
    }

    void Task()
    {
        int Days, Hours, Minutes, Seconds;

        cout << "Enter the number of Days:" << endl;
        cin >> Days;
        cout << "Enter the number of Hours:" << endl;
        cin >> Hours;
        cout << "Enter the number of Minutes:" << endl;
        cin >> Minutes;
        cout << "Enter the number of Seconds:" << endl;
        cin >> Seconds;

        cout << TotalSeconds(Days, Hours, Minutes, Seconds) << " Seconds" << endl;
    }

}

