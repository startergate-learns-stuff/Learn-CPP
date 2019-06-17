#include <iostream>
#include <string>

using namespace std;

template <class T>
T sum(T a, T b) {
	return a + b;
}

template <>
const char* sum<const char*>(const char* s1, const char* s2) {
	const char* str = "[const char *] 문자열은 더할 수 없습니다.";
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	return str;
}

template <>
string sum<string>(string s1, string s2) {
	string str = "[string] 문자열은 더할 수 없습니다.";
	cout << "string s1: " << s1 << endl;
	cout << "string s2: " << s2 << endl;
	return str;
}

int main() {
	int a = 10, b = 20;
	double d1 = 1.1;
	double d2 = 2.2;
	const char* s1 = "HI";
	const char* s2 = "BYE";
	string s3 = "GOOD";
	string s4 = "BYE";

	cout << sum(a, b) << endl << endl;
	cout << sum(d1, d2) << endl << endl;
	cout << sum(s1, s2) << endl << endl;
	cout << sum("G", "SM") << endl << endl;
	cout << sum<const char *>(s1, s2) << endl << endl;
	cout << sum(s3, s4) << endl << endl;
}