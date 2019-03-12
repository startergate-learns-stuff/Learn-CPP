#include "stdafx.h"
#include <iostream>

using namespace std;

namespace TEST {
	int g_ndata = 100;
	namespace DEV {
		int g_ndata = 200;
		namespace WIN {
			int g_ndata = 300;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << TEST::g_ndata << endl;
	cout << TEST::DEV::g_ndata << endl;
	cout << TEST::DEV::WIN::g_ndata << endl;
}