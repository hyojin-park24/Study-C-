#include <stdio.h>

int main()
{

	int* ar;

	ar = new int[5];		//int형 방 5개 만들기
	//c에서는 (int*)malloc(sizeof(int)*5) 
	for (int i = 0; i < 5; i++)
	{
		ar[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 = %d\n", i, ar[i]);
	}
	delete[]ar;
}