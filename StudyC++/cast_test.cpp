#include<iostream>
using namespace std;
class Base {
private:
	int data;
public:
	Base() {};
	~Base() {};
	void SetData(int adata)
	{
		data = adata;
	}
	int getData() { return data; }
};
class Derived :public Base {
public:
	void SetData(int adata)
	{
		if (adata > 0)adata = 0;
		Base::SetData(adata);
	}

	void printData()
	{
		cout << "PrintData(): " << getData() << endl;
	}
};
int main()
{
	Base* pb = new Derived;
	Derived* pd = NULL;

	pb->SetData(10);				//기초클래스의 setData()호출
	//pb->printData();				//static_cast
	pd = static_cast<Derived*>(pb);	//파생클래스의 setData()호출
	pd->SetData(20);
	pd->printData();
	return 0;
}