#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

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
class Student : public Human
{
protected:
	int sum;
public:
	Student(const char* aname, int aage, int asum) :Human(aname, aage)
	{
		sum = asum;
	}
	void intro() { printf("%d�й�%s�Դϴ�.\n", sum, name); }
	void study() { printf("���� �Ѷ��� ������ ���� ���~"); }
};

int main()
{
	Human h("Edun", 25);
	Student s("���л�", 29, 1234567);
	Human* pH;
	Student* pS;

	pH = &h;
	pS = &s;
	pH = &s;

	//pS = &h		//Erro

	pS = (Student*)&h;		//�ڽ����·� ���� ����ȯ �����ذ��� 
							//�ڽ��� �θ� ����Ű�� ���°� �ȵǱ⿡ 
							//�ڽ�->�θ� : downcasting
							//�θ�->�ڽ� : upcasting
	pS->intro();			//������ �������ڷ����� ���󰡼� ������ ���� ������ �ȴ�.
}