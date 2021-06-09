#include <stdio.h>

class Parent {
public:
	virtual void PrintMe()
	{
		printf("I am parent\n");
	}
};
class Child :public Parent {
private:
	int num;
public:
	Child(int anum) :num(anum) {}

	virtual void PrintMe() { printf("I am child\n"); }
	void PrintNum() { printf("Hello Child =%d\n", num); }
};

void func(Parent* p)
{
	p->PrintMe();
	Child* c = dynamic_cast<Child*>(p);
	if (c)
	{
		c->PrintNum();
	}
	else { puts("�� ��ü�� num�� ������ ���� �ʽ��ϴ�."); }
}

int main()
{

	Parent p;
	Child c(5);

	func(&c);
	func(&p);
}