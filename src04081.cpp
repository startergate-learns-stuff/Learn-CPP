#include "stdafx.h"
#include <iostream>

using namespace std;

class CNum {
public:
	int value;

	CNum() = default;

	CNum(int a) {
		this->value = a;
	}
};

int main() {
	/*int a = 1;
	int b = 2;
	
	int sum1 = 1 + 2;
	int sum2 = a + 2;
	int sum3 = 1 + b;
	int sum4 = a + b;
	*/
	CNum a;
	CNum b;

	a.value = 1;
	b.value = 2;

	CNum sum1 = 1 + 2;
	//CNum sum2 = a + 2;
	//CNum sum3 = 1 + b;
	//CNum sum4 = a + b;
}