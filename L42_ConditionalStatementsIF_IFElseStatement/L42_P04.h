#pragma once

#include <iostream>
using namespace std;

namespace L42_P04 {


    void Task()
    {
        short age;
        string HavingADriverLicense;
        cout << "Please enter your age? " << endl;
        cin >> age;
        cout << "Do you have a driver license? yes/no" << endl;
        cin >> HavingADriverLicense;

        if (age > 21 && HavingADriverLicense == "yes") {
            cout << "Hired" << endl;
        }
        else {
            cout << "Rejected" << endl;
        }


    }

}

