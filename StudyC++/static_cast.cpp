#include<stdio.h>

int main()
{
	const char* str = "korea";
	int* pi;
	double d = 123.456;
	int i;

	i = static_cast<int>(d);
	//pi = static_cast<int*>(str);		//erro point끼리의 형변환은 불허하기때문에 에러발생됨
	pi = (int*)str;
}