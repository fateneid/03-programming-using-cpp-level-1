#pragma once

#include <iostream>
using namespace std;

namespace L45_P36 {

    void Task()
    {
        float num1, num2;
        char operation;


        cout << "Number1?" << endl;
        cin >> num1;
        cout << "Number2?" << endl;
        cin >> num2;
        cout << "operation?" << endl;
        cin >> operation;

        switch (operation) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case'*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        }
    }

}



