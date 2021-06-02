/*상수 멤버*/
#include<stdio.h>

class MathCalc
{
private:
	const double pie;		//멤버 변수 선언 상수 double형 => pie상수화
							//객체에서는 생성자에서 초기화 함 
							//객체가 만들어지고 난 다음에 초기화 시키는 것은 안되기 때문에
							//초기화 되기 전에 생성자 콜론 초기화 시켜줌 
							//상수 멤버 변수를 콜론으로 초기화 시키기 
public:
	MathCalc(double apie) : pie(apie){}			//콜론 초기화 
	void DoCalc(double r) { printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie); }
};
int main()
{
	MathCalc m(3.1416);
	m.DoCalc(5);
}