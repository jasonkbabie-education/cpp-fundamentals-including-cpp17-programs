// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Twitter.h"
#include "Resource.h"

using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::make_shared;

int DoubleIt(int const& i) {
	return i * 2;
}

int main()
{
	Twitter t("Kate", "Gregory", 129, "@gregcons");
	Person* p = &t;
	Twitter* pt = static_cast<Twitter*>(p);
	cout << pt->getName() << endl;

	Resource r("local");
	Twitter* pt2;
	cout << "Use Resource or Twitter?" << endl;
	std::string answer;
	std::cin >> answer;
	if (answer == "r")
	{
		pt2 = dynamic_cast<Twitter*>(&r);
	}
	else
	{
		pt2 = dynamic_cast<Twitter*>(p);
	}
	if (pt2)
	{
		cout << pt2->getName() << endl;
	}
	else
	{
		cout << "pointer can't be cast to twitter" << endl;
	}
	return 0;
}