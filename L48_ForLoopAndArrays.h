#pragma once

#include <iostream>
using namespace std;

namespace L48_ForLoopAndArrays {

	struct strInfo {
		string FirstName;
		string LastName;
		short Age;
		string Phone;
	};

	void ReadInfo(strInfo& Info) {
		cout << "First Name?" << endl;
		cin >> Info.FirstName;
		cout << "Last Name?" << endl;
		cin >> Info.LastName;
		cout << "Age?" << endl;
		cin >> Info.Age;
		cout << "Phone?" << endl;
		cin >> Info.Phone;
	}

	void PrintInfo(strInfo Info) {
		cout << "\n*******************************\n";
		cout << "First Name: " << Info.FirstName << endl;
		cout << "Last Name: " << Info.LastName << endl;
		cout << "Age: " << Info.Age << endl;
		cout << "Phone: " << Info.Phone << endl;
		cout << "*******************************\n\n";

	}

	void ReadInfo2(strInfo Persons[100], int& n) {

		cout << "How many persons?" << endl;
		cin >> n;

		for (int i = 0; i <= n - 1; i++) {
			cout << "Please enter person's " << i + 1 << " info:" << endl;
			ReadInfo(Persons[i]);
		}
	}

	void PrintInfo2(strInfo Persons[100], int n) {
		for (int i = 0; i <= n - 1; i++) {
			cout << "Person's " << i + 1 << " info:" << endl;
			PrintInfo(Persons[i]);

		}
	}

	void Task()
	{

		int numofpersons;
		strInfo Persons[100];
		ReadInfo2(Persons, numofpersons);
		PrintInfo2(Persons, numofpersons);

	}

}

