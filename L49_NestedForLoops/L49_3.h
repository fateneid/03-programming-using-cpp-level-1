#pragma once

#include <iostream>
using namespace std;

namespace L49_3 {

    void PrintNums() {
        for (int i = 10; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }

    void Task()
    {
        PrintNums();
    }

}



