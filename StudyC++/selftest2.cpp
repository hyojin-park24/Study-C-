/*IO스트림으로 정수값 두 개를 입력받아 그 합을 출력하라.*/
#include<iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "정수 두 개를 입력하시오: \n";
	cin >> a;
	cin >> b;
	cout << "합은" << a + b << "입니다." << endl;
}