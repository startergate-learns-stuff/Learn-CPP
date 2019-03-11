#include "stdafx.h"
#include <iostream>

using namespace std;

int Minus(int a, int b) {
	return a - b;
}

double Minus(double a, double b) {
	return a - b;
}

int Minus(double a, double b, double c) {
	return a - b - c;
}

int Minus(double a, double b, int c) {
	return a - b - c;
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << Minus(2, 1) << endl;
	cout << Minus(2.1, 0.9) << endl;
	cout << Minus(6.5, 4.3, 2.1) << endl;
	cout << Minus(5.4, 3.2, 1) << endl;
}