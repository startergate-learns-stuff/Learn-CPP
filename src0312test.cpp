#include "stdafx.h"
#include <iostream>

using namespace std;

// int TestFunc(int nParam1 = 5, int nParam2, int nParam3 = 10)
// int TestFunc(int nParam1 = 5, int nParam2)
//=> ����Ʈ �Ű� ������ �����ʺ��� �̾ ����ؾ� �մϴ�. �߰��� �Ϲ� �μ��� �־�� �ȵ˴ϴ�.

//void TestFunc(int a) {
//	std::cout << "TestFunc(int)" << std::endl;
//}
//void TestFunc(int a, int b = 10) {
//	std::cout << "TestFunc(int, int)" << std::endl;
//}
//=> TestFunc(1) �̷� ������� �Լ��� ȣ������ ��, ù��° �Լ��� ȣ���� ������, �ι��� �Լ��� ȣ���� ������ �� �� ����.

//=> �Լ��� ���� �����ҋ��� �ڵ��� ���̰� �þ��, ����ϴ� �޸��� ���� �þ �� �ֽ��ϴ�.
template <typename T>
T Divide(T a, T b) {
	return a / b;
}

int ndata = 200;

namespace TEST {
	int ndata = 100;
	void testfunc(void) {
		cout << ndata << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	TEST::testfunc();

	return 0;
}