// Cap1Ex2_5.cpp : Defines the entry point for the console application.
//


#include "cstdlib"
#include "stdafx.h"
#include "iostream"

using namespace std;
using std::cout;

int main()
{

	for (int column = 0; column < 20; ++column) {
		cout << "#";
	}

	cout << "\n";

	for (int row = 0; row < 8; ++row) {

		cout << "*";

		for (int column = 0; column < 18; ++column) {
			cout << " ";
		}
	

	cout << "*\n";
}

		for (int column = 0; column < 20; ++column) {
			cout << "*";
		}

			cout << "\n";


    return 0;
}

