#include <stdio.h>

struct SHuman
{
private:
	char name[12];
	int age;

public:
	void intro()
	{
		printf("�̸�: %s, ���� : %d", name, age);
	}
};

int main()
{
	SHuman kim;
	kim.intro();

	return 0;
}