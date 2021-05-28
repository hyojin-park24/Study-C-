#include <stdio.h>

int main()
{
	int* pi;

	pi = new int;
	*pi = 123;
	printf("*pi = %d\n", *pi);
	delete pi;
}