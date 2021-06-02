/*상수 함수 수정가능한 mutable*/

#include<stdio.h>
class Some {
private:
	mutable int temp;
public:
	Some(){}
	void method()const { temp = 0; }
};

int main()
{
	Some s;
	s.method();

	const Some t;
	t.method();
};