/*정수형 변수sum에124, num에5가 있을 때 두 수를 나누어 평균을 구해 출력
  소수점 이하까지 계산*/
#include <stdio.h>

int main()
{
	int sum = 124;
	int num = 5;
	double avr;
	avr = sum / num;
	printf("평균 : %f", avr);

	return 0;
}