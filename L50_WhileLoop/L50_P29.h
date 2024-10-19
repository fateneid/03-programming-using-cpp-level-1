#pragma once

#include <iostream>
using namespace std;

namespace L50_P29 {

	int sumofeven(int num) {
		int i = 0, sum = 0;
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
		cout << sumofeven(N) << endl;
	}

}
