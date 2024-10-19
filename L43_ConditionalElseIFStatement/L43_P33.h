#pragma once

#include <iostream>
using namespace std;

namespace L43_P33 {

    void Task()
    {
        float grade;

        cout << "Please enter your grade:" << endl;
        cin >> grade;

        if (grade >= 90) {
            cout << "A" << endl;
        }
        else if (grade >= 80 && grade <= 89) {
            cout << "B" << endl;
        }
        else if (grade >= 70 && grade <= 79) {
            cout << "C" << endl;
        }
        else if (grade >= 60 && grade <= 69) {
            cout << "D" << endl;
        }
        else if (grade >= 50 && grade <= 59) {
            cout << "E" << endl;
        }
        else {
            cout << "F" << endl;
        }

    }

}
