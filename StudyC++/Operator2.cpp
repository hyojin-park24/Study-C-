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

	/*���� ������*/
	const MyTest operator -(const MyTest& other)const
	{
		MyTest m;
		m.a = a - other.a;
		m.b = b - other.b;

		return m;
	}

	/*���� ������*/
	/*�Ͻ������� ��ü�� �������־�� �Ѵ�*/
	const MyTest& operator =(const MyTest& other)
	{
		
		a = other.a;
		b = other.b;

		return *this;			
	}

	/*���� �Լ� ����� ���� friend*/
	friend const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2);
};

/*���� ������ �Լ�*/
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