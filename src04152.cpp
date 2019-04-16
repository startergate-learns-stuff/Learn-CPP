#include "stdafx.h"
#include <iostream>

using namespace std;

// 가상함수 virtual == 추상 메소드. 재정의는 함수 이름과 인자가 완전히 똑같아야 한다.
// 가상함수를 가지고 있는 클래스는 내부적으로 가상함수 테이블이라는 것을 생성 => 가상함수의 메모리 주소 저장
// 가상함수 호출하면 먼저 가상함수 테이블을 참조해서 메모리 주소를 확인. 가상함수테이블에 주소가 들어가 있다면 그 주소의 함수를 호출

// 소멸자도 가상함수 가능. 부모의 소멸자는 가상함수로 만들어 두자.

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
	// CParent* pParant1 = new CChild1;
	CParent* pParant2 = new CChildChild;

	CParent* pParentArr[2] = {};

	pParentArr[0] = new CChild;
	pParentArr[1] = new CChildChild;

	CChild* pChild = (CChild*)pParant;
	CChild1* pChild1 = (CChild1*)pParant; // 문제 발생 가능 (pParent는 CChild로 할당됨. 애초에 생성한 객체가 아닌 다른 타입이기 떄문)

	// pParent는 CParent 포인터 타입이기 때문에 ChildOutput()에 접근할 수 없다. 접근하고 싶다면 형변환 해야한다.
	// pParant->ChildOutput()
	((CChild*)pParant)->ChildOutput();


	delete pParant; // CParent 소멸자만 호출. pParent는 CParent 포인터 타입이기 때문에 CChild 소멸자가 호출 X
	// delete pParant2;

	for (int i = 0; i < 2; i++)
	{
		// delete pParentArr[i];
	}
	return 0;
}