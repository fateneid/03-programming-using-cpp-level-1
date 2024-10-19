#pragma once

#include <iostream>
using namespace std;

namespace L50_P28 {

	int sumofodd(int num) {

		int i = 1, sum = 0;
		while (i <= num) {
			sum += i;
			i += 2;
		}
		return sum;
	}

	void Task()
	{
		int N;
		cout << "Enter N?" << endl;
		cin >> N;
		cout << sumofodd(N) << endl;
	}


}
