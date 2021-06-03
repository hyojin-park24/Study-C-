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
	void intro() { printf("이름 : %s, 나이 : %d\n", name, age); }
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
	void study() { printf("이이는 사, 이삼은 육, 이사 팔\n"); }

	void report() {
		printf("이름: %s, 나이:%d 보고서 제출합니다.\n", name, stunum);	//부모 속성을 자식이 사용하고있음 
	}
};

int main()
{
	Student lee("Edun", 12, 986587);
	lee.intro();
	lee.study();
	lee.report();
}