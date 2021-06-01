#include <stdio.h>

class Some {
public:
	int& total;
	int n1, n2;
	Some(int& atotal) :total(atotal)/*n1(on1), n2(on2) 이렇게 ,로 초기화도 가능*/
	{
		/*일반적인 멤버 변수의 초기화*/
		//this->n1 = n1;
		//this->n2 = n2;
	}
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	int value = 8;
	Some S(value);
	S.OutTotal();
}