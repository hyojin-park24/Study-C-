#include<stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(){}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time operator +(const Time& other)const //operator : 연산자 함수 이름
	{
		//객체가 매개변수로 들어갈 때 기본적으로 레퍼런스를 사용
		//원칙은 레퍼런스 타입의 출력으로 와야하지만
		//일단은 예외적으로 class타입으로 출력을 받음
		Time t;
		t.sec = sec + other.sec;
		t.min = min + other.min;
		t.hour = hour + other.hour;
		//const Time operator +(const Time& other)const =>마지막 const는 t1의 sec,min,hour을 의미함
		//어려운 개념이지만 이해가능

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}
};

int main()
{
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	//t3 = t1 + t2;			//이렇게도 호출 가능 - 객체가 더할 수 있는 기능을 만들어 준거임
	t3 = t1.operator+(t2);	//실질적은 함수 형태
	t3.OutTime();
}