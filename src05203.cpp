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
Time Time::operator +(int i)// 시간과 정수를 더하는 연산자
{
	/*sec += i; // 초를 먼저 더함
	while (sec > 60) { // 초의 자리넘침을 분으로 넘긴다.
		min++;
		sec -= 60;
	}
	while (min > 60) { // 분의 자리넘침을 시간으로 넘긴다.
		hour++;
		min -= 60;
	}
	hour %= 12;
	return (*this); // 연산 결과인 객체를 리턴한다.*/

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