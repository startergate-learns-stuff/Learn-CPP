#include "stdafx.h"
#include <iostream>

using namespace std;

int TestFunc(int nParam1, int nParam2 = 2) {
	return nParam1 * nParam2;
}

int TestFunc2(int nParam1, int nParam2 = 2, int nParam3 = 3) {
	return nParam1 + nParam2 + nParam3;
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << TestFunc(10) << endl;
	cout << TestFunc(10, 5) << endl;

	cout << TestFunc2(10) << endl;
	cout << TestFunc2(10, 5) << endl;

}