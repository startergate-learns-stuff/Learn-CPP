#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>
T Add(T a, T b) {
	return a + b;
}

template <typename A>
A Addi(A a, A b) {
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;

}