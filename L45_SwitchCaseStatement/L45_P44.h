#pragma once

#include <iostream>
using namespace std;

namespace L45_P44 {

    void Task()
    {
        short day;
        cout << "Enter the number of day:" << endl;
        cin >> day;

        switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "It's not a week day" << endl;
        }

    }

}

