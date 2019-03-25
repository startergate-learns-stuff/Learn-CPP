#include "stdafx.h"

class CRefTest {
public:
	CRefTest(int &rparam) :ndata(rparam) {	}

	int GetData(void) {
		return ndata;
	}

private:
	int &ndata;
};