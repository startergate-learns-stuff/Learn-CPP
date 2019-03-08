#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[]) {
	int *pData = new int;
	int *pNewData = new int(10);

	*pData = 5;

	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
}