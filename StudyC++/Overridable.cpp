#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}
	void eat() { puts("�ȳȳ�"); }
	virtual void intro() { printf("�̸� : %s, ���� : %d\n", name, age); }
};

class Student :public Human
{
protected:
	int sum;
public:
	Student(const char* aname, int aage, int asum) :Human(aname, aage)
	{
		sum = asum;
	}
	void intro() { printf("%d�й� %s�Դϴ�.", sum, name); }
};

int main()
{
	Human h("edun", 25);
	Student s("���л�", 15, 1234567);
	Human* ph;

	ph = &h;
	ph->intro();
	ph->eat();
	ph = &s;
	ph->intro();
	ph->eat();
}