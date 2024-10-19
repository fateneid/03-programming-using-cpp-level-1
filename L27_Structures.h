#pragma once

#include <iostream>
using namespace std;

namespace L27_Structures {

    struct info_family_members {
        short number;
        short sisters;
        short brothers;
        string father;
        string mother;
    };


    struct info_card {
        string name;
        short age;
        string city;
        string country;
        float MonthlySalary;
        float YearlySalary;
        char gender;
        bool Married;
        info_family_members family;
    };

    void Task()
    {
        info_card card1;

        card1.name = "Faten Eid Farid";
        card1.age = 23;
        card1.city = "the 10th of Ramadan city";
        card1.country = "Egypt";
        card1.MonthlySalary = 10000;
        card1.YearlySalary = 120000;
        card1.gender = 'F';
        card1.Married = 0;
        card1.family.number = 6;
        card1.family.brothers = 1;
        card1.family.sisters = 3;
        card1.family.father = "Eid";
        card1.family.mother = "Fatema";


        cout << "********************************" << endl;
        cout << card1.name << endl;
        cout << card1.age << endl;
        cout << card1.city << endl;
        cout << card1.country << endl;
        cout << card1.MonthlySalary << endl;
        cout << card1.YearlySalary << endl;
        cout << card1.gender << endl;
        cout << card1.Married << endl;
        cout << card1.family.number << endl;
        cout << card1.family.brothers << endl;
        cout << card1.family.sisters << endl;
        cout << card1.family.father << endl;
        cout << card1.family.mother << endl;
        cout << "********************************" << endl;

    }

}


