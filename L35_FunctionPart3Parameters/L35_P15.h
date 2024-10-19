#pragma once

#include <iostream>
using namespace std;

namespace L35_P15 {

	float find_area(float a, float b) {
		return a * b;
	}

	void Task()
	{
		float a, b;
		cout << "a?" << endl;
		cin >> a;
		cout << "b?" << endl;
		cin >> b;

		cout << find_area(a, b) << endl;


	}

}

