#pragma once

#include <iostream>
using namespace std;

namespace L43_P34 {

    void Task()
    {
        float TotalSales;

        cout << "Total Sales?" << endl;
        cin >> TotalSales;

        if (TotalSales >= 1000000) {
            cout << (TotalSales * .01);
        }
        else if (TotalSales >= 500000 && TotalSales < 1000000) {
            cout << (TotalSales * .02);
        }
        else if (TotalSales >= 100000 && TotalSales < 500000) {
            cout << (TotalSales * .03);
        }
        else if (TotalSales >= 50000 && TotalSales < 100000) {
            cout << (TotalSales * .05);
        }
        else {
            cout << (TotalSales * 0);
        }
    }

}

