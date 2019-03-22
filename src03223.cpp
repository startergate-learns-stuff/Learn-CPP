#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int age;
	string name;

public:
	void student(int age, string name) {
		this->age = age;
		this->name = name;
	}

	void print() {
		cout << age << endl;
		cout << name << endl;
	}
};

int main() {
	Student a;
	a.student(3, "sfda");

	a.print();

}