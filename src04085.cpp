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

	void operator=(const CData& rhs) {
		delete pndata;
		pndata = new int(*rhs.pndata);
	}

private:
	int *pndata = nullptr;
};

int main() {
	CData a(0), b(5);
	a = b;
	cout << a << endl;

	return 0;
}