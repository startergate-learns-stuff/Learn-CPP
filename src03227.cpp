#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	CTest() : mndata(0) { }
	~CTest() { }

	int GetData() const { return mndata; }

	void SetData(int nparam) { mndata = nparam; }

	void SetData(double nparam) = delete;

	void SetData(char nparam) = delete;

private:
	int mndata = 0;
	mutable int ndata = 0;
};

int main() {
	CTest a;
	a.SetData(10);
	cout << a.GetData() << endl;

	/*CTest b;
	b.SetData(5.5);
	cout << b.GetData() << endl;

	CTest c;
	b.SetData('c');
	cout << b.GetData() << endl;
*/
	return 0;
}