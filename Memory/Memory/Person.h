#pragma once
#include <string>
#include "Resource.h"

class Person
{
private:
	std::string firstName;
	std::string lastName;
	int arbitraryNumber;
	std::shared_ptr<Resource> pResource;

public:
	Person(std::string firstName, std::string lastName, int arbitraryNumber);
	std::string getName() const;
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int arbitrary) { arbitraryNumber = arbitrary; }
	void AddResource();
	void SetFirstName(std::string name) { firstName = name; }
	std::string GetResourceName() const { return pResource ? pResource->GetName() : ""; }
	bool operator<(Person const& p) const;
	bool operator<(int i) const;
};

bool operator<(int i, Person const& p);