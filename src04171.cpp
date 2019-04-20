#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
public:
	// ���� �Լ��� ���� �� �����ߴ�.
	virtual void PrintData()
	{
		cout << "CMyData: " << m_nData << endl;
	}

	void TestFunc()
	{
		cout << "***TestFunc()***" << endl;

		// �� ������ �Լ��� ȣ��ȴ�!
		PrintData();
		cout << "****************" << endl;
	}

protected:
	int m_nData = 10;
};

class CMyDataEx : public CMyData
{
public:
	// �⺻ Ŭ������ ���� �Լ� ����� ������ �ߴ�.
	// ���� ���� ���Ǵ� ���õȴ�.
	virtual void PrintData()
	{
		cout << "CMyDataEx: " << m_nData * 2 << endl;
	}
};

int main()
{
	CMyDataEx a;
	a.PrintData();


	CMyData &b = a;
	//= ���� : �������� = ������ : ������
	// ���� ���Ŀ� ������� �� ������ �Լ��� ȣ��ȴ�.
	b.PrintData();

	// �� �������� �����ǵ� �Լ��� ȣ��ȴ�!
	a.TestFunc();

	return 0;
}