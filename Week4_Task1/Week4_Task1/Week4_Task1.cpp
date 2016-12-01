// Week4_Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;

//mod binary search
int binarySearch(int arr[], int topvalue, int lowvalue, int left, int right) {
	while (left <= right) {
		int middle = (left + right) / 2;
		if ((arr[middle] <= topvalue) && (arr[middle] >= lowvalue))
			return true;
		else if (arr[middle] > topvalue)
			right = middle - 1;
		else if (arr[middle] < lowvalue)
			left = middle + 1;
	}
	return -1;
}

int main() {

	int list[50], high, low; // list size of 50
	for (int i = 0; i < 50; i++)// gen numbers for list 
		list[i] = i * 2;
	cout << "enter top number: ";
	cin >> high;
	cout << "\nenter low number: ";
	cin >> low;
	if (binarySearch(list, high, low, 0, 9) == true) //output selection
		cout << "\nFound Numbers between " << low << " & " << high << endl;
	else
		cout << "not found" << endl;
	return 0;
}

