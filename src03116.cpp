#include "stdafx.h"
#include <iostream>


namespace TEST {
	int g_nData = 200;

	void testFunc() {
		cout << TEST::g_nData << endl;
	}
}


namespace TEST_ {
	int g_nData = 300;

	void testFunc() {
		cout << TEST_::g_nData << endl;
	}
}

using namespace std;
using namespace TEST;

int main() {
	testFunc();
	TEST_::testFunc();
}