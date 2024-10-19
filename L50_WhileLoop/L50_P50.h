#pragma once

#include <iostream>
using namespace std;

namespace L50_P50 {

    void ATMPIN3Times(int PIN, int Balance) {
        int userPin, i = 1;
        cout << "Please enter the PIN code:" << endl;
        cin >> userPin;
        if (userPin == PIN) {
            cout << "Your Balance is: " << Balance << endl;
        }
        else {
            cout << "Wrong PIN" << endl;
            while (i < 3) {
                cout << "Please enter the PIN code:" << endl;
                cin >> userPin;
                if (userPin == PIN) {
                    cout << "Your Balance is: " << Balance << endl;
                }
                else {
                    cout << "Wrong PIN" << endl;
                }
                i++;
            }
            cout << "Card is locked!" << endl;
        }
    }

    void Task()
    {
        int PIN = 1234, Balance = 7500, userPin, i = 1;
        ATMPIN3Times(PIN, Balance);


    }

}