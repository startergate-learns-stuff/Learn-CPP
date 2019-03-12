#include "stdafx.h"
#include <iostream>

using namespace std;

class UserData {
public:
	UserData(int age, string name) {
		this->nAge = age;
		this->szName = name;
	}

	int nAge;
	string szName;

	
	void Print(void) {
		printf("%d, %s", nAge, szName);
	}
};

int _tmain(int argc, _TCHAR* argv[]) {
	UserData* u = new UserData(10, "10");
	u->Print();
}