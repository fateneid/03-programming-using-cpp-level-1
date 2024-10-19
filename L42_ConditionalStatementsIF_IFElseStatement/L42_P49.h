#pragma once

#include <iostream>
using namespace std;

namespace L42_P49 {

    void Task()
    {
        int PIN = 1234, Balance = 7500, userPin;

        cout << "Please enter the PIN code:" << endl;
        cin >> userPin;
        if (userPin == PIN) {
            cout << "Your Balance is: " << Balance << endl;
        }
        else {
            cout << "Wrong PIN" << endl;
        }
    }

}
