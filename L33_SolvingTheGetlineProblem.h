#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace L33_SolvingTheGetlineProblem {


    void Task()
    {
        //Lesson #33 - Solving the getline() Problem

        int num;
        string name, country;
        cout << "Number: " << endl;
        cin >> num;
        cout << "Full Name: " << endl;
        cin.ignore(1, '\n');
        getline(cin, name);
        cout << "Country: " << endl;
        cin >> country;
        cout << "Number: " << num << ", Full Name: " << name << ", Country: " << country << endl;
    }


}


