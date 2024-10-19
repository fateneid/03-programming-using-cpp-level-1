#pragma once

#include <iostream>
using namespace std;

namespace L41_ArraysOfStructure {

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
		cout << "*******************************\n";
		cout << "First Name: " << Info.FirstName << endl;
		cout << "Last Name: " << Info.LastName << endl;
		cout << "Age: " << Info.Age << endl;
		cout << "Phone: " << Info.Phone << endl;
		cout << "*******************************\n";

	}

	void ReadInfo2(strInfo Persons[2]) {
		ReadInfo(Persons[0]);
		ReadInfo(Persons[1]);
	}

	void PrintInfo2(strInfo Persons[2]) {
		PrintInfo(Persons[0]);
		PrintInfo(Persons[1]);
	}

	void Task()
	{
		//strInfo Person1;
		strInfo Persons[2];

		/*ReadInfo(Person1);
		PrintInfo(Person1);*/

		ReadInfo2(Persons);
		PrintInfo2(Persons);

	}

}

