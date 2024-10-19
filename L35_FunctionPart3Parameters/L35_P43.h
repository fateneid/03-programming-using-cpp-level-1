#pragma once

#include <iostream>
#include<string>
using namespace std;

namespace L35_P43 {

    string time(int TotalSeconds) {

        const int SecondsPerDay = 60 * 60 * 24, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;

        int Days = floor(TotalSeconds / SecondsPerDay);
        int remainder = TotalSeconds % SecondsPerDay;
        int Hours = floor(remainder / SecondsPerHour);
        remainder = remainder % SecondsPerHour;
        int Minutes = floor(remainder / SecondsPerMinute);
        remainder = remainder % SecondsPerMinute;
        int Seconds = remainder;

        string result = to_string(Days) + ':' + to_string(Hours) + ':' + to_string(Minutes) + ':' + to_string(Seconds);
        return result;

    }

    void Task()
    {
        int TotalSeconds;

        cout << "Eter the number of total seconds:" << endl;
        cin >> TotalSeconds;

        cout << time(TotalSeconds);

    }

}