#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
	int m_ndata;

public:
	CTest() :m_ndata(1) {
		cout << "CTest()" << endl;
	}
	CTest(int nparam) :m_ndata(nparam) {
		cout << "CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest() " << m_ndata << endl;
	}
};

int main() {
	CTest* ptest = new CTest[3];
	cout << "begin" << endl;
	delete[] ptest;
	cout << "end" << endl;

	return 0;
}