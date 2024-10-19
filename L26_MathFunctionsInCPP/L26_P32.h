#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P32 {

    void Task()
    {
        float num;
        int m;

        cout << "Please enter the number:" << endl;
        cin >> num;
        cout << "Please enter the power:" << endl;
        cin >> m;

        cout << round(pow(num, m)) << endl;

    }

}