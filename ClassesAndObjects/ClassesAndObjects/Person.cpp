#pragma once
#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

std::string Person::getName() {
	return firstName + lastName;
}

Person::Person(string first, string last, int arbitrary) :
	firstName(first),
	lastName(last),
	arbitraryNumber(arbitrary) {
	cout << "constructing " << getName() << " " << endl;
}

Person::Person() : arbitraryNumber(0) {
	cout << "constructing " << firstName << lastName << endl;
}

Person::~Person() {
	cout << "destructing " << firstName << " " << lastName << endl;
}