#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData {
public:
	CMyData(int param) {
		m_ndata = new int;
		*m_ndata = param;
	}

	CMyData(const CMyData &rhs) {
		m_ndata = new int;
		*m_ndata = *rhs.m_ndata;
	}

	~CMyData() {
		delete m_ndata;
	}

	int GetData(void) const {
		if (m_ndata != NULL)
		{
			return *m_ndata;
		}

		return 0;
	}

private:
	int *m_ndata = nullptr;
};

int main() {
	CMyData a(10);

	CMyData b = a;
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}