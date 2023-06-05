// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Twitter.h"
#include "status.h"
using std::cout;
using std::endl;


int main()
{
	Person p1("Jason K.", "Babie", 123);
	Person p2("Kate", "Gregory", 98);
	cout << "p1 is ";
	if (!(p1 < p2))
	{
		cout << "not ";
	}
	cout << "less than p2" << endl;

	cout << "p1 is ";
	if (!(p1 < 300))
	{
		cout << "not ";
	}
	cout << "less than 300" << endl;
	
	cout << "300 is ";
	if (!(300 < p1))
	{
		cout << "not ";
	}
	cout << "less than p1" << endl;
	return 0;
}