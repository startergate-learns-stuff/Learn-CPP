#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	CTest(int nparam) : mndata(nparam) { }
	~CTest() { }

	int GetData() const {
		ndata = 20;
		return mndata;
	}

	int SetData(int nparam) {
		mndata = nparam;
	}

private:
	int mndata = 0;
	mutable int ndata = 0;
};

int main() {
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}