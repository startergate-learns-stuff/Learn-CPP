#include <iostream>
#include <string>
using namespace std;

class DaeGi {
private:
	string name;

	friend class MeoGi;
};

class MeoGi {
public:
	void set_name(DaeGi& f, string s) {
		f.name = s;
	}
	void show_name(DaeGi& f) {
		cout << f.name << "\n";
	}
};

int main(void) {
	DaeGi f1;
	MeoGi f2;

	f2.set_name(f1, "¸Ó±â");
	f2.show_name(f1);

	return 0;
}