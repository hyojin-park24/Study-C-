#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Human
{
private:
	char name[12] ;
	int age;

public:
	/*Human() {};
	Human(char n, int a)
	{
		name = n;
		age = a;
	}*/

	void SetName(char *name)
	{
		strcpy(this->name, name);
	}

	/*���*/
	void GetName()
	{
		printf("%s\n", name);
	}

	void SetAge(int age)
	{
		if (age >= 0 && age <=120)
		{
			printf("���� = %d\n", age);
		}
		else
		{
			printf("0");
		}
	}

	//void GetAge()
	//{
	//	printf("%d", age);
	//}
};

int main()
{
	/*Human h;
	h.intro();
	h.intro2();*/

	Human i;
	char tempName[100];
	printf("�̸��� �Է��ϼ��� : \n");
	cin >> tempName;

	int tempAge;
	printf("���̸� �Է��ϼ��� : \n");
	cin >> tempAge;

	i.SetName(tempName);
	i.GetName();
	i.SetAge(tempAge);
	//i.GetAge();
}