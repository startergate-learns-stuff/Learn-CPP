#include <iostream>

using namespace std;

template<typename T>
class CTest {
public:
	CTest();
	T TestFunc();

protected:
	static T m_data;
};

template<typename T>
CTest<T>::CTest() {

}

template<typename T>
T CTest<T>::TestFunc() {
	return m_data;
}

template<typename T>
T CTest<T>::m_data = 15;

int main() {
	CTest<double> a;
	cout << a.TestFunc() << endl;

	return 0;
}
