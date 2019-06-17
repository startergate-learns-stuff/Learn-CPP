#include <iostream>

using namespace std;

template<typename T>
class CMyData {
public:
	CMyData(T param) : m_data(param) {}
	T GetData() const { return m_data; }

	operator T() { return m_data; }
	void SetData(T param) {}

private:
	T m_data;
};

int main() {
	CMyData<int> a(5);
	cout << a << endl;

	CMyData<double> b(123.45);
	cout << b << endl;

	char str[10] = "Hello";
	CMyData<char*> c(str);
	cout << c << endl;

	return 0;
}