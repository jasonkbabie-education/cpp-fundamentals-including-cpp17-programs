#pragma once
#include <string>
#include <iostream>
#include "Twitter.h"


Twitter::Twitter(std::string first, std::string last, int arbitrary, std::string handle) :
	Person(first, last, arbitrary),
	twitterhandle(handle) {
}

std::string Person::getName() const {
	return firstName + " " + lastName;
}