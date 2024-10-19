#pragma once

#include <iostream>
using namespace std;

namespace L26_P43 {

    void Task()
    {
        const int SecondsPerDay = 60 * 60 * 24, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
        int TotalSeconds;

        cout << "Eter the number of total seconds:" << endl;
        cin >> TotalSeconds;

        int Days = floor(TotalSeconds / SecondsPerDay);
        int remainder = TotalSeconds % SecondsPerDay;
        int Hours = floor(remainder / SecondsPerHour);
        remainder = remainder % SecondsPerHour;
        int Minutes = floor(remainder / SecondsPerMinute);
        remainder = remainder % SecondsPerMinute;
        int Seconds = remainder;

        cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;

    }

}
