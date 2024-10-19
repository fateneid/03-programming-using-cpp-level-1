#pragma once

#include <iostream>
using namespace std;

namespace L47_P27 {

	void PrintfromNto1(int num) {
		for (int i = num; i >= 1; i--) {
			cout << i << endl;
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

