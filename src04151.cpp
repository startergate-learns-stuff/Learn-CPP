#include "stdafx.h"
#include <iostream>

using namespace std;

class CInt {
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

	bool operator==(const CInt& param) {
		if (param.value == this->value)
		{
			return 1;
		}
		return 0;
	}

	int operator++(int) {
		
		return ++this->value;
	}

	int operator++() {
		int temp = this->value++;
		return temp;
	}

	int value = 0;
};

int main() {
	CInt i1 = 1;
	CInt i2 = 1;

	if (i1 == i2) {
		cout << "same" << endl;
	}

	cout << i1++ << endl;
	cout << ++i2 << endl;
}