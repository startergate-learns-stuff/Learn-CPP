#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest {
public:
	CTest(int nparam) : ndata(nparam) { ncount++; }
	int GetData() { return ndata; }
	void ResetCount() { ncount = 0; }
	static int GetCount() { return ncount; }

private:
	int ndata;
	static int ncount;
};

int CTest::ncount = 0;

int main() {
	CTest a(5), b(10);

	cout << a.GetCount() << endl;
	b.ResetCount();

	cout << CTest::GetCount() << endl;

	return 0;
}