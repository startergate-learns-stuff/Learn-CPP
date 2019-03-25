#include "stdafx.h"
#include <iostream>

using namespace std;

void Print(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void Reverse(int (arr)[], int size) {
	int temp[10];
	for (int i = size - 1; i >= 0; i--)
	{
		temp[size - i - 1] = arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = temp[i];
	}
}

int main() {
	const int size = 7;

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
	Reverse(arr, size);
	Print(arr, size);
}