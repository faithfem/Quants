// Cap1Ex2_7CountDown.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using std::cout;


int main()
{
    
	for (int i = 0; i <= 10; i++) {
		cout << i;
		cout << "\n";
	}

	cout << "\n";

	for (int i = 10; i >= 0; i--) {
		cout << i;
		cout << "\n";
	}

	
	return 0;
}

