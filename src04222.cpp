#include "stdafx.h"
#include <iostream>
using namespace std;

// ������ �ڵ�
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

// ����� �ڵ�
int main()
{
	CMyData *pData = new CMyDataEx;

	// ���� ���Ŀ� �´� �Ҹ��ڰ� ȣ��ȴ�.
	delete pData;


	/*
	delete ������ ������ ��� ���� ������ �Ҹ��ڸ�
	ȣ��ǰ� �� ������ �Ҹ��ڰ� ȣ����� �ʴ� �ɰ���
	������ ������ �߻��Ѵ�.
	*/

	return 0;
}