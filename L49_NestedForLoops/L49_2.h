#pragma once

#include <iostream>
using namespace std;

namespace L49_2 {

    void PrintStars() {
        for (int i = 10; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }

    void Task()
    {
        PrintStars();
    }

}

