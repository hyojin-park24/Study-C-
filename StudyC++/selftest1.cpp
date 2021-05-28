/*크기 100인 실수형 배열을 할당하고 50번째 요소에 3.14를 대입하여 출력하라.*/
#include <stdio.h>

int main()
{
	float* fa;
	fa = new float[100];

	for (int i = 0; i < 100; i++)
	{
		fa[i] = i;
	}
	for (int i = 0; i < 50; i++)
	{
		printf("");
	}

}