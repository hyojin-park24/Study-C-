#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	//������
	Human(const char* aname, int aage)
	{
		strcpy(this->name, aname);
		this->age = aage;
	}
	void intro()
	{
		printf("�̸� : %s, ���� : %d", name, age);
	}
};

int main()
{
	Human kim("�����", 29);
	kim.intro();
}