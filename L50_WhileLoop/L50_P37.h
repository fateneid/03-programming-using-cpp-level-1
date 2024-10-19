#pragma once

#include <iostream>
using namespace std;

namespace L50_P37 {

    int SumUntilminus99() {
        int n;
        int arryOfnums[100];
        int i = 0;
        int sum = 0;

        cout << "Enter numbers to sum until -99:" << endl;
        cin >> n;


        while (n != -99) {
            arryOfnums[i] = n;
            sum += arryOfnums[i];
            cin >> n;
            i++;


        }
        return sum;

    }

    void Task()
    {
        cout << SumUntilminus99() << endl;
    }

}
