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
		printf("���� �ð��� %d:%d:%d�Դϴ�.", hour, min, sec);
	}
};

int main()
{
	Time now(15, 10, 12);
	Time then = now;
	now.OutTime();
}