#include "stdafx.h"
#include <iostream>

using namespace std;

class CTestData {
public:
	CTestData(int nParam) : m_ndata(nParam) {
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData &rhs) :m_ndata(rhs.m_ndata) {
		cout << "CTestData(const CMyData &)" << endl;
	}

	int GetData(void) const { return m_ndata; }
	void SetData(int m_ndata) { this->m_ndata = m_ndata; }

private:
	int m_ndata = 0;
};

void TestFunc(CTestData &param) {
	cout << "TestFunc()" << endl;

	param.SetData(20);
}

int main() {
	cout << "----- Begin -----" << endl;
	
	CTestData a(10);
	TestFunc(a);

	cout << "a: " << a.GetData() << endl;

	cout << "----- End -----" << endl;
	return 0;
}