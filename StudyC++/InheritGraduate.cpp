#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

class Human {
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}

	void intro() { printf("�̸� : %s, ���� : %d\n", name, age); }
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
	void study() { printf("���̴� ��, �̻��� ��, �̻� ��\n"); }
};

class Graduate :public Student
{
protected:
	char thesis[32];
public:
	Graduate(const char* aname, int aage, int asum, const char* athesis) : Student(aname, aage, asum)
	{
		strcpy(thesis, athesis);
	}
	void reasearch()
	{
		printf("%s�� �����ϰ� ���� ����.\n", thesis);
	}
};

int main()
{
	Graduate moon("������", 45, 920629, "���ӹ� ��� �м�");
	moon.reasearch();
}