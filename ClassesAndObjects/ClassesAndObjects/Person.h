#pragma once
#include <string>

class Person
{
private:
	std::string firstName;
	std::string lastName;
	int arbitraryNumber;

public:
	Person(std::string firstName, std::string lastName, int arbitraryNumber);
	Person();
	~Person();
	std::string getName() const;
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int arbitrary) { arbitraryNumber = arbitrary; }

	bool operator<(Person const& p) const;
	bool operator<(int i) const;
};

bool operator<(int i, Person const& p);