#pragma once

#include <iostream>
using namespace std;

namespace L49_5 {

    void PrintAtoF() {
        for (int i = 65; i <= 70; i++) {
            for (int j = 65; j <= i; j++) {
                cout << char(j) << " ";
            }
            cout << "\n";
        }
    }

    void Task()
    {
        PrintAtoF();

    }

}