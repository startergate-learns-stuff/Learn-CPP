#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData {
public:
	/*explicit */CMyData(int param) :m_ndata(param) {
		cout << "CMyData(int)" << endl;
	}

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

void TestFunc(const CMyData &param) {
	cout << param.GetData() << endl;
}

int main() {
	TestFunc(5);

	// TestFunc(CMyData(5));
	return 0;
}