#pragma once

#include <iostream>
using namespace std;

namespace L39_Arrays {

    void Task()
    {
        float Grades[3];

        cout << "Please Enter Grade1?" << endl;
        cin >> Grades[0];
        cout << "Please Enter Grade2?" << endl;
        cin >> Grades[1];
        cout << "Please Enter Grade3?" << endl;
        cin >> Grades[2];
        cout << "*************************************\n";
        cout << "The average of grades is " << (Grades[0] + Grades[1] + Grades[2]) / 3 << endl;

    }


}