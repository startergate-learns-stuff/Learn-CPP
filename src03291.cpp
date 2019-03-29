#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData {
public:
	CMyData() {
		cout << "CMyData()" << endl;
	}

	CMyData(const CMyData &rhs) {// :m_ndata(rhs.m_ndata) {
		this->m_ndata = rhs.m_ndata;
		cout << "CMyData(const CMyData &)" << endl;
	}

	int GetData(void) const { return m_ndata; }
	void SetData(int m_ndata) { this->m_ndata = m_ndata; }

private:
	int m_ndata = 0;
};

int main() {
	CMyData a;
	a.SetData(10);

	CMyData b = a;
	cout << b.GetData() << endl;

	return 0;
}