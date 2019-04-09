#include "stdafx.h"
#include <iostream>

using namespace std;

class CInt{
public:
	CInt(int param) { this->value = param; }
	CInt& operator=(const CInt& param) {
		this->value = param.value;
		return *this;
	}
	CInt&& operator+(int param) {
		return CInt(this->value + param);
	}
	CInt&& operator+(CInt& param) {
		return CInt(this->value + param.value);
	}
	int value = 0;
};

int main() {
	CInt i1 = 1;
	CInt i2 = i1 + 1;
	CInt i3 = i1 + i2;

	cout << i1.value << endl;
	cout << i2.value << endl;
	cout << i3.value << endl;
}