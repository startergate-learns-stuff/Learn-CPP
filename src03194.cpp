#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int boo1 = 2, boo2 = 3;
	int &foo = boo1;

	foo = boo2;

	cout << "foo: " << foo << endl;
	cout << "boo1: " << boo1<< endl;
	cout << "boo2: " << boo2 << endl;

	cout << "&foo: " << &foo << endl;
	cout << "&boo1: " << &boo1 << endl;
	cout << "&boo2: " << &boo2 << endl;
}