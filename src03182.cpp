#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	CTest() {//: m_ndata(10), test(20) {
		cout << "CTest(): 생성자 함수" << endl;
		//m_ndata = 10;
		test = 30;
		hello = 10;
	}

	int m_ndata = 30;
	int test;

	void printData(void);
};

void CTest::printData(void) {
	//m_ndata = 20;
	cout << m_ndata << endl;
	cout << test << endl;
}

int main() {
	cout << "main start" << endl;

	CTest t;
	t.printData();

	cout << "main end" << endl;

	return 0;
}