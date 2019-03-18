#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest()" << endl;
	}
};

CTest a;

int main() {
	cout << "begin" << endl;
	cout << "end" << endl;

	return 0;
}