// UserName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

	//ask for the user's name
	//because there is no std::endl, program will wait for your input
	std::cout << "Please enter your first name: ";
	string name;
	cin >> name;
	
	//ask for padding size
	std::cout << "Please enter the amount of spacing to leave between the frame and greeting: ";
	int pad;	
	cin >> pad;
	

	//write the greeting
	const string greeting =  name ; //if u write 2 names, only the first prints ???
	const int spacing = pad;


	//the number of rows and columns to write
	const int rows = pad * 2+2; //creates rows as needed. We don't fix the # of rows e.g. by saying rows = 5; We need program to create as many rows as needed on its own
	const string::size_type cols = greeting.size() + pad * 2 + 2;//creates columns as needed

	//write a blank line to separate the output from the input
	cout << endl;
	
	
	//NESTED FOR LOOP
	//write rows of output
	for (int r = 0;r != rows;++r) {
		string::size_type c = 0;
		//invariant: we have written c characters for far in the current row
		while (c != cols) {

			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//are we on the borders?
				//if ANY of the conditions below are true, enter an asterix, otherwise, a space
				if (r == 0 || r == rows - 1 || //if either rows are zero (no rows) or rows minus 1, write asterix
					c == 0 || c == cols - 1) //if either columns are zero or columns minus 1, write asterix
					cout << "*";
				else
					cout << " ";

				++c;
			}
		}
		cout << endl;
	}
	return 0;
}

/*	const std::string spaces(greeting.size(), ' '); //using ( tells program to construct the variable spaces, from the expressions provided btw the ' '
	const std::string second = "* " + spaces + " @";
	const std::string first(second.size(), '#');

	std::cout << std::endl;
	std::cout << first << std::endl; //1st line spans length of greeting
	std::cout << second << std::endl; //2nd line has star and @ signs
	std::cout << "% " << greeting << " %" << std::endl; //percent sign either side of greeting
	std::cout << second << std::endl; //reprint second line
	std::cout << first << std::endl; //reprint first line
	


	//we know we have a top row, the greeting row and the last row, so 3 rows just to start with
	const int pad = 1;
	const int rows = pad * 2 + 3;
	
	std::cout << std::endl;

	int r = 0;

	while (r != rows) {
		std::cout << std::endl;
		++r;
	}


	
	int x = 3;
	int y = 4;
	int result = x * y;
	std::cout << result << std::endl;
		
	return 0;
}*/

