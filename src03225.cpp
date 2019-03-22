#include "stdafx.h"
#include <iostream>

using namespace std;

void testfunc(const int &nparam) {
	int &nnewparam = const_cast<int &>(nparam);
	nnewparam = 20;
}

int main() {
	int ndata = 10;

	testfunc(ndata);

	cout << ndata << endl;
}