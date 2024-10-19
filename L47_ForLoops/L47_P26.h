#pragma once

#include <iostream>
using namespace std;

namespace L47_P26 {

	void Printfrom1toN(int num) {

		for (int i = 1; i <= num; i++) {
			cout << i << endl;
		}

	}


	void Task()
	{
		int N;
		cout << "Enter N?" << endl;
		cin >> N;
		Printfrom1toN(N);


	}

}

