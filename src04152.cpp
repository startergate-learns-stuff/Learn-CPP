#include "stdafx.h"
#include <iostream>

using namespace std;

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
	// 생성자 호출: 부모 -> 자식
	// 소멸자 호출: 자식 -> 부모

	CParent parant;
	CChild child;
	CChild1 child1;
	CChildChild childchild;

	parant.m_iA = 100;

	child.m_iA = 200;

	// child1.m_iA = 300;
	// child1.Output();

	CParent* pParant = new CChild;
	delete pParant;
	return 0;
}