#include "stdafx.h"
#include <iostream>

using namespace std;

void testFunc(void) {
	cout << "::testFunc()" << endl;
}

namespace TEST {
	void testFunc(void) {
		cout << "TEST::testFunc()" << endl;
	}
}

namespace MYDATA {
	void testFunc(void) {
		cout << "MYDATA::testFunc()" << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	testFunc();    // 묵시적 전역
	::testFunc();  // 명시적 전역
	TEST::testFunc();
	MYDATA::testFunc();
}