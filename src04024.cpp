#include "stdafx.h"
#include <iostream>

using namespace std;

class CTestData {
public:
	CTestData(int nparam, const char *pszname) :ndata(nparam), pszname(pszname) {
		cout << "CTestData(int, char *): " << pszname << endl;
	}

	~CTestData() {
		cout << "~CTestData()" << endl;
	}

	CTestData(const CTestData &rhs) :ndata(rhs.ndata), pszname(rhs.pszname) {
		cout << "CTestData(const CTestData &): " << pszname << endl;
	}

	CTestData& operator=(const CTestData &rhs) {
		cout << "operator=" << endl;

		ndata = rhs.ndata;

		return *this;
	}

	int GetData() const { return ndata; }
	void SetData(int nparam) { ndata = nparam; }

private:
	int ndata = 0;

	const char *pszname = nullptr;
};

CTestData testfunc(int nparam) {
	CTestData a(nparam, "a");

	return a;
}

int main() {
	CTestData b(5, "b");

	b = testfunc(10);

	cout << b.GetData() << endl;
}