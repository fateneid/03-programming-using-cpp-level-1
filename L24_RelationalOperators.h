#pragma once

#include <iostream>
using namespace std;

namespace L24_RelationalOperators {

    void Task()
    {
        int A, B;

        cout << "Please enter the first number A?" << endl;
        cin >> A;
        cout << "Please enter the second number B?" << endl;
        cin >> B;

        cout << endl;
        cout << A << " = " << B << " is " << (A == B) << endl;
        cout << A << " != " << B << " is " << (A != B) << endl;
        cout << A << " > " << B << " is " << (A > B) << endl;
        cout << A << " < " << B << " is " << (A < B) << endl;
        cout << A << " >= " << B << " is " << (A >= B) << endl;
        cout << A << " <= " << B << " is " << (A <= B) << endl;
    }


}
