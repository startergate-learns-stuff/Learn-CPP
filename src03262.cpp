#include "stdafx.h"
#include <iostream>

using namespace std;

class CTest {
public:
	static int s_Value;
};

int CTest::s_Value = 1;

int main() {
	CTest c;

	cout << c.s_Value << endl;
}