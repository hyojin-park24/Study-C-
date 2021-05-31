#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime()
	{
		printf("현재 시간은 %d:%d:%d입니다.", hour, min, sec);
	}
};

int main()
{
	Time now(15, 10, 12);
	Time then = now;
	now.OutTime();
}