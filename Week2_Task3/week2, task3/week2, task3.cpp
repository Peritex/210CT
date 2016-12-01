// week2, task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <array>
#include <iostream>
using namespace std;
//int temp[3][3];

void display(int arr[3][3])
{
	cout << endl << "matrix is: " << endl;
	for (int i = 0; i<3; ++i)
		for (int j = 0; j<3; ++j)
		{
			cout << arr[i][j] << "  ";
			if (j == 3 - 1)
				cout << endl;
		}
}

int getin(int arr[3][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter " << i+1 << "*" << j+1 << " value: ";
			cin >> arr[i][j];
		}
	return arr[3][3];
}

int add_arr(int a1[3][3], int a2[3][3])
{
	int sum[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			sum[i][j] = a1[i][j] + a2[i][j];
		}
	display(sum);
	return sum[3][3];
}


int main()
{
	
	int arr[3][3], brr[3][3], temp[3][3];
	getin(arr);
	getin(brr);
	temp[1][2] = add_arr(arr, brr);
//	display(arr);
//	display(brr);
	display(temp);
    return 0;
}

