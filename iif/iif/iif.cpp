// iif.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include <string>

int main()
{
	int x = 99;
	while (x > 0)
	{
		cout << "Enter a number, 0 or negative to quit" << endl;
		cin >> x;
		string sign = x > 0 ? "positive" : "0 or negative";
		cout << "your number is " << sign << endl;
	}
	return 0;
}
