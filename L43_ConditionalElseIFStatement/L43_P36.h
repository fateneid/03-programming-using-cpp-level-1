#pragma once

#include <iostream>
using namespace std;

namespace L43_P36 {

    void Task()
    {
        float num1, num2;
        string operation;

        cout << "Number1?" << endl;
        cin >> num1;
        cout << "Number2?" << endl;
        cin >> num2;
        cout << "operation?" << endl;
        cin >> operation;

        if (operation == "+") {
            cout << num1 + num2;
        }
        else if (operation == "-") {
            cout << num1 - num2;
        }
        else if (operation == "*") {
            cout << num1 * num2;
        }
        else if (operation == "/") {
            cout << num1 / num2;
        }
    }


}