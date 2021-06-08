/*Ŭ���� ���ø�*/
#include<iostream>
using namespace std;

//class CTest {
//private:
//	T num;				//Ŭ���� ��� Ÿ�� ��ü�� typename�̸� Ŭ���� ���ø�
//public:
/////	CTest(T anum) : num(anum) {};		//Ŭ���� �ܺο����� �ۼ� ����(������ ����)
//	CTest(T);							//������ ����
//	void printData()
//	{
//		cout << "num: " << num << endl;
//	}
//};
//
///*������ ����*/
//template <typename T>
//CTest<T>::CTest(T anum)
//{
//
//}
//int main()
//{
//
//	//CTest obj(10);
//	CTest<int> obj(10);		//����� Ÿ���� �;� ���� ����!! 
//	obj.printData();
//}

/*Ŭ���� ���ø� Ư��ȭ*/
template <typename T>	//�Ϲ�ȭ
class CTest {
private:
	T data;
public:
	CTest(T adata) : data(adata) {};
	T getData() { return data; }
};
template<>				//Ư��ȭ
class CTest<char> {
private:
	char data;
public:
	CTest(char adata) : data(adata) {};
	char getData() { return data; }
};

int main()
{
	CTest<int> obj1(10);			//class��ü �����Ҷ� ����� Ÿ�� �����ؾ���
	cout << obj1.getData() << endl;
	CTest<char> obj2('A');
	cout << obj2.getData() << endl;
}