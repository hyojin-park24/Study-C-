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
		printf("�̸� = %s, ���� = %d\n", name, age);
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
		printf("���̽��� ��, �� ���� ��, �� �� ��\n");
	}
	void intro()
	{
		printf("%d�й�%s�Դϴ�.\n", sum, name);
	}
};

int main()
{
	Human kim("�����", 29);
	kim.intro();
	Student han("���Ѱ�", 15, 123456);
	han.intro();
	han.Human::intro();			//�θ�Ŭ���� ȣ��
}