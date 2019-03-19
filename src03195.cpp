#include "stdafx.h"
#include <iostream>

using namespace std;

class CRefTest {
public:
	CRefTest(int &rparam) : m_ndata(rparam) {};
	int getData(void) { return m_ndata; };
private:
	int &m_ndata;
};

int main() {
	int a = 10;
	CRefTest t(a);

	cout << t.getData() << endl;

	a = 20;

	cout << t.getData() << endl;
	
	return 0;
}