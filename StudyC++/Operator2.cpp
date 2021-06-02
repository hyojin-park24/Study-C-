#include <iostream>

class MyTest {
private:
	int a, b;
public:
	MyTest() {}

	MyTest(int aa, int bb)
	{
		a = aa;
		b = bb;
		printf("인수 두개 생성자!!\n");
	}

	void OutMyTest()
	{
		printf("a : %d, b : %d\n", a, b);
	}

	/*복사 생성자*/
	/*MyTest(MyTest& rhs) : a(rhs.a), b(rhs.b)
	{
		printf("복사생성자 호출!!\n");
	}*/

	/*멤버 연산 함수*/
	const MyTest& operator +(const MyTest& other)const
	{
		MyTest m;
		m.a = a + other.a;
		m.b = b + other.b;

		return m;
	}

	const MyTest& operator -(const MyTest& other)const
	{
		MyTest m;
		m.a = a - other.a;
		m.b = b - other.b;

		return m;
	}
};



int main()
{
	MyTest sum1(75, 68);
	MyTest sum2(86, 92);
	MyTest sum3;
	
	sum3 = sum1 + sum2;

	MyTest dev1(91, 98);
	MyTest dev2(45, 62);
	MyTest dev;

	dev = dev1 - dev2;

	sum3.OutMyTest();
	dev.OutMyTest();
	return 0;
}