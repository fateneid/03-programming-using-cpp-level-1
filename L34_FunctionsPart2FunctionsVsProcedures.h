#pragma once

#include <iostream>
using namespace std;

namespace L34_FunctionsPart2FunctionsVsProcedures {

    void MySumProcedure() {
        float num1, num2;
        cout << "Please enter Number1?" << endl;
        cin >> num1;
        cout << "Please enter Number2?" << endl;
        cin >> num2;
        cout << "**************************************" << endl;
        cout << num1 + num2 << endl;
    }

    float MySumFunction() {
        float num1, num2;
        cout << "Please enter Number1?" << endl;
        cin >> num1;
        cout << "Please enter Number2?" << endl;
        cin >> num2;
        cout << "**************************************" << endl;
        return num1 + num2;
    }

    void Task()
    {
        MySumProcedure();
        cout << MySumFunction() << endl;

    }

}

