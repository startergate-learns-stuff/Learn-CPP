#include <iostream>
#include "stdafx.h"
using namespace std;

class Time {
protected:
	int hour, min, sec;
public:
	void settime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
		return;
	}
	void outtime();
	Time operator +(int);
};
Time Time::operator +(int i)// �ð��� ������ ���ϴ� ������
{
	/*sec += i; // �ʸ� ���� ����
	while (sec > 60) { // ���� �ڸ���ħ�� ������ �ѱ��.
		min++;
		sec -= 60;
	}
	while (min > 60) { // ���� �ڸ���ħ�� �ð����� �ѱ��.
		hour++;
		min -= 60;
	}
	hour %= 12;
	return (*this); // ���� ����� ��ü�� �����Ѵ�.*/

	long temp;
	temp = hour * 3600 + min * 60 + sec + i;
	sec = temp % 60;
	min = (temp / 60) % 60;
	hour = (temp / 3600) % 12;

}


void Time::outtime(void)
{
	cout << endl << "time is " << hour << " hour " << min
		<< " minute " << sec << " second." << endl;
}
void main()
{
	Time a;
	a.settime(2, 12, 23);
	a.outtime();
	a = a + 88;
	a.outtime();


}