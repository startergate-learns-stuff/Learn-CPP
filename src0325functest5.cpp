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

int main() {
	const int size = 7;

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
	Print(arr, size);
}