#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
Figure Ŭ������ ���� Ŭ�������� ������ �׸��µ�
���� �� �ִ� draw �Լ��� ������ �ִ�.
�׷��� Figure Ŭ������ ���� ������ �׸��� �Լ� ���� �κ���
���� �� �� ����. �� ������ Figure�� ���� Ŭ������
Triangle, Square, Circle Ŭ�������� �׸��� ����� �ٸ���
�����̴�. ��ü���⿡���� �̷��� ��� Figure Class��
�߻� Ŭ���� (Abstract class)�� �����ϰ� draw �Լ� ����
�߻� �Լ�(�޼���)�� �����Ѵ�.

�߻� �޼���(�Լ�)�� �Լ��� ���� �κи� �ְ� ���� �κ���
���� �Լ��� ���Ѵ�. �̷��� ����� �߻� Ŭ������ ���� Ŭ��������
�����Ǿ� ���ȴ�. ��, ������ ���� Ŭ�������� ��ӹ���
�߻� �޼ҵ带 ���� �ٸ� ������� �����ϰ� �Ǵ� ���̴�.
*/
class Figure
{
public:
	virtual string draw() = 0;
	// ���� ��� �����Լ��� NULL(0)�� �����ϸ� �ش� �Լ��� ���� �����Լ��� �ȴ�.
	// �̿� ���ÿ� ���� �����Լ��� �����ϴ� Ŭ������ �߻� Ŭ������ �����ȴ�.
};


class Triangle : public Figure
{
public:
	virtual string draw() { return "Triangle"; };
};
class Square : public Figure
{
public:
	virtual string draw() { return "Square"; };
};
class Circle : public Figure
{
public:
	virtual string draw() { return "Circle"; };
};

int main()
{
	Figure* F1 = new Triangle;
	Figure* F2 = new Square;
	Figure* F3 = new Circle;

	cout << F1->draw() << endl;
	cout << F2->draw() << endl;
	cout << F3->draw() << endl;

	return 0;
}