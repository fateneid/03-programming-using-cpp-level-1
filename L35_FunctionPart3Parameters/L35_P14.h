#pragma once

#include <iostream>
using namespace std;

namespace L35_P14 {

    void Swap_Numbers() {

        int num1, num2, temp;
        cout << "Num1?" << endl;
        cin >> num1;
        cout << "Num2?" << endl;
        cin >> num2;

        temp = num1;
        num1 = num2;
        num2 = temp;

        cout << num1 << endl;
        cout << num2 << endl;

    }
    void Task()
    {

        Swap_Numbers();

    }

}


