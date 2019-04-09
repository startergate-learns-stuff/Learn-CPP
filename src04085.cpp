#include "stdafx.h"
#include <iostream>

using namespace std;

class CData {
public:
	explicit CData(int param) {
		pndata = new int(param);
	}

	~CData() { delete pndata; }

	operator int() { return *pndata; }

	CData& operator=(const CData& rhs) {
		if (this == &rhs) return *this;
		delete pndata;
		pndata = new int(*rhs.pndata);

		return *this;
	}

	CData& operator*=(const CData& rhs) {
		int *pnNewData = new int(*pndata);
		*pnNewData *= *rhs.pndata;
		delete pndata;
		pndata = new int(*pnNewData);
		return *this;
	}

private:
	int *pndata = nullptr;
};

int main() {
	CData a(1), b(5), c(10);
	// a = b;
	// cout << a << endl;
	// a = a;
	// cout << a << endl;
	// a = b = c;
	a *= b *= c;
	cout << a << endl;


	return 0;
}