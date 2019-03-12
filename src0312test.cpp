#include "stdafx.h"
#include <iostream>

using namespace std;

// int TestFunc(int nParam1 = 5, int nParam2, int nParam3 = 10)
// int TestFunc(int nParam1 = 5, int nParam2)
//=> 디폴트 매개 변수는 오른쪽부터 이어서 사용해야 합니다. 중간에 일반 인수가 있어서는 안됩니다.

//void TestFunc(int a) {
//	std::cout << "TestFunc(int)" << std::endl;
//}
//void TestFunc(int a, int b = 10) {
//	std::cout << "TestFunc(int, int)" << std::endl;
//}
//=> TestFunc(1) 이런 방식으로 함수를 호출했을 때, 첫번째 함수를 호출한 것인지, 두번쨰 함수를 호출한 것인지 알 수 없다.

//=> 함수를 다중 정의할떄는 코드의 길이가 늘어나고, 사용하는 메모리의 양이 늘어날 수 있습니다.
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