#include<stdio.h>

void divide(int a, int d)
{
	if (d == 0) throw "0���� ���� �� �����ϴ�.";
	printf("������ ��� = %d�Դϴ�.\n", a / d);
}

int main()
{
	try {
		divide(20, 0);
	}
	catch (int code)
	{
		printf("%d�� ������ �߻��߽��ϴ�.\n", code);
	}
	divide(10, 5);
}