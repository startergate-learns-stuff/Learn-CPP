#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	CTest() {
		m_ndata = 10;
	}

	int m_ndata;

	void printData(void) {
		cout << m_ndata << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[]) {
	CTest t;
	t.printData();

	return 0;
}