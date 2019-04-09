#include "stdafx.h"
#include <iostream>

using namespace std;

class CIntArray {
public:
	CIntArray(int nSize) {
		pndata = new int[nSize];
		memset(pndata, 0, sizeof(int) * nSize);
	}

	~CIntArray() { delete pndata; }

	int operator[](int index) const {
		cout << "operator[] const" << endl;
		return pndata[index];
	}

	int& operator[](int index) {
		cout << "operator[]" << endl;
		return pndata[index];
	}
private:
	int *pndata;

	int nsize;
};

void testfunc(const CIntArray& arParam) {
	cout << "testfunc()" << endl;

	cout << arParam[3] << endl;
}

int main() {
	CIntArray arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i * 10;
	}

	testfunc(arr);

	return 0;
}