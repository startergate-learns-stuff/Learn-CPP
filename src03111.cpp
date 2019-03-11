#include "stdafx.h"
#include <iostream>
using namespace std;

int TestFunc(int nParam = 10) {
	return nParam;
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << TestFunc() << endl;
	cout << TestFunc(20) << endl;

	return 0;
}