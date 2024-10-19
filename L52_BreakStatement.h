#pragma once

#include <iostream>
using namespace std;

namespace L52_BreakStatement {

    void PrintPosition(int num) {

        int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
        for (int i = 0; i <= 10; i++) {
            if (arr[i] == num) {
                cout << i << endl;
                break;
            }
        }
    }

    void Task()
    {
        int num;
        cout << "Please enter a number:" << endl;
        cin >> num;
        PrintPosition(num);
    }

}
