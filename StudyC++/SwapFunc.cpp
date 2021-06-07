#include <stdio.h>

void swap(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swap(double& a, double& b)

{

	double t;
	t = a;
	a = b;
	b = t;
}

int main()
{
	int a = 4, b = 4;
	double c = 1.2, d = 3.4;
	swap(a, b);
	swap(c, d);
	printf("a=%d,b=%d\n", a, b);
	printf("a=%f,b=%f\n", c, d);
}