// Cap1Ex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	std::cout << "Enter your first name: "; //ask user for input
	string firstName;
	cin >> firstName;
	

	std::cout << "Enter your last name: "; //ask user for input
	string lastName;
	cin >> lastName;

	const string person = "Hello " + firstName + " " + lastName;

	cout << person;
	cout << endl;
	return 0;
}

