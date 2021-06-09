#include<iostream>

class A {
public:
	virtual void test() { printf("A::test()\n"); }
};
class B: public A {
public:
	virtual void test() { printf("B::test()\n"); }
	void test2() { printf("B::test2()\n"); }
};
class C :public B
{
public:
	virtual void test() { printf("C::test()\n"); }
	void test2() { printf("C::test()\n"); }
};

void GlobalFunc(A& a) {

	try {
		C& c = dynamic_cast<C&>(a);
		printf("GlovalFunc()\n");
	}
	catch (std::bad_cast) {
		printf("casting error\n");
	}
}
	int main()
{
		A* pa = new C;
		A* paa = new B;
		pa->test();
		B* pb = dynamic_cast<B*>(pa);
		if (pb)pb->test2();
		C* pc = dynamic_cast<C*>(paa); //부모는 자식을 가리킬 수 있지만 자식은 부모를 가리킬 수 없다.
									   //캐스팅은 되지만 실질적으로 실행되지 않아 결과 출력이 안된다.
									   //자식포인터로 부모 객체를 가리키는 형태, 따라서 불완전한 캐스팅
									   //하극상이 일어나게됨!
		if (pc)pc->test2();


		C c;
		GlobalFunc(c);
		B b;
		GlobalFunc(b);

		
	return 0;
}