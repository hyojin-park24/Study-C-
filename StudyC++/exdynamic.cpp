#include<stdio.h>

class SomeClass {};

void calc()throw(int)
{
	SomeClass objj;
	char* p = new char[1000];

	if (true)throw 1;
	delete[]p;
}

int main()
{
	try { calc(); }
	catch (int) { puts("정수형 예외 발생"); }
}