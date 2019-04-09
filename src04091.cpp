#include "stdafx.h"
#include <iostream>

using namespace std;

class CData {
public:
	explicit CData(int param) {
		cout << "CData(int)" << endl;
		pndata = new int(param);
	}

	CData(const CData &rhs) {
		cout << "CData(const CData &)" << endl;
		pndata = new int(*rhs.pndata);
	}

	~CData() { delete pndata; }

	operator int() { return *pndata; }

	CData operator+(const CData& rhs) {
		cout << "operator+" << endl;
		return CData(*pndata + *rhs.pndata);
	}

	CData& operator=(const CData& rhs) {
		cout << "operator=" << endl;
		if (this == &rhs) return *this;
		delete pndata;
		pndata = new int(*rhs.pndata);

		return *this;
	}

	CData& operator=(CData&& rhs) {
		cout << "operator= (Move)" << endl;
		pndata = rhs.pndata;
		rhs.pndata = NULL;
		return *this;
	}

private:
	int *pndata = nullptr;
};

int main() {
	CData a(0), b(3), c(4);

	cout << "Before" << endl;
	a = b + c;
	cout << "After" << endl;
	cout << a << endl;

	a = b;
	cout << a << endl;


	return 0;
}