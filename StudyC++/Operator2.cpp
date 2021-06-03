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

	/*빼기 연산자*/
	const MyTest operator -(const MyTest& other)const
	{
		MyTest m;
		m.a = a - other.a;
		m.b = b - other.b;

		return m;
	}

	/*대입 연산자*/
	/*일시적으로 객체를 전달해주어야 한다*/
	const MyTest& operator =(const MyTest& other)
	{
		
		a = other.a;
		b = other.b;

		return *this;			
	}

	/*전역 함수 사용을 위한 friend*/
	friend const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2);
};

/*전역 연산자 함수*/
const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2)
{
	MyTest m;
	m.a = rhs1.a - rhs2.a;
	m.b = rhs1.b - rhs2.b;

	return m;
}


int main()
{
	/*MyTest sum1(75, 68);
	MyTest sum2(86, 92);
	MyTest sum3;
	
	sum3 = sum1 + sum2;*/

	MyTest dev1(91, 98);
	MyTest dev2(45, 62);
	MyTest dev;

	//dev = dev1 - dev2;

	//dev = dev1.operator=(dev2);
	dev = operator-(dev1, dev2);

	//sum3.OutMyTest();
	//dev.OutMyTest();
	dev.OutMyTest();
	return 0;
}