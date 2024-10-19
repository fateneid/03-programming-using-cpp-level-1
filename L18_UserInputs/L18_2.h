#pragma once

#include <iostream>
using namespace std;

namespace L18_2 {

    void Task()
    {
        int num1, num2, num3;

        cout << "Please enter the first number:" << endl;
        cin >> num1;
        cout << "Please enter the second number:" << endl;
        cin >> num2;
        cout << "Please enter the thirth number:" << endl;
        cin >> num3;

        cout << num1 << " + " << endl;
        cout << num2 << " + " << endl;
        cout << num3 << endl << endl;
        cout << "________________________________________" << endl << endl;
        cout << "Total = " << num1 + num2 + num3 << endl;

    }


}
