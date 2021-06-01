/*여러가지 생성자
	1. 디폴트 생성자
		- 객체 생성시 자동으로 생성 
		- 오버로딩시 사라짐
	2. 복사 생성자 
		- 매개변수로 객체 사용할 때, return(출력)되는 값이 객체일때 사용, 복사하는 경우
		- 얕은 복사 vs 깊은 복사
			- 얕은 복사 : 주소를 복사함(참조를 전달받기 때문) 
						  /메모리 동적 할당시 문제가됨, 그래서 깊은복사 사용
			- 깊은 복사 : 수동 복사생성자 생성
	=> 자동으로 컴파일러가 호출 Auto
	3. 변환 생성자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

class CTest {
private:
	int m_num;			//멤버 변수
	int* ptr;
public:
	/*디폴트 생성자*/
	CTest()
	{
		printf("디폴트 생성자!!\n");
	};

	/*변환생성자 (인수 한개 생성자)*/
	CTest(int num) {
		m_num = num;
		printf("생성자 호출 :%d\n", m_num);
	}	
	//객체가 생성되면 자동으로 디폴트 생성자가 생성되지만
	//디폴트 생성자는 인수값이없으므로 main함수에서 에러가 발생되고
	//따라서 인수 하나를 가진 생성자를 만들면서 디폴트는 자동으로 사라짐

	/*복사 생성자*/
	/*CTest(CTest &other) {
		this->m_num = other.m_num;
	}*/

	/*인수 두개 생성자*/
	CTest(int num, int* ptr) {
		this->m_num = num;
		this->ptr = new int;	//int타입 메모리 동적 할당
		this->ptr = ptr;
		printf("인자 두개 생성자 호출 : %d, %p\n", m_num, ptr);
	}
	
	/*깊은 복사 - 인수 두개 생성자를 복사*/
	CTest(CTest &other) {
		this->m_num = other.m_num;
		this->ptr = new int;	//int타입 메모리 동적 할당
		this->ptr = other.ptr;
		printf("복사생성자 호출 : %d, %p\n", m_num, ptr);
	}
	/*파괴자*/
	~CTest() {
		delete ptr;				//동적 할당한 경우 소멸자에서 해제시킨다.
	}

	void getData()
	{
		printf("%d\n", m_num);	//멤버 변수 출력
	}
};

int main()
{
	/*기본자료형*/
	int a = 10;			//C스타일
	int b(20);			//C++에서 제공하는 타입(표준11부터 적용된 형태)
	int c(a);
	printf("%d, %d, %d\n", a,b,c);

	/*생성자 자료형*/
	CTest c1(100);			//인수 한개의 생성자 호출
	CTest c2;				//에러:생성자가 없기 때문에 직접 디폴트 생성자를 다시 만들면 됨
	CTest c3(c1);			//에러없이 정상적으로 실행 => 복사생성자가 호출되었음을 의미함!!(얕은 복사 - 주소 복사)
	CTest c4(50, nullptr);	//에러 : 두개 생성자 없기 때문 
	CTest c5(c4);

	c3.getData();
	c5.getData();
	return 0;
}