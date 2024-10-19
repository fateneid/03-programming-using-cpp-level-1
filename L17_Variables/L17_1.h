#pragma once

#include <iostream>
using namespace std;

namespace L17_1 {

    void Task()
    {
        string Name = "Mohammed Abu-Hadhoud";
        short Age = 44;
        string City = "Amman";
        string Country = "Jordon";
        float Monthly_Salary = 5000;
        char Gender = 'M';
        bool isMarried = true;
        string star = "*********************************";

        cout << star << endl;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << " years" << endl;
        cout << "City: " << City << endl;
        cout << "Country: " << Country << endl;
        cout << "Monthly Salary: " << Monthly_Salary << endl;
        cout << "Yearly Salary: " << Monthly_Salary * 12 << endl;
        cout << "Gender: " << Gender << endl;
        cout << "Married: " << isMarried << endl;
        cout << star << endl;

    }


}