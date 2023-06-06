#pragma once
#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

std::string Person::getName() const {
	return firstName + " " + lastName;
}

Person::Person(string first, string last, int arbitrary) :
	firstName(first),
	lastName(last),
	arbitraryNumber(arbitrary) {
}

Person::Person() : arbitraryNumber(0) {
}