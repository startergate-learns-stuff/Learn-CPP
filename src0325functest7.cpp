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

void Sort(int(arr)[], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	const int size = 7;

	int arr[10] = { 7, 1, 3, 5, 6, 2, 4 };
	Sort(arr, size);
	Print(arr, size);
}