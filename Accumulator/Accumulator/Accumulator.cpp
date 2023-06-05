// Accumulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Accum.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
	Accum<int> integers(0);
	integers += 4;
	integers += 7;
	cout << integers.GetTotal() << endl;
	Accum<string> strings("");
	strings += "Jason K. ";
	strings += "Babie";
	cout << strings.GetTotal() << endl;
}
