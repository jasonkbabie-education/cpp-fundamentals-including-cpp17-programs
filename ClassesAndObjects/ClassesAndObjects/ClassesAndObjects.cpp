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
	Person p1("Jason K. ", "Babie", 13);
	{
		Twitter t1("Kate", "Gregory", 456, "@kategregory");
	}
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.getName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(123);
	cout << "p1: " << p1.getName() << " " << p1.GetNumber() << endl;

	return 0;
}