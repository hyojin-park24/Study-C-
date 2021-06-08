/*클래스 템플릿*/
#include<iostream>
using namespace std;

//class CTest {
//private:
//	T num;				//클래스 멤버 타입 자체가 typename이면 클래스 템플릿
//public:
/////	CTest(T anum) : num(anum) {};		//클래스 외부에서도 작성 가능(생성자 정의)
//	CTest(T);							//생성자 선언
//	void printData()
//	{
//		cout << "num: " << num << endl;
//	}
//};
//
///*생성자 정의*/
//template <typename T>
//CTest<T>::CTest(T anum)
//{
//
//}
//int main()
//{
//
//	//CTest obj(10);
//	CTest<int> obj(10);		//명시적 타입이 와야 실행 가능!! 
//	obj.printData();
//}

/*클래스 템플릿 특수화*/
template <typename T>	//일반화
class CTest {
private:
	T data;
public:
	CTest(T adata) : data(adata) {};
	T getData() { return data; }
};
template<>				//특수화
class CTest<char> {
private:
	char data;
public:
	CTest(char adata) : data(adata) {};
	char getData() { return data; }
};

int main()
{
	CTest<int> obj1(10);			//class객체 생성할때 명시적 타입 생성해야함
	cout << obj1.getData() << endl;
	CTest<char> obj2('A');
	cout << obj2.getData() << endl;
}