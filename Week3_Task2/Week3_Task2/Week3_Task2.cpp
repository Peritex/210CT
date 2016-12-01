// Week3_Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isPrime(int n, int d = 3)
{
	if (n<2)
		return 0;
	if (d > 10)
		return true;
	else
	{
		if (n % d == 0)
			return false;
		else
			return isPrime(n, d + 2);
	}
}

int main()
{
	int in = 0;
	bool out;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> in;
	out = isPrime(in, 3);
	if (out == true)
	{
		std::cout << "prime" << std::endl;
	}
	else
		std::cout << "not prime" << std::endl;
    return 0;
}

