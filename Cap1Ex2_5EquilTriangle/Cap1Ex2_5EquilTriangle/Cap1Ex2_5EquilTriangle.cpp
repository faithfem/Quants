// Cap1Ex2_5EquilTriangle.cpp : Defines the entry point for the console application.
//

#include "cstdblib"
#include "stdafx.h"
#include "iostream"

using namespace std;
using std::cout;

int main()
{
	int column;
	int row;

	for (row = 0; row <= 10; ++row)					//starting from first row, increase rows by 1 up to 10 rows max
	{
		cout << "\n";								//after each row it creates a new line

		for (column = 0; column < 10 * 2 - row - 1; column++)
		{
			if (column > row - 1)					//if column # is higher than the last row
				cout << "#";						//print a hashtab
			else
				cout << " ";						//otherwise, print a space
		}

	}

		for (row = 10; row >= 0; --row)				//starting from row 10, decrease rows by 1 till row 1
		{
			cout << "\n";

			for (column = 0; column < 10 * 2 - row - 1; column++)
			{
				if (column > row - 1)
					cout << "#";
				else
					cout << " ";
			}
		}

		cout << "\n";
	
	return 0;
}




