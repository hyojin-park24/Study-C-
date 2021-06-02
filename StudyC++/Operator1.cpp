/*두개의 객체를 더하는 연산 함수 = sum*/
#include <iostream>

class MyTest {
private:
	int x;
	int y;
public:
	MyTest() {}
	MyTest(int ax, int ay)
	{
		x = ax;
		y = ay;
	}

	void OutMyTest()
	{
		printf("%d , %d\n", x, y);
	}

	const MyTest sum(const MyTest & other)const
	{
		MyTest m;
		m.x = x + other.x;
		m.y = y + other.y;

		return m;
	}
};

int main()
{
	
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;

	obj = obj1.sum(obj2);
	obj.OutMyTest();

	return 0;
}