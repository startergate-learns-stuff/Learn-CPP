#include "stdafx.h"
#include <iostream>

using namespace std;

class CData {
public:
	CData(int param) : ndata(param) {
		cout << "CData(int)" << endl;
	}

	CData(const CData& rhs) : ndata(rhs.ndata) {
		cout << "CData(const Cdata &)" << endl;
	}
	CData(const CData&& rhs) : ndata(rhs.ndata) {
		cout << "CData(const Cdata &&)" << endl;
	}
	~CData() { cout << "!CData()" << endl; }
	operator int() { return ndata; }
	CData operator+(const CData& rhs) {
		cout << "operator+" << endl;
		CData result(0);
		result.ndata = this->ndata + rhs.ndata;

		return result;
	}
	CData& operator=(const CData& rhs) {
		cout << "operator=" << endl;
		ndata = rhs.ndata;

		return *this;
	}
private:
	int ndata = 0;
};

int main() {
	cout << "***** begin *****" << endl;
	CData a(0), b(3), c(4);
	a = b + c;
	cout << a << endl;
	cout << "****** end ******" << endl;
}