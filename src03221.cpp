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
	CTest* pTest = (CTest *)malloc(sizeof(CTest));
	cout << "begin" << endl;
	free(pTest);
	cout << "end" << endl;

	return 0;
}