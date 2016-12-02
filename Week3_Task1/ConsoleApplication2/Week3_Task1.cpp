// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char s[] = ":) works this Hopefully";
	std::cout << s << '\n';

	size_t len = 0, i, j;
	while (s[len])
		++len;

	// reverse entire sequence
	i = 0, j = len;
	while (i < j--)
	{
		char c = s[i]; // or use std::swap
		s[i++] = s[j];
		s[j] = c;
	}

	// walk again, reversing each word.
	i = 0;
	while (s[i])
	{
		// skip ws; root 'i' at beginning of word
		while (s[i] == ' ') // or use std::isspace
			++i;

		// skip until ws or eos; root 'j' at one-past end of word
		j = i;
		while (s[j] && s[j] != ' ') // or use !std::isspace
			++j;

		// remember the last position
		size_t last = j;
		while (i < j--)
		{
			char c = s[i]; // or use std::swap
			s[i++] = s[j];
			s[j] = c;
		}

		// start at last-left posiion
		i = last;
	}

	std::cout << s << '\n';
	return 0;
}

