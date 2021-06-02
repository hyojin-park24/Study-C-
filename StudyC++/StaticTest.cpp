#include<iostream>

class StaticTest {
	static int a;		//static ��� ����
	int b;

public:
	StaticTest();
	static void setData(int);	//static��� �Լ��� static��� ������ ���
	void getData();
};

int StaticTest::a = 10;

StaticTest::StaticTest()
{
	this->b = 20;
}

void StaticTest::getData()
{
	printf("a : %d, b : %d\n",a, b);
}

void StaticTest::setData(int aa)
{
	//this->a = aa;			//this������ ����� �� ����(��ü ���� �ƴϱ� ����)
	a = aa;
}

int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();

	s1.setData(30);
	s1.getData();
	s2.getData();

	StaticTest::setData(40);		//class�Ҽ����� class�� ȣ���� �����ϴ�
	s1.getData();
	s2.getData();
	return 0;
}