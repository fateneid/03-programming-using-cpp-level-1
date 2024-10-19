#pragma once

#include <iostream>
#include <string>
using namespace std;


namespace L35_P2 {

    void PrintMyName() {

        cout << "Please Enter Your Name:" << endl;
        string Name;
        getline(cin, Name);

        cout << Name << endl;
    }

    void Task()
    {

        PrintMyName();

    }

}



