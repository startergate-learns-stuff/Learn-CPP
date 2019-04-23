#include "stdafx.h"
#include <iostream>
using namespace std;

// �ʱ� �������� �ڵ�
class CMyObject
{
public:
	CMyObject() { }
	virtual ~CMyObject() { }

	// ��� �Ļ� Ŭ������ �� �޼��带 �����ٰ� ������ �� �ִ�.
	virtual int GetDeviceID() = 0;

protected:
	int m_nDeviceID;
};

// �ʱ� �����ڰ� ���� �Լ�
void PrintID(CMyObject *pObj)
{
	// ������ � �������� ������ �׷��� ID�� ����� �� �ִ�!
	cout << "Device ID: " << pObj->GetDeviceID() << endl;
}

// �ı� �������� �ڵ�
class CMyTV : public CMyObject
{
public:
	CMyTV(int nID) { m_nDeviceID = nID; }
	virtual int GetDeviceID()
	{
		cout << "CMyTV::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

class CMyPhone : public CMyObject
{
public:
	CMyPhone(int nID) { m_nDeviceID = nID; }
	virtual int GetDeviceID()
	{
		cout << "CMyPhone::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

// ����� �ڵ�
int main()
{
	CMyTV a(5);
	CMyPhone b(10);

	// ���� ��ü�� �����̵� �˾Ƽ� �ڽ��� ID�� ����Ѵ�.
	::PrintID(&a);
	::PrintID(&b);

	return 0;
}