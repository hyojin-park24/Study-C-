/*구조체 속성과 기능
	C에서는 구조체에서 속성만 다루고 출력할 때 기능을 메인에 만들었다.
	C++에서는 구조체 속성과 기능까지 한번에 다룬다. 이것이 Class.
	즉, C++에서 Class는 C에서의 구조체 형태와 동일하다.
	구조체는 기본적으로 멤버접근지정자가 public형태로 지원됨! 
	class 속성 및 기능은 개발자가 설계하고,
	Main함수에서 함수호출 및 실행이 가능하도록 지원해주고 있다.
	속성 : 멤버 변수, 기능 : 출력하는(보여주는)함수 = 멤버 함수
*/
#include <iostream>

class Human
{
public:
	char name[20];
	float height;
	float weight;
	int age;
	char blood;
	/*void view()
	{
		printf("나의 이름은 : %s이고 키는 %f이고 몸무게는 %f이고 나이는 %d이고 혈액형은 %c입니다.",name,height,weight,age,blood);
	}*/
	void view();
};

/*멤버함수 외부 작성(p.62)*/

//void view()		//일반적인 의미를 갖는 전역함수인데 class에있는 멤버 함수이다. 범위 지정 연산자를 통해 자신이 멤버 함수임을 나타내주어야함.
//{
//	printf("나의 이름은 : %s이고 키는 %f이고 몸무게는 %f이고 나이는 %d이고 혈액형은 %c입니다.", name, height, weight, age, blood);
//}

void Human::view()	//외부에서 작성을 할 때에는 어디 소속 함수인지 표시하기 위해 범위 이름을 작성하고 범위 지정 연산자를 사용해야함!
{
	printf("나의 이름은 : %s이고 키는 %f이고 몸무게는 %f이고 나이는 %d이고 혈액형은 %c입니다.", name, height, weight, age, blood);
}

int main()
{
	Human my = { "Edun", 165.5, 57.2, 25, 'A' };	//자기 객체 생성
	//C에서 구조체 호출
	//printf("나의 이름은 : %s이고 키는 %f이고 몸무게는 %f이고 나이는 %d이고 혈액형은 %c입니다.", my.name, my.height, my.weight, my.age, my.blood);
	
	my.view();	//C++ 구조체 기능함수 사용
	return 0;
}