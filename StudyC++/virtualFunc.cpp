#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Base
{
public:
	virtual void func1() { cout << "B:func1()" << endl; }	//부모에 virtual가상함수가 있으면 자식한테도 암시적으로 virtual이 따라감
	virtual void func2() { cout << "B:func2()" << endl; }
	void func3() { cout << "B:func3()" << endl; }
};
class Drived : public Base {
public:
	void func1() { cout << "D:func1()" << endl; }			//함수 오버라이딩, 앞에 virtual가상함수 상속 받음 
	void func3() { cout << "D:func3()" << endl; }
	void func4() { cout << "D:func4()" << endl; }
};
int main()
{
	Base b;
	Drived d;

	Base* pb = new Drived;
	pb->func1();
	pb->func2();
	pb->func3();						//가상함수가 아니면 포인터 자료형을 따라감, 포인터 자료형 Base를 따라감
}