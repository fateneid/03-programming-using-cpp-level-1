#pragma once

#include <iostream>
using namespace std;

namespace L20_P47 {

    void Task()
    {
        int LoanAmount, MonthlyPayment;

        cout << "Enter the Loan Amount:" << endl;
        cin >> LoanAmount;
        cout << "Enter the Monthly Payment:" << endl;
        cin >> MonthlyPayment;

        cout << endl << LoanAmount / MonthlyPayment << " Months" << endl;

    }

}
