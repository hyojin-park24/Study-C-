/*예외처리*/
#include <iostream>
using namespace std;
void TestFunc1()
{
	cout << "TestFunc1() START" << endl;
//	throw 0;			//예외처리
	cout << "TestFunc1() END " << endl;
}

void TestFunc2()
{
	cout << "TestFunc2() START" << endl;
//	TestFunc1();
	throw 0;
	cout << "TestFunc2() END" << endl;
}

void TestFunc3()
{
	cout << "TestFunc3() START" << endl;
	TestFunc2();
	cout << "TestFunc3() END" << endl;
}
int main()
{
	try { TestFunc3(); }		//TestFunc1 함수 호출 
	/*예외 핸들러*/
	catch (...)					//(...): 실질적으로는 int형태가 와야하지만, 모든 타입을 다 받겠다는 의미
	{
		cout << "Exception Handling" << endl;
	}
	TestFunc1();+
	return 0;
}