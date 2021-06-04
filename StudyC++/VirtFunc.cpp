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
	virtual void intro() { printf("이름 : %s, 나이 : %d\n", name, age); }
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
	void intro() { printf("%d학번 %s입니다.\n", sum, name); }
	virtual void study() { printf("나도 한때는 그이의 손을 잡고~"); }
};

int main()
{
	Human h("Edun", 25);
	Student s("이학생", 29, 1234567);
	Human* ph;
	
	ph = &h;
	ph->intro();
	ph = &s;
	ph->intro();

}