#include "stdafx.h"
#include <iostream>

using namespace std;

// �����Լ� virtual == �߻� �޼ҵ�. �����Ǵ� �Լ� �̸��� ���ڰ� ������ �Ȱ��ƾ� �Ѵ�.
// �����Լ��� ������ �ִ� Ŭ������ ���������� �����Լ� ���̺��̶�� ���� ���� => �����Լ��� �޸� �ּ� ����
// �����Լ� ȣ���ϸ� ���� �����Լ� ���̺��� �����ؼ� �޸� �ּҸ� Ȯ��. �����Լ����̺� �ּҰ� �� �ִٸ� �� �ּ��� �Լ��� ȣ��

// �Ҹ��ڵ� �����Լ� ����. �θ��� �Ҹ��ڴ� �����Լ��� ����� ����.

class CParent {
public:
	CParent() {
		m_iA = 100;
		m_iB = 200;
		m_iC = 300;
		cout << "CParent()" << endl;

	}

	~CParent() {
		cout << "~CParent()" << endl;

	}
public:
	int m_iA;
protected:
	int m_iB;
private:
	int m_iC;
public:
	void Output() {
		cout << "A: " << m_iA << endl;
		cout << "B: " << m_iB << endl;
		cout << "C: " << m_iC << endl;
	}
};

class CChild : public CParent {
public:
	CChild() {
		m_iB = 200; // (public)
		// m_iC = 300; (private)
		cout << "CChild()" << endl;
	}

	~CChild() {
		cout << "~CChild()" << endl;
	}

	void ChildOutput() {
		cout << "ChildOutput()" << endl;
	}
protected:
	int m_iD;
};

class CChild1 : private CParent {
public:
	CChild1() {
		cout << "CChild1()" << endl;
	}

	~CChild1() {
		cout << "~CChild1()" << endl;

	}
private:
	int m_iD;
};

class CChildChild : public CChild {
public:
	CChildChild() {
		m_iD = 500;
		cout << "CChildChild()" << endl;
	}

	~CChildChild() {
		cout << "~CChildChild()" << endl;
	}
private:
	int m_iE;
};

int main() {
	// ������ ȣ��: �θ� -> �ڽ�
	// �Ҹ��� ȣ��: �ڽ� -> �θ�

	CParent parant;
	CChild child;
	CChild1 child1;
	CChildChild childchild;

	parant.m_iA = 100;

	child.m_iA = 200;

	// child1.m_iA = 300;
	// child1.Output();

	CParent* pParant = new CChild;
	// CParent* pParant1 = new CChild1;
	CParent* pParant2 = new CChildChild;

	CParent* pParentArr[2] = {};

	pParentArr[0] = new CChild;
	pParentArr[1] = new CChildChild;

	CChild* pChild = (CChild*)pParant;
	CChild1* pChild1 = (CChild1*)pParant; // ���� �߻� ���� (pParent�� CChild�� �Ҵ��. ���ʿ� ������ ��ü�� �ƴ� �ٸ� Ÿ���̱� ����)

	// pParent�� CParent ������ Ÿ���̱� ������ ChildOutput()�� ������ �� ����. �����ϰ� �ʹٸ� ����ȯ �ؾ��Ѵ�.
	// pParant->ChildOutput()
	((CChild*)pParant)->ChildOutput();


	delete pParant; // CParent �Ҹ��ڸ� ȣ��. pParent�� CParent ������ Ÿ���̱� ������ CChild �Ҹ��ڰ� ȣ�� X
	// delete pParant2;

	for (int i = 0; i < 2; i++)
	{
		// delete pParentArr[i];
	}
	return 0;
}