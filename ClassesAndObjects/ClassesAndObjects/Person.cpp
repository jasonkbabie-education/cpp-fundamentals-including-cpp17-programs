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
	cout << "constructing " << getName() << " " << endl;
}

Person::Person() : arbitraryNumber(0) {
	cout << "constructing " << getName() << endl;
}

Person::~Person() {
	cout << "destructing " << getName() << endl;
}

bool Person::operator<(Person const& p) const {
	return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i) const {
	return arbitraryNumber < i;
}

bool operator<(int i, Person const& p) {
	return i < p.GetNumber();
}