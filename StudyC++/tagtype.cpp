#include <stdio.h>

int main()
{
	enum origin { EAST, WEST, SOUTH, NORTH };
	enum origin mark = WEST;
	printf("%d 방향\n", mark);

	struct SHuman {
		char name[12];
		int age;
		double height;
	};
	SHuman kim = { "김상현", 29, 184.4 };
	printf("이름 = %s, 나이 = %d\n, 키 = %.1lf", kim.name, kim.age, kim.height);
}