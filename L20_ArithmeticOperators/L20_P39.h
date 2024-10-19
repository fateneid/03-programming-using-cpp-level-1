#pragma once

#include <iostream>
using namespace std;

namespace L20_P39 {

    void Task()
    {
        float TotalBill, CashPaid;
        cout << "Enter the Cash Paid:" << endl;
        cin >> CashPaid;
        cout << "Enter the Total Bill:" << endl;
        cin >> TotalBill;

        cout << TotalBill - CashPaid << endl;

    }


}

