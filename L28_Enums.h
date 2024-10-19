#pragma once

#include <iostream>
using namespace std;

namespace L28_Enums {

    enum enGender { Male, Female };
    enum enStatus { Single, Married };
    enum enFavColor { Red, Yellow, Green, Blue };

    struct stInfo {
        string name;
        short age;
        string city;
        string country;
        float MonthlySalary;
        float YearlySalary;
        enGender Gender;
        enStatus Status;
        enFavColor FavColor;
    };

    void Task()
    {
        stInfo card1;

        card1.name = "Faten Eid Farid";
        card1.age = 23;
        card1.city = "the 10th of Ramadan city";
        card1.country = "Egypt";
        card1.MonthlySalary = 10000;
        card1.YearlySalary = 120000;
        card1.Gender = enGender::Female;
        card1.Status = enStatus::Single;
        card1.FavColor = enFavColor::Green;

        cout << "********************************" << endl;
        cout << card1.name << endl;
        cout << card1.age << endl;
        cout << card1.city << endl;
        cout << card1.country << endl;
        cout << card1.MonthlySalary << endl;
        cout << card1.YearlySalary << endl;
        cout << card1.Gender << endl;
        cout << card1.Status << endl;
        cout << card1.FavColor << endl;
        cout << "********************************" << endl;
    }

}

