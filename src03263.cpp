#include "stdafx.h"
#include <iostream>

using namespace std;

class Oval {
	int width, height;
public:
	Oval(int width, int height) {
		this->width = width;
		this->height = height;
	}
	~Oval() {
		cout << width << ' ' << height << endl;
	}
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int width, int height) {
		this->width = width;
		this->height = height;
	}
	void show() { cout << width << ' ' << height << endl; }
};

int main() {
	Oval a(3, 4);

	cout << a.getWidth() << endl;
	cout << a.getHeight() << endl;
	a.set(9, 9);
	a.show();
}