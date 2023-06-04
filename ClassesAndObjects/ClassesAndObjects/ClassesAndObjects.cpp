// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

int main()
{
	Person p1("Jason K. ", "Babie", 13);
	{
		Person p2;
	}
	
	std::cout << "after inner most block" << std::endl;
	std::string name = p1.getName();

	return 0;
}