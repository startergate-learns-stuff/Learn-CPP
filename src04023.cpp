#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData {
public:
	explicit CMyData(int param) :m_ndata(param) {
		cout << "CMyData(int)" << endl;
	}

	operator int(void) { return m_ndata; }

	CMyData(const CMyData &rhs) :m_ndata(rhs.m_ndata) {
		m_ndata = rhs.m_ndata;
	}

	~CMyData() {
		cout << "~CMyData()" << endl;
	}

	int GetData(void) const {
		if (m_ndata != NULL)
		{
			return m_ndata;
		}

		return 0;
	}

private:
	int m_ndata;
};

int main() {
	CMyData a(5);

	cout << a.GetData() << endl;
	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>(a) << endl;
	
	return 0;
}