#pragma once

#include <iostream>
using namespace std;

namespace L50_P46 {

    void PrintLettersfromAtoZ() {
        int i = 65;
        while (i <= 90) {
            cout << char(i) << endl;
            i++;
        }
    }

    void PrintLettersfromatoz() {
        int i = 97;
        while (i <= 122) {
            cout << char(i) << endl;
            i++;
        }
    }

    void Task()
    {
        PrintLettersfromAtoZ();
        PrintLettersfromatoz();
    }

}