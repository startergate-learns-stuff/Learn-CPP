#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class CRobot {
	string name;
	int meter;
	int weight;
	int power;
public:
	void Set(string name, int meter, int weight, int power) {
		this->name = name;
		this->meter = meter;
		this->weight = weight;
		this->power = power;
	}
	void Print() {
		cout << name << ' ' << meter << ' ' << weight << ' ' << power << endl;
	}
};

int main() {
	CRobot a;
	CRobot b;
	CRobot c;
	CRobot d;

	a.Set("태권브이", 18, 80, 3000);
	b.Set("마징가", 17, 70, 2500);
	c.Set("메칸더브이", 20, 90, 3500);
	d.Set("그랜다이져", 22, 100, 5000);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
}