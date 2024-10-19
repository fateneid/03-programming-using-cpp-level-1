#pragma once

#include <iostream>
using namespace std;

namespace L49_6 {

	void PrintNums() {
		for (int i = 1; i <= 10; i++) {
			for (int j = i; j <= 10; j++) {
				cout << j << " ";
			}
			cout << "\n";
		}
	}

	void Task()
	{
		PrintNums();
	}

}
