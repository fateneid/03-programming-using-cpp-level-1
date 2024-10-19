#pragma once

#include <iostream>
using namespace std;

namespace L20_P48 {

    void Task()
    {
        int LoanAmount, TotalMonths;

        cout << "Enter the Loan Amount:" << endl;
        cin >> LoanAmount;
        cout << "Enter the Total Months:" << endl;
        cin >> TotalMonths;

        cout << endl << LoanAmount / TotalMonths << endl;

    }

}