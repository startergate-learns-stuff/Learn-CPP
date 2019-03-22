#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	// CTest(void);
	CTest(void) = default;
	int ndata = 5;
};

// CTest::CTest(void) {}

int main() {
	CTest a;
	cout << a.ndata << endl;

	return 0;
}