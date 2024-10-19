#pragma once

#include <iostream>
#include <Cmath>

using namespace std;

namespace L26_P31 {

    void Task()
    {
        float num;

        cout << "Please enter number:" << endl;
        cin >> num;


        cout << round(pow(num, 2)) << endl;
        cout << round(pow(num, 3)) << endl;
        cout << round(pow(num, 4)) << endl;

    }

}

