// StudentGrades.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"			//controls the << >>
/*#include "ios"
#include "iomanip"*/

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "! " << endl;

	//as for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;


	
	return 0;
}

