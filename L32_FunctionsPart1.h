#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace L32_FunctionsPart1 {

    void DisplayMyCardInfo() {
        cout << "*******************************" << endl;
        cout << "Name: Mohamed Abu-Hadhoud." << endl;
        cout << "Age: 44 Years." << endl;
        cout << "City: Amman." << endl;
        cout << "Country: Jordon." << endl;
        cout << "*******************************" << endl;
    }

    void PrintSquareStars() {
        cout << "********\n";
        cout << "********\n";
        cout << "********\n";
        cout << "********\n";
    }

    void PrintILoveProgramming() {
        cout << "I Love Programming!" << endl << endl;
        cout << "I Promise to be the best developer ever!" << endl << endl;
        cout << "I know it will take some time to practice, but I will achieve my goal." << endl << endl;
        cout << "Best Regards," << endl;
        cout << "Faten Eid." << endl;
    }

    void PrintH() {

        std::cout << "*   *\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        std::cout << "*   *\n";
        std::cout << "*   *\n";
    }

    void Break() {
        cout << "__________________________________________________" << endl << endl;
    }



    void Task()
    {
        DisplayMyCardInfo();
        Break();
        PrintSquareStars();
        Break();
        PrintILoveProgramming();
        Break();
        PrintH();

    }

}




