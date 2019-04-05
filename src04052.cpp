#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData {
public:
	CMyData() {
		cout << "CMyData()" << endl;
	}

	~CMyData() {
		cout << "~CMyData()" << endl;
	}

	CMyData(const CMyData &rhs) :m_ndata(rhs.m_ndata) {
		cout << "CMyData(const CMyData &rhs)" << endl;
	}


	CMyData(const CMyData &&rhs) :m_ndata(rhs.m_ndata) {
		cout << "CMyData(const CMyData &&rhs)" << endl;
	}
	CMyData& operator=(const CMyData &) = default;


	int GetData(void) const {
		if (m_ndata != NULL)
		{
			return m_ndata;
		}

		return 0;
	}
	void SetData(int nparam) {
		m_ndata = nparam;
	}

private:
	int m_ndata;
};

CMyData TestFunc(int param) {
	cout << "testfunc begin" << endl;
	CMyData a;
	a.SetData(param);
	cout << "testfunc end" << endl;

	return a;
}

int main() {
	CMyData b;
	cout << "main begin" << endl;
	b = TestFunc(10);

	cout << "main end" << endl;
	CMyData c(b);

	return 0;
}