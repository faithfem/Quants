// Cap1Ex2_8Product.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
  

using std::cout;
using namespace std;


int main()
{
	int n;
	int factorial = 1;

	cout << "Enter a positive integer: ";
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}

	cout << "Factorial of " << n << " = " << factorial;
	cout << "\n";
	return 0;
}

