#include<iostream>

class StaticTest {
	static int a;		//static 멤버 변수
	int b;

public:
	StaticTest();
	static void setData(int);	//static멤버 함수는 static멤버 변수에 사용
	void getData();
};

int StaticTest::a = 10;

StaticTest::StaticTest()
{
	this->b = 20;
}

void StaticTest::getData()
{
	printf("a : %d, b : %d\n",a, b);
}

void StaticTest::setData(int aa)
{
	//this->a = aa;			//this포인터 사용할 수 없음(객체 것이 아니기 때문)
	a = aa;
}

int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();

	s1.setData(30);
	s1.getData();
	s2.getData();

	StaticTest::setData(40);		//class소속으로 class로 호출이 가능하다
	s1.getData();
	s2.getData();
	return 0;
}