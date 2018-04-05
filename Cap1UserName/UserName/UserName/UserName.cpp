// UserName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"


int main()
{
    
	//ask for the user's name
	//because there is no std::endl, program will wait for your input
	std::cout << "Please enter your first name: ";

	//read the name
	std::string name;
	std::cin >> name;

	//write the greeting
	//std::cout << "Hello, " << name << "!" << std::endl;

	//create variables
	const std::string greeting = "Hello, " + name + "!"; //if u write 2 names, only the first prints ???
	const std::string spaces(greeting.size(), ' '); //using ( tells program to construct the variable spaces, from the expressions provided btw the ' '
	const std::string second = "* " + spaces + " @";
	const std::string first(second.size(), '#');

	std::cout << std::endl;
	std::cout << first << std::endl; //1st line spans length of greeting
	std::cout << second << std::endl; //2nd line has star and @ signs
	std::cout << "% " << greeting << " %" << std::endl; //percent sign either side of greeting
	std::cout << second << std::endl; //reprint second line
	std::cout << first << std::endl; //reprint first line

	
	int x = 3;
	int y = 4;
	int result = x * y;
	std::cout << result << std::endl;
		
	return 0;
}

