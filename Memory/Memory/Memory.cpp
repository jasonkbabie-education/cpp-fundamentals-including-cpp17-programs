// Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
using std::string;

int main()
{
	{
		Person Jason("Jason K.", "Babie", 99);
		Jason.AddResource();
		string s1 = Jason.GetResourceName();
		Jason.AddResource();
	}
	return 0;
}
