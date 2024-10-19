#pragma once

#include <iostream>
using namespace std;

namespace L49_1 {

	void PrintAZ() {
		for (int i = 65; i <= 90; i++) {
			for (int j = 65; j <= 90; j++) {
				cout << char(i) << char(j) << endl;
			}
		}
	}


	void Task()
	{
		PrintAZ();
	}

}

