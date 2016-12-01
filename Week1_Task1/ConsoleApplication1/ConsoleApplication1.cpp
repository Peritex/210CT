// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)//pointer swap function
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarray (int arr[], int n)
{
	for (int i = 0; i < 8; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void shuffle(int arr[], int n)
{
	srand(time(NULL)); //random num gen
	//shuffle over array
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		swap(&arr[i], &arr[j]);
	}
}

void getinput(int arr[]) 
{
	std::cout << "Input Numbers" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> arr[i];
	}
}


int main()
{
	int arr[8];
	getinput(arr);
	int n = sizeof(arr) / sizeof(arr[0]);
	printarray(arr, n);
	shuffle(arr, n);
	printarray(arr, n);
    return 0;
}

