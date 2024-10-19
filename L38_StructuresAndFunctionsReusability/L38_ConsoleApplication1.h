#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace L38_ConsoleApplication1 {

    struct strInfo {
        string Name;
        short Age;
        string City;
        string Country;
        int MonthlySalary;
        //int YearlySalary;
        char Gender;
        bool Married;
    };


    void ReadInfo(strInfo& info) {
        cout << "Name?" << endl;
        getline(cin, info.Name);
        cout << "Age?" << endl;
        cin >> info.Age;
        cout << "City?" << endl;
        cin >> info.City;
        cout << "Country?" << endl;
        cin >> info.Country;
        cout << "Monthly Salary?" << endl;
        cin >> info.MonthlySalary;
        //cout << "Yearly Salary?" << endl;
        //cin >> info.YearlySalary;
        cout << "Gender?" << endl;
        cin >> info.Gender;
        cout << "Married?" << endl;
        cin >> info.Married;

    }

    void PrintInfo(strInfo info) {
        cout << "******************************************\n";
        cout << "Name: " << info.Name << endl;
        cout << "Age: " << info.Age << " years" << endl;
        cout << "City: " << info.City << endl;
        cout << "Country: " << info.Country << endl;
        cout << "Monthly Salary: " << info.MonthlySalary << endl;
        cout << "Yearly Salary: " << info.MonthlySalary * 12 << endl;
        cout << "Gender: " << info.Gender << endl;
        cout << "Married: " << info.Married << endl;
        cout << "******************************************\n";
    }


    void Task()
    {
        strInfo person1;
        ReadInfo(person1);
        PrintInfo(person1);


    }


}