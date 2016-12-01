// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	using namespace std;
	string input, output;
	int last = 0;
	cout << "Enter words:";
	getline(cin, input);
//	last = input.size();
	for (int i = input.size(); i >= 0; i--)
	{
//		cout << i << endl;
		if (input.compare(i, 1, " ") == 0)
		{
			last = i;
			cout << input.substr(i, last) << endl;
		}
		else if (i < 1)
		{
			cout << input.substr(i, last) << endl;
		}
	}

    return 0;
}

