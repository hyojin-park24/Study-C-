#include <stdio.h>

struct SHuman
{
	char name[12];
	int age;

	void intro();
};

void SHuman::intro()
{
	printf("이름 : %s, 나이 : %d", name, age);
}

int main()
{
	SHuman kim = { "김상현", 29 };
	kim.intro(/*여기에 this point라는게 존재하는데 객체의 주소를 저장하고 컴파일러가 전달해줌*/);
	return 0;
}