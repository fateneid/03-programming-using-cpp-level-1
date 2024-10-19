#pragma once

#include <iostream>
using namespace std;

namespace L42_P24 {

    void Task()
    {
        short age;

        cout << "Enter your age:" << endl;
        cin >> age;

        if (age >= 18 && age <= 45) {
            cout << "Valid Age" << endl;
        }
        else {
            cout << "Invalid Age" << endl;

        }
    }


}