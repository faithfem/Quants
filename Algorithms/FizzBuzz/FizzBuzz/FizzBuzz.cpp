// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
using std::cout;

int main()
{
	int num = 30;
	for (int i = 1; i <= num; i++)
	{
		cout << "\n";				//This line is so that each number prints on a separate line

		if (i % 15 == 0)
			cout << ("fizzbuzz");
		else if

			(i % 3 == 0)
			cout << ("fizz");

		else if

			(i % 5 == 0)
			cout << ("buzz");

		else cout << (i);
	}
	cout << "\n";
}


