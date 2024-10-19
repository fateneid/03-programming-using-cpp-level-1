#pragma once

#include <iostream>
using namespace std;

namespace L50_P32 {

    int powerOfM(int n, int m) {

        int result = 1, i = 1;
        while (i <= m) {
            result *= n;
            i++;
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

