#pragma once

#include <iostream>
using namespace std;

namespace L20_P14 {

    void Task()
    {
        int num1, num2, temp;

        cout << "Please enter the first number:" << endl;
        cin >> num1;
        cout << "Please enter the second number:" << endl;
        cin >> num2;

        cout << endl << num1 << endl;
        cout << num2 << endl << endl;

        temp = num1;
        num1 = num2;
        num2 = temp;

        cout << num1 << endl;
        cout << num2 << endl;

    }


}