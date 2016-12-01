// Week1_Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	long long int num, count = 0, factor = 1; // init a 64byte int var
	std::cout << "Enter a number, up to 20" << std::endl;
	std::cin >> num;
	for (int i = 1; i <= num; i++) // factorial genaration
	{
		factor = factor*i;
	}
	while ((factor%10) == 0)// if / by 10 then ends in 0
	{
		factor = factor / 10;
		count += 1;
	}
	std::cout << count << std::endl;
    return 0;
}

