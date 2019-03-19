#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData {
public:
	CMyData(int x) {
		cout << "CMyPoint(int)" << endl;

		if (x > 100)
			x = 100;
		mx = x;
	};

	CMyData(int x, int y) : CMyData(x) {
		cout << "CMyData(int, int)" << endl;

		if (y > 200)
			y = 200;
		my = y;
	};
	void print() {
		cout << mx << endl;
		cout << my << endl;
	}

private:
	int mx = 0;
	int my = 0;
};

int main() {
	CMyData begin(110);
	begin.print();

	CMyData end(50, 250);
	end.print();

	return 0;
}