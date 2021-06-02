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
		printf("�μ� �ΰ� ������!!\n");
	}

	void OutMyTest()
	{
		printf("a : %d, b : %d\n", a, b);
	}

	/*���� ������*/
	/*MyTest(MyTest& rhs) : a(rhs.a), b(rhs.b)
	{
		printf("��������� ȣ��!!\n");
	}*/

	/*��� ���� �Լ�*/
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