#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	int aList[7] = { 10, 20, 30, 40, 50, 60, 561 };
	int bList[7] = { 10, 20, 30, 40, 50, 60, 561 };

	for (auto n : aList) {
		n = 10;
		cout << n << endl;
	}
	cout << "--------------" << endl;
	for (auto n : aList) {
		cout << n << endl;
	}
	cout << "--------------" << endl;
	for (auto &n : bList) {
		n = 10;
		cout << n << endl;
	}
	cout << "--------------" << endl;
	for (auto n : bList) {
		cout << n << endl;
	}
}