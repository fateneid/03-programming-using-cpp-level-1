#pragma once

#include <iostream>
using namespace std;

namespace L51_DoWhileLoop {

    //Problem #50 ATM PIN 3 Times With Do While

    void ATMPIN3TimesWithDoWhile(int PIN, int Balance) {
        int userPin, i = 1;
        do
        {
            cout << "Please enter the PIN code:" << endl;
            cin >> userPin;
            if (userPin == PIN) {
                cout << "Your Balance is: " << Balance << endl;
            }
            else {
                cout << "Wrong PIN" << endl;
            }

            if (i == 3) {
                cout << "Card is locked!" << endl;
            }
            i++;
        } while (userPin != PIN && i <= 3);
    }

    void Task()
    {
        int PIN = 1234, Balance = 7500, userPin, i = 1;
        ATMPIN3TimesWithDoWhile(PIN, Balance);
    }

}