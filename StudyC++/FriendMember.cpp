#include <stdio.h>

class Time;
class Date
{
private:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutToday(Time& t);
};

class Time
{
	friend void Date::OutToday(Time& t);
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
};

void Date::OutToday(Time& t)
{
	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
		year, month, day, t.hour, t.min, t.sec);
}

int main()
{
	Date d(2021, 06, 01);
	Time t(16, 04, 05);
	d.OutToday(t);
}