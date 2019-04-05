#include "stdafx.h"
#include <iostream>

using namespace std;

void testfunc(int &&rparam) {
	cout << "testfunc(int &&)" << endl;
}

/*void testfunc(int rparam) {
	cout << "testfunc(int)" << endl;
}*/

int main() {
	int&& data = 3 + 4;
	cout << data << endl;
	data++;
	cout << data << endl;

	testfunc(3 + 4);

	return 0;
}