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
	cout << "begin" << endl;
	CTest a;
	cout << "before b" << endl;
	CTest b(2);
	cout << "end" << endl;

	return 0;
}