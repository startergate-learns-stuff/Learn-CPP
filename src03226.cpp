#include "stdafx.h"
#include <iostream>

using namespace std;

void testfunc(int nparam) {
	cout << nparam << endl;
}

int main() {
	testfunc(10);
	testfunc(5.5);
}