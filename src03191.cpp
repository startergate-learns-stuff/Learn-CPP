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

int main() {
	cout << "begin" << endl;
	CTest a;
	cout << "before b" << endl;
	CTest b;
	cout << "end" << endl;

	return 0;
}