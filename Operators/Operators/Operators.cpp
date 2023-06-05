// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 2;
	if (i == 3)
		cout << "i is 3" << endl;
	cout << "i " << i << endl;
	if (i = 3)
		cout << "i is 3" << endl;
	cout << "i " << i << endl;
	i = 4;
	if (3 == 1)
		cout << "i is 3" << endl;
	cout << "i " << i << endl;

	int i = 0;
	i += 2;
	i *= 3;
	i -= 2;
	i /= 4;

	int j = i++;
	j = ++i;
	j = i--;
	j = --i;

	i = 2;
	j = 0;
	while (i < 101)
		j += i > 5 ? 1 : 0;
	cout << "I found " << j << " primes up to 100" << endl;
}
