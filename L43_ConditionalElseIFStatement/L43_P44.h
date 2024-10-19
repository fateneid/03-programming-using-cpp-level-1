#pragma once

#include <iostream>
using namespace std;

namespace L43_P44 {

    void Task()
    {
        short day;
        cout << "Enter the number of day:" << endl;
        cin >> day;

        if (day == 1) {
            cout << "Sunday" << endl;
        }
        else if (day == 2) {
            cout << "Monday" << endl;
        }
        else if (day == 3) {
            cout << "Tuesday" << endl;
        }
        else if (day == 4) {
            cout << "Wednesday" << endl;
        }
        else if (day == 5) {
            cout << "Thursday" << endl;
        }
        else if (day == 6) {
            cout << "Friday" << endl;
        }
        else if (day == 7) {
            cout << "Saturday" << endl;
        }


    }


}
