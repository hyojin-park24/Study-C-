/*가상소멸자*/
#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int anum) { num = anum; cout << num << "CTest constructor" << endl; }
	virtual ~CTest()								//메모리동적할당경우에 파괴자 생성이 호출안되므로 virtual붙여줌
	{
		cout << num << "CTest desturctor" << endl;
	}
	virtual void func() { cout << "CTest function()" << endl; }
};

class CTestSub : public CTest
{
private:
	int subN;
public:
	CTestSub(int anum, int asubN) : CTest(anum) {subN = asubN; cout << subN << "CTestSub constructor" << endl;
	}
	~CTestSub()
	{
		cout << subN << "CTestSub desturctor" << endl;
	}
	void func() { cout << "CTestSub function()" << endl; }
};
int main()
{
	CTest b(10);
	b.func();
	CTestSub d(20, 20);
	d.func();
	CTest* pb = new CTestSub(30, 33);		//추상형(부모객체타입)으로 자식객체를 가리키게 한다.
	pb->func();

	delete pb;								//요건 메모리 해제 
	return 0;
}