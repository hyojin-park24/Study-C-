#include <iostream>

class StaticTest {
public:
	int a;
	static int b;				//static 멤버 변수 선언 - 외부에서 초기화
	StaticTest() {				//생성자 생성
		a = 10;
		//b = 20;				//클래스 내부에서 초기화는 안된다.
		b++;
	}
	void getData() {
		printf("a : %d, b : %d\n", a,b);
	}
};

int StaticTest::b = 20;			//static 멤버변수 초기화 - 소속표시 필수!!, 객체 내에 존재하지 않는다!

int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();
	return 0;
}