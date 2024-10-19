#pragma once

#include <iostream>
using namespace std;

namespace L53_ContinueStatement {

    void Task()
    {
        int num;
        int sum = 0;
        cout << "Enter 5 numbers to sum (below 50)" << endl;

        for (int i = 1; i <= 5; i++) {
            cin >> num;
            if (num > 50) {
                continue;
            }
            sum += num;
        }
        cout << sum << endl;

    }

}
