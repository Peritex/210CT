// Week3_Task3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

int main() {
	char *text;
	text = new char[25]; //max length of word

	std::cout << "Insert the Word" << std::endl;
	std::cin >> text;

	for (int i = 0; text[i] != '\0'; i++) //loop untill \0
	{
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') 
		{
			text[i] = ' '; //replace with " "
		}
	}
	std::cout << text << std::endl;
	return 0;
}

