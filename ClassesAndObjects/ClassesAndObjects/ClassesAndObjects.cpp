// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Twitter.h"
#include "status.h"
#include "Accum.h"

using std::cout;
using std::endl;
using std::string;


int DoubleIt(int const& i) {
	return i * 2;
}

int main()
{
	Person Kate("Kate", "Gregory", 456);
	Person& rKate = Kate;
	Person* pKate = &Kate;

	Twitter KateGregcons("Kate", "Gregory", 567, "@gregons");
	Person* pKateGregcons = &KateGregcons;
	Person& rKateGregcons = KateGregcons;
	Twitter& rKateGregcons = KateGregcons;
}