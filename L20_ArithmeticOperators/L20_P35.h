#pragma once

#include <iostream>
using namespace std;

namespace L20_P35 {

    void Task()
    {
        int Pennies, Nickels, Dimes, Quarters, Dollars;

        cout << "Enter the number of Pennies:" << endl;
        cin >> Pennies;
        cout << "Enter the number of Nickels:" << endl;
        cin >> Nickels;
        cout << "Enter the number of Dimes:" << endl;
        cin >> Dimes;
        cout << "Enter the number of Quarters:" << endl;
        cin >> Quarters;
        cout << "Enter the number of Dollars:" << endl;
        cin >> Dollars;

        float Total_Pennies = Pennies * 1 + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
        float Total_Dollars = Total_Pennies / 100;

        cout << endl << Total_Pennies << " Pennies" << endl;
        cout << Total_Dollars << " Dollars" << endl;

    }

}

