#include<stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { SetTime(h, m, s); }
	void SetTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime()const		//멤버 함수를 상수화 -> 값변동이 일어나면 안될 때 사용
	//const int func();		//출력 타입을 상수화
	{
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

int main()
{
	Time now(13, 47, 56);
	now.SetTime(11, 22, 33);
	now.OutTime();

	const Time meeting(16, 00, 00);		//객체 상수화 ->일반 멤버 함수 사용 못해, 상수화된 멤버 함수만 사용 가능
	meeting.OutTime();
}