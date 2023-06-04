#pragma once
#include <string>
#include <iostream>
#include "Twitter.h"


Twitter::Twitter(std::string first, std::string last, int arbitrary, std::string handle) :
	Person(first, last, arbitrary),
	twitterhandle(handle) {
	std::cout << "constructing tweeter " << twitterhandle << std::endl;
}

Twitter::~Twitter() {
	std::cout << "destructing tweeter " << twitterhandle << std::endl;
}