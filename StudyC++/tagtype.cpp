#include <stdio.h>

int main()
{
	enum origin { EAST, WEST, SOUTH, NORTH };
	enum origin mark = WEST;
	printf("%d ����\n", mark);

	struct SHuman {
		char name[12];
		int age;
		double height;
	};
	SHuman kim = { "�����", 29, 184.4 };
	printf("�̸� = %s, ���� = %d\n, Ű = %.1lf", kim.name, kim.age, kim.height);
}