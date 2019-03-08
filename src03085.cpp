#include "stdafx.h"
#include <iostream>
using namespace std;

void testFunc(int &rParam) {
	rParam = 100;
}

int _tmain(int argc, _TCHAR* argv[]) {
	int nData = 0;

	testFunc(nData);

	cout << nData << endl;

	return 0;
}