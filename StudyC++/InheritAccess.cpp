#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() { printf("�̸� : %s, ���� : %d\n", name, age); }
};

class Student :public Human
{
protected:
	int stunum;
public:
	Student(const char *aname, int aage, int astunum) : Human(aname,aage)
	{
		stunum = astunum;
	}
	void study() { printf("���̴� ��, �̻��� ��, �̻� ��\n"); }

	void report() {
		printf("�̸�: %s, ����:%d ���� �����մϴ�.\n", name, stunum);	//�θ� �Ӽ��� �ڽ��� ����ϰ����� 
	}
};

int main()
{
	Student lee("Edun", 12, 986587);
	lee.intro();
	lee.study();
	lee.report();
}