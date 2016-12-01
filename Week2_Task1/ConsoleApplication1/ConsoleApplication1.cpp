// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int math(int num)//finds the ^2
{
	num = std::sqrt(num);
	num = std::floor(num);//not needed 
	num = std::pow(num, 2);
	return num;
}

int main()
{
	int max;
	int ans;
	std::cout << "Enter a number: ";
	std::cin >> max;
	ans = math(max);
	std::cout << ans << std::endl;
    return 0;
}

