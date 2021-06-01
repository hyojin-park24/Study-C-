#include<stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	/*변환생성자 - 임시 객체를 생성하고 변환 후 멤버에 대입한다.*/
	explicit Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() { printf("현재 시간은 %d:%d:%d입니다.", hour, min, sec); }
};

void PrintTime(Time when)
{
	when.OutTime();
}

int main()
{
	Time noon(40000);				//명시적인 변환의 형태
	noon.OutTime();
	//noon = 70000;					//명시적이지 않음
	//Time now = 60000;				//명시적이지 않음
	//now.OutTime();
	//now = 70000;
	//now.OutTime();

	//PrintTime(80000);				//명지적이지 않음 
	//따라서 explicit를 사용!
}