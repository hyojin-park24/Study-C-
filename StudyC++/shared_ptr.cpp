#include <iostream>
using namespace std;
class CTest {
public:
	CTest() { cout << "CTEST()" << endl; };
	~CTest() { cout << "~CTEST()" << endl; };
	void func() { cout << "func()" << endl; }
};

int main()
{
	shared_ptr<CTest>ptr1(new CTest);		//�ټ����� �޸� �����Ҵ��� �� �� ����
	ptr1->func();
	cout << "count: " << ptr1.use_count() << endl;
	{
		shared_ptr<CTest>ptr2(ptr1);
		cout << "count: " << ptr1.use_count() << endl;
		ptr2->func();
	}
	cout << "count: " << ptr1.use_count() << endl;
	ptr1->func();

	unique_ptr<CTest> ptr1(new CTest);

	return 0;
}