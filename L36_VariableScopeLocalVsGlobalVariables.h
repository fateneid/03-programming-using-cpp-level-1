#pragma once

#include <iostream>
using namespace std;

//int x = 500;

namespace L36_VariableScopeLocalVsGlobalVariables {


    void printx() {
        int x = 12;
        cout << "local x inside printx function equal " << x << endl;
    }

    void Task()
    {
        int x = 70;
        cout << "local x inside the main function equal " << x << endl;
        printx();
        cout << "global x equal " << ::x << endl;

        ::x++;
        cout << "global x after adding 1 equal " << ::x << endl;
    }


}

// uncomment the global x line to make code work
