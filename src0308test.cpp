#include "stdafx.h"
#include <iostream>
using namespace std;

/*int _tmain(int argc, _TCHAR* argv[]) {
	char* arr = new char[12];

	delete[] arr;
}*/

/*void Swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int _tmain(int argc, _TCHAR* argv[]) {
	int a = 3, b = 4;
	cout << a << ", " << b << endl;
	Swap(a, b);
	cout << a << ", " << b << endl;
}*/

int _tmain(int argc, _TCHAR* argv[]) {
	int aList[5] = { 20, 30, 40, 50, 10 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (aList[i] > aList[j]) {
				int temp;
				temp = aList[i];
				aList[i] = aList[j];
				aList[j] = temp;
			}
		}
	}
	for (auto i : aList)
		cout << i << endl;
	//-> 10, 20, 30, 40, 50
}