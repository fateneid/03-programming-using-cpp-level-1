#pragma once

#include <iostream>
using namespace std;

namespace L47_P46 {

    void PrintLettersfromAtoZ() {
        for (int i = 65; i <= 90; i++) {
            cout << char(i) << endl;
        }
    }

    void PrintLettersfromatoz() {
        for (int i = 97; i <= 122; i++) {
            cout << char(i) << endl;
        }
    }

    void Task()
    {
        PrintLettersfromAtoZ();
        PrintLettersfromatoz();
    }

}
