#include "stdafx.h"
#include <iostream>

using namespace std;

void Absolute(int &n) {
	if (n < 0) {
		n = n * -1;
	}
}

int main() {
	int a = 3;
	int b = -5;

	Absolute(a);
	Absolute(b);

	cout << a << endl;
	cout << b << endl;
}