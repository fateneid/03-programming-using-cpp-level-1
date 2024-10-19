#pragma once

#include <iostream>
using namespace std;

namespace L26_P42 {

    void Task()
    {
        int Days, Hours, Minutes, Seconds, TotalSeconds;

        cout << "Enter the number of Days:" << endl;
        cin >> Days;
        cout << "Enter the number of Hours:" << endl;
        cin >> Hours;
        cout << "Enter the number of Minutes:" << endl;
        cin >> Minutes;
        cout << "Enter the number of Seconds:" << endl;
        cin >> Seconds;

        TotalSeconds = Days * 24 * 60 * 60 + Hours * 60 * 60 + Minutes * 60 + Seconds;

        cout << round(TotalSeconds) << " Seconds" << endl;

    }

}