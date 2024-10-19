#pragma once

#include <iostream>
using namespace std;

namespace L47_P29 {

	int sumofeven(int num) {
		int count = 0;
		for (int i = 0; i <= num; i = i + 2) {
			count += i;
		}
		return count;
	}

	void Task()
	{
		int N;
		cout << "Enter N?" << endl;
		cin >> N;
		cout << sumofeven(N) << endl;
	}


}
