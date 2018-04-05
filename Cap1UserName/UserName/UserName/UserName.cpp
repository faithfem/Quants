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

	const std::string greeting = "Hello, " + name + "!";
	
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " @";
	const std::string first(second.size(), '#');

	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " %" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	
	int x = 3;
	int y = 4;
	int result = x * y;
	std::cout << result << std::endl;
		
	return 0;
}

