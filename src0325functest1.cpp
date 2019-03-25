#include "stdafx.h"
#include <iostream>

using namespace std;

int IncrementPrev(int &a) {
	return ++a;
}

int IncrementPost(int &a) {
	int d = a++;
	return d;
}

int main() {
	int a = 1;
	cout << IncrementPrev(a) << endl;
	cout << a << endl;
	a = 1;
	cout << IncrementPost(a) << endl;
	cout << a << endl;
}

// 1¹ø