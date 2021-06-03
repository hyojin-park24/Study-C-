/*상속

*파생클래스가 실행되기 위해 호출되는 순서

	1.파생 class 생성자가 호출
	2.부모 class 생성자 호출 /실행
	3.파생 class생성자 실행
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
		printf("이름 : %d, 나이 : %d\n", name, age);
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
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main()
{
	Human lee("이든", 25);
	lee.intro();
	Student un("이지은", 29, 123456);
	un.intro();
	un.study();
}