#pragma once

#include <iostream>
using namespace std;

namespace L20_P40 {

    void Task()
    {
        float BillValue, TotalBill;

        cout << "Enter the Bill Value:" << endl;
        cin >> BillValue;

        TotalBill = BillValue * 1.1 * 1.16;

        cout << TotalBill << endl;


    }

}
