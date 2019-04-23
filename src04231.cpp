#include "stdafx.h"
#include <iostream>
using namespace std;

// ���� ������ �ڵ�
class CMyInterface
{
public:
	CMyInterface()
	{
		cout << "CMyInterface()" << endl;
	}

	// ���� �ְ� ���Ǵ� ���� ���� ���� �Լ�
	virtual int GetData() const = 0;
	virtual void SetData(int nParam) = 0;
};

// �ı� ������ �ڵ�
class CMyData : public CMyInterface
{
public:
	CMyData() { cout << "CMyData()" << endl; }

	// ���� ���� �Լ��� �Ļ� Ŭ�������� '�ݵ��' �����ؾ� �Ѵ�.
	virtual int GetData() const { return m_nData; }
	virtual void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

// ����� �ڵ�
int main()
{
	// ���� ���� Ŭ������ �ν��Ͻ��� ���� �� ������ �� ����.
	// CMyInterface a;
	CMyData a;
	a.SetData(5);
	cout << a.GetData() << endl;

	return 0;
}