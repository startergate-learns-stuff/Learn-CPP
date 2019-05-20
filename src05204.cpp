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
	friend Time operator+(int i, Time N);
};
Time Time::operator +(int i)
{
	// Time형의 객체와 정수를 더한다.
	sec += i;
	while (sec > 60) {
		min++;
		sec -= 60;
	}
	while (min > 60) {
		hour++;
		min -= 60;
	}
	hour %= 12;
	return (*this);
}
void Time::outtime(void)
{
	cout << endl << "time is " << hour << " hour " << min
		<< " minute " << sec << " second." << endl;
}
Time operator+(int i, Time N)
{
	return N + i;
}
int main()
{
	Time a;
	a.settime(2, 12, 23);
	a.outtime();

	a = a + 88;
	a.outtime();

	a = 88 + a;
	a.outtime();
}