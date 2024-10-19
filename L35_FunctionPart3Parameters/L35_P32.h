#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace L35_P32 {

    float powerofM(float num, float M) {
        return pow(num, M);
    }

    void Task()
    {
        float num, M;
        cout << "Enter the number:" << endl;
        cin >> num;
        cout << "Enter the power:" << endl;
        cin >> M;

        cout << powerofM(num, M) << endl;

    }

}
