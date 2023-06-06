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
	virtual std::string getName() const;
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int arbitrary) { arbitraryNumber = arbitrary; }
};