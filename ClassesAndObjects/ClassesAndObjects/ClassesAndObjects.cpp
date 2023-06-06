// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Twitter.h"
#include "status.h"
#include "Accum.h"

using std::cout;
using std::endl;
using std::string;


int DoubleIt(int const& i) {
	return i * 2;
}

int main()
{
	int i = 3;
	int const ci = 3;
	i = 4;
	int& ri = i;
	ri = 5;
	int const& cri = i;

	int j = 10;
	int doubleJ = DoubleIt(j);
	int doubleTen = DoubleIt(10);

	int* pI = &i;
	//int* pII = &pI;
	//pI = &Kate;

	int const* pcI = pI;
	//pcI = 4;
	pcI = &j;
	j = *pcI;

	int* const cpI = pI;
	*cpI = 4;
	//cpI = &j;


}