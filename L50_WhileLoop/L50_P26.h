#pragma once

#include <iostream>
using namespace std;

namespace L50_P26 {

	void Printfrom1toN(int num) {

		int i = 1;
		while (i <= num) {
			cout << i << endl;
			i++;
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