#include <stdio.h>

struct SHuman
{
	char name[12];
	int age;

	void intro();
};

void SHuman::intro()
{
	printf("�̸� : %s, ���� : %d", name, age);
}

int main()
{
	SHuman kim = { "�����", 29 };
	kim.intro(/*���⿡ this point��°� �����ϴµ� ��ü�� �ּҸ� �����ϰ� �����Ϸ��� ��������*/);
	return 0;
}