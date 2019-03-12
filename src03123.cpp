#include "stdafx.h"
#include <iostream>

using namespace std;

int ndata = 200;

namespace TEST {
	int ndata = 100;
	void testfunc(void) {
		cout << ndata << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	TEST::testfunc();
}