#pragma once

#include <iostream>
using namespace std;

namespace L50_P27 {

	void PrintfromNto1(int num) {
		while (num >= 1) {
			cout << num << endl;
			num--;
		}
	}

	void Task()
	{
		int N;
		cout << "Enter N?" << endl;
		cin >> N;
		PrintfromNto1(N);
	}


}
