/*���

*�Ļ�Ŭ������ ����Ǳ� ���� ȣ��Ǵ� ����

	1.�Ļ� class �����ڰ� ȣ��
	2.�θ� class ������ ȣ�� /����
	3.�Ļ� class������ ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

class Human
{
private:
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
		printf("�̸� : %d, ���� : %d\n", name, age);
	}
};

class Student :public Human
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}
	void study()
	{
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main()
{
	Human lee("�̵�", 25);
	lee.intro();
	Student un("������", 29, 123456);
	un.intro();
	un.study();
}