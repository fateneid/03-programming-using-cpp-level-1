#pragma once

#include <iostream>
using namespace std;

namespace L37_P14 {

    //Lesson #37 - Function Parameters - By-Val vs By-Ref

    void Swap_Numbers(int& num1, int& num2) {

        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;

        cout << "first number insise the function after swapping: " << num1 << endl;
        cout << "second number insise the function after swapping: " << num2 << endl;

    }

    void Task()
    {
        int num1, num2;
        cout << "Num1?" << endl;
        cin >> num1;
        cout << "Num2?" << endl;
        cin >> num2;

        cout << "first number out the function before swapping: " << num1 << endl;
        cout << "second number out the function before swapping: " << num2 << endl;

        Swap_Numbers(num1, num2);

        cout << "first number out the function after swapping: " << num1 << endl;
        cout << "second number out the function after swapping: " << num2 << endl;

    }


}
