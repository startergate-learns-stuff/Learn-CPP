#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData {
	int m_ndata;
public:
	int getData(void) { return m_ndata; }
	int setData(int nParam) { return m_ndata = nParam;  }
};

int main() {
	CMyData data;
	data.setData(10);
	cout << data.getData() << endl;
}