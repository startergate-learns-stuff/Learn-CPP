#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest {
public:
	CTest operator+(int arg) {
		CTest t;
		t.value = value + arg;
		return t;
	}
	int value = 0;
};
CTest operator+(int arg, const CTest& arg2) {
	CTest t;
	t.value = arg + arg2.value;
	return t;
}

int main() {
	CTest a;
	a.value = 1;

	CTest b = a + 2;
	CTest c = 2 + a;
}