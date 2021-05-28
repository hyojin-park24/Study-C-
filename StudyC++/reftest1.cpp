#include <stdio.h>
#include <iostream>
using namespace std;

void reference_swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a, b;

	cout << "정수값 두개 입력" << endl;
	cin >> a >> b;
	reference_swap(a, b);

	cout << "변경 후 a,b의 값: " << a << "," << b << endl;
}