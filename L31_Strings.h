#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace L31_Strings {

    void Task()
    {
        string str1, str2, str3;

        cout << "Please enter String1?" << endl;
        getline(cin, str1);
        cout << endl << "Please Enter String2?" << endl;
        cin >> str2;
        cout << endl << "Please Enter String3?" << endl;
        cin >> str3;
        cout << "***********************************" << endl;
        cout << "The Length of String1 is " << str1.length() << endl;
        cout << "Characters at 0,2,4,7 are: " << str1[0] << " " << str1[2] << " " << str1[4] << " " << str1[7] << endl;
        cout << "Concatenating String2 and String3 = " << str2 + str3 << endl;
        cout << str2 << " * " << str3 << " = " << stoi(str2) * stoi(str3) << endl;


    }

}


