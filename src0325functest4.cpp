#include "stdafx.h"
#include <stdarg.h>
#include <iostream>

using namespace std;

int Sum(int count, ...) {
	int res = 0;
	va_list args;

	va_start(args, count);

	for (int i = 0; i < count; i++)
	{
		res += va_arg(args, int);
	}

	va_end(args);

	return res;
}

int main() {
	cout << Sum(5, 1, 2, 3, 4, 5) << endl;
	cout << Sum(3, 1, 2, 3) << endl;
	cout << Sum(1, 1) << endl;
}