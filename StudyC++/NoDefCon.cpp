#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro()
	{
		printf("이름 = %s, 나이=%d", name, age);
	}
};

int main()
{
	// Human momo;		//에러
	//Human arFriend[3]	//에러

	Human arFriend[3] = {
		{"문상진", 45},
		{"이지은", 29},
		{"이든", 25}
	};

	arFriend[2].intro();
}