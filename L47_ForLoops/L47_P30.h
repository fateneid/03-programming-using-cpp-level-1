#pragma once

#include <iostream>
using namespace std;

namespace L47_P30 {

    int FactorialOfN(int n) {
        int fac = 1;
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
        return fac;
    }


    void Task()
    {
        int N;
        cout << "Eter N?" << endl;
        cin >> N;

        cout << FactorialOfN(N) << endl;

    }


}
