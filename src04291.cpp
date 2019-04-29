#include "stdafx.h"
#include <iostream>
using namespace std;

// �ʱ� ������
#define DEFAULT_FARE 1000

class CPerson
{
public:
	CPerson() { }
	virtual ~CPerson() {
		cout << "virtual ~CPerson()" << endl;
	}

	// ��� ��� �������̽�(���� ���� �Լ�)
	virtual void CalcFare() = 0;

	virtual unsigned int GetFare() { return m_nFare; }

protected:
	unsigned int m_nFare = 0;
};

// �ʱ� Ȥ�� �ı� ������
class CBaby : public CPerson
{
public:
	~CBaby() {
		cout << "~CBaby()" << endl;
	}
	// ������(0~7��) ��� ���
	virtual void CalcFare() {
		m_nFare = 0;	// 0%
	}
};

class CChild : public CPerson
{
public:
	~CChild() {
		cout << "~CChild()" << endl;
	}
	// ���(8~13��) ��� ���
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE * 50 / 100;	// 50%
	}
};

class CTeen : public CPerson
{
public:
	~CTeen() {
		cout << "~CTeen()" << endl;
	}
	// û�ҳ�(14~19��) ��� ���
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE * 75 / 100;	// 75%
	}
};

class CAdult : public CPerson
{
public:
	~CAdult() {
		cout << "~CAdult()" << endl;
	}
	// ����(20�� �̻�) ��� ���
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE;	// 100%
	}
};

// ����� �ڵ�
int main()
{
	CPerson* arList[3] = { 0 };
	int nAge = 0;

	// 1. �ڷ� �Է�: ����� �Է¿� ���� ������ ��ü ����
	for (auto &person : arList)
	{
		cout << "���̸� �Է��ϼ���: ";
		cin >> nAge;
		if (nAge < 8)
			person = new CBaby;

		else if (nAge < 14)
			person = new CChild;

		else if (nAge < 20)
			person = new CTeen;

		else
			person = new CAdult;

		// ������ ��ü�� �´� ����� �ڵ����� ���ȴ�.
		person->CalcFare();
	}

	// 2. �ڷ� ���: ����� ����� Ȱ���ϴ� �κ�
	for (auto person : arList)
		cout << person->GetFare() << "��" << endl;

	// 3. �ڷ� ���� �� ����
	for (auto person : arList)
		delete person;

	return 0;
}