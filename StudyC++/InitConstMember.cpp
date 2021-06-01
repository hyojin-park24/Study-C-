#include <stdio.h>

class Some {
public:
	const int total;
	Some(int atotal) :total(atotal) {}		//초기화 리스트 방식
	//일반 멤버 변수 초기화
	//Some(int atotal){total = atotal}; 
	//-상수기 때문에 위와같이 선언해야함 즉, 대입연산 자체를 하면 안됨
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}