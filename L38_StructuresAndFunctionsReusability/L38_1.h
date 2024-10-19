#pragma once

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace L38_1 {

    double HowMuchMoney() {
        int count = 0;
        double result = 200 * 1.1;
        count++;
        if (count < 30) {
            return result;
        }
        else {
            return 0;
        }
    }

    void Task()
    {
        cout << HowMuchMoney() << endl;

    }


}
