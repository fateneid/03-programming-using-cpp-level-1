#pragma once

#include <iostream>
using namespace std;

namespace L50_P30 {

    int FactorialOfN(int n) {

        while (n < 0) {
            cout << "Wrong number, Please enter a valid positive number:\n";
            cin >> n;
        }

        int fac = 1;
        while (n >= 1) {
            fac *= n;
            n--;
        }
        return fac;
    }


    void Task()
    {
        int N;
        cout << "Enter N?" << endl;
        cin >> N;

        cout << FactorialOfN(N) << endl;

    }

}