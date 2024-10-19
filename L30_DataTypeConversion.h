#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace L30_DataTypeConversion {

    void Task()
    {
        string st1 = "43.22";
        int N1 = 20;
        double N2 = 33.5;
        float N3 = 55.23;

        int st1_to_int = stoi(st1);
        float st1_to_float = stof(st1);
        double st1_to_double = stod(st1);

        cout << "st1_to_int :" << st1_to_int << endl;
        cout << "st1_to_float :" << st1_to_float << endl;
        cout << "st1_to_double :" << st1_to_double << endl;

        string N1_to_string, N2_to_string, N3_to_string;

        N1_to_string = to_string(N1);
        N2_to_string = to_string(N2);
        N3_to_string = to_string(N3);

        cout << "N1_to_string :" << N1_to_string << endl;
        cout << "N2_to_string :" << N2_to_string << endl;
        cout << "N3_to_string :" << N3_to_string << endl;

        int N3_implicit_conv, N3_explicit1_conv, N3_explicit2_conv;

        N3_implicit_conv = N3;
        N3_explicit1_conv = (int)N3;
        N3_explicit2_conv = int(N3);

        cout << "N3_implicit_conv :" << N3_implicit_conv << endl;
        cout << "N3_explicit1_conv :" << N3_explicit1_conv << endl;
        cout << "N3_explicit2_conv :" << N3_explicit2_conv << endl;


    }

}

