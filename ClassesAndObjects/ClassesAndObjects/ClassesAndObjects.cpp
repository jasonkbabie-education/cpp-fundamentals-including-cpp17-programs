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

template <class T>
T max(T const& t1, T const& t2) {
	return t1 > t2 ? t1 : t2;
}

int main()
{
	Person start("", "", 0);
	Accum<Person> people(0);
	Person p1("Jason K.", "Babie", 97);
	Person p2("Kate", "Gregory", 21);
	people += p1;
	people += p2;
	cout << people.GetTotal() << endl;
}