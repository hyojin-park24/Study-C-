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
		C* pc = dynamic_cast<C*>(paa); //�θ�� �ڽ��� ����ų �� ������ �ڽ��� �θ� ����ų �� ����.
									   //ĳ������ ������ ���������� ������� �ʾ� ��� ����� �ȵȴ�.
									   //�ڽ������ͷ� �θ� ��ü�� ����Ű�� ����, ���� �ҿ����� ĳ����
									   //�ϱػ��� �Ͼ�Ե�!
		if (pc)pc->test2();


		C c;
		GlobalFunc(c);
		B b;
		GlobalFunc(b);

		
	return 0;
}