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
	arbitraryNumber(arbitrary)
{
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

void Person::AddResource() {
	pResource.reset();
	pResource = std::make_shared<Resource>("Resource for " + getName());
}