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
	void eat() { puts("³È³È³È"); }
	virtual void intro() { printf("ÀÌ¸§ : %s, ³ªÀÌ : %d\n", name, age); }
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
	void intro() { printf("%dÇÐ¹ø %sÀÔ´Ï´Ù.", sum, name); }
};

int main()
{
	Human h("edun", 25);
	Student s("ÀÌÇÐ»ý", 15, 1234567);
	Human* ph;

	ph = &h;
	ph->intro();
	ph->eat();
	ph = &s;
	ph->intro();
	ph->eat();
}