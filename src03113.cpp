#include "stdafx.h"
#include <iostream>

using namespace std;

int Add(int a, int b, int c) {
	cout << "Add(int, int, int): ";
	return a + b + c;
}

int Add(int a, int b) {
	cout << "Add(int, int): ";
	return a + b;
}

double Add(double a, double b) {
	cout << "Add(double, double): ";
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << Add(1, 2, 3) << endl;
	cout << Add(1, 2) << endl;
	cout << Add(1.2, 2.3) << endl;
}