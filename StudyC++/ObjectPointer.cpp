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
	void intro() { printf("이름 : %s, 나이 : %d\n", name, age); }
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
	void intro() { printf("%d학번%s입니다.\n", sum, name); }
	void study() { printf("나도 한때는 그이의 손을 잡고~"); }
};

int main()
{
	Human h("Edun", 25);
	Student s("이학생", 29, 1234567);
	Human* pH;
	Student* pS;

	pH = &h;
	pS = &s;
	pH = &s;

	//pS = &h		//Erro

	pS = (Student*)&h;		//자식형태로 강제 형변환 시켜준거임 
							//자식이 부모를 가리키는 형태가 안되기에 
							//자식->부모 : downcasting
							//부모->자식 : upcasting
	pS->intro();			//하지만 포인터자료형을 따라가서 쓰레기 값이 나오게 된다.
}