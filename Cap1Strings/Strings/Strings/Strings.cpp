// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"


int main()
{
	//ask for the user's name
	std::cout << "Please enter your first name: ";

	//read the name
	std::string name;
	std::cin >> name;

	//write the greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	
	return 0;
}

