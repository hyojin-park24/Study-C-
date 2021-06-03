#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

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
	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

class Student : public Human
{
protected:
	int sum;

public:
	Student(const char* aname, int aage, int asum) :Human(aname, aage)
	{
		sum = asum;
	}
	void study()
	{
		printf("이이슨ㄴ 사, 이 삼은 육, 이 사 팔\n");
	}
	void intro()
	{
		printf("%d학번%s입니다.\n", sum, name);
	}
};

int main()
{
	Human kim("김상현", 29);
	kim.intro();
	Student han("김한결", 15, 123456);
	han.intro();
	han.Human::intro();			//부모클래스 호출
}