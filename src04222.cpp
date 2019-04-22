#include "stdafx.h"
#include <iostream>
using namespace std;

// 제작자 코드
class CMyData
{
public:
	CMyData() { m_pszData = new char[32]; }
	virtual ~CMyData()
	{
		cout << "~CMyData()" << endl;
		delete m_pszData;
	}

private:
	char *m_pszData;
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx() { m_pnData = new int; }
	virtual ~CMyDataEx()
	{
		cout << "~CMyDataEx()" << endl;
		delete m_pnData;
	}

private:
	int *m_pnData;
};

// 사용자 코드
int main()
{
	CMyData *pData = new CMyDataEx;

	// 참조 형식에 맞는 소멸자가 호출된다.
	delete pData;


	/*
	delete 연산을 실행할 경우 참조 형식의 소멸자만
	호출되고 실 형식의 소멸자가 호출되지 않는 심각한
	내부적 문제가 발생한다.
	*/

	return 0;
}