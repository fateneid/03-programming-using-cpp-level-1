#pragma once

#include <iostream>
using namespace std;

namespace L47_P32 {

    int powerOfM(int n, int m) {
        int result = 1;
        for (int i = 1; i <= m; i++) {
            result = result * n;
        }
        return result;
    }

    void Task()
    {
        int num, M;
        cout << "Enter the number?" << endl;
        cin >> num;
        cout << "Enter the power?" << endl;
        cin >> M;
        cout << powerOfM(num, M) << endl;
    }


}

