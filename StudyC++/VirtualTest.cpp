/*가상함수 - 객체와 포인터*/
#include<iostream>
using namespace std;

class A {
public:
	void AFunc()
	{
		cout << "A::AFunc()" << endl;
	}
};
class B : public A
{
public:
	void BFunc()
	{
		cout << "B::BFunc()" << endl;
	}
};

class C : public B
{
public:
	void CFunc()
	{
		cout << "C::CFunc()" << endl;
	}
};

int main()
{
	A* pa = new C;			//기초클래스타입의 포인터가 파생객체를 가리키고 있다.
							//객체 타입은 C타입, 포인터pa 타입은 A
							//C타입을 메모리 동적 할당을 받으면서 A타입 포인터를 가리키고 있다.
							//메모리 타입이 다르다.
	pa->AFunc();			

	B* pb = new C;			//C라는 객체 생성에서 pb라는 포인터로 접근해본다.
	pb->AFunc();			//포인터를 사용하는 이유는 메모리 사용말고 주소자체를 불러오기 때문에 효율적이다.
	pb->BFunc();			//가리키기는 C(자식)을 가리키지만 실질적인 메모리 사용은 상속받은 A와 동일한 타입 B를 사용할 수 있다.
							//객체 포인터로 객체에 접근했지만, 실질적으로 사용할 수 있는 메모리는 포인터타입밖에 쓸 수 없기 때문에
							//객체 접근한 메모리까지 모두 사용하기 위해 가상함수가 생겨났다.
	C* pc = new C;			
	pc->AFunc();
	pc->BFunc();
	pc->CFunc();
}