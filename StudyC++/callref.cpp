#include <stdio.h>

void plusref2(int& ra)
{
	ra = ra + 1;
}

int main()
{
	/*
	int a = 5;

	plusref2(a);
	printf("a = %d\n", a);
	*/
	int a = 10;
	int& ra = a;
	int* pa = &ra;
	printf("%p %p %p\n", &a, &ra, pa);
}