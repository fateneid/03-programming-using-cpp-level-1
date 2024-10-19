#pragma once

#include <iostream>
using namespace std;

namespace L18_1 {

    void Task()
    {
        string Name;
        short Age;
        string City;
        string Country;
        float Monthly_Salary;
        char Gender;
        bool isMarried;
        string star = "*********************************";

        cout << "Please enter your name?" << endl;
        cin >> Name;

        cout << "Please enter your age?" << endl;
        cin >> Age;

        cout << "Please enter your city?" << endl;
        cin >> City;

        cout << "Please enter your country?" << endl;
        cin >> Country;

        cout << "Please enter your monthly salary?" << endl;
        cin >> Monthly_Salary;

        cout << "Please enter your gender? M/F" << endl;
        cin >> Gender;

        cout << "Are you married? true/false" << endl;
        cin >> isMarried;

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


