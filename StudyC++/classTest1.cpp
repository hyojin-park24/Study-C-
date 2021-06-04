#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Human {
private:
	char* name;
public:
	Human(const char* aname)
	{
		int len = strlen(aname) + 1;
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		strcpy_s(name, len, aname);
	}
	~Human()
	{
		delete[]name;
	}
	void printname()
	{
		cout << "My name is" << name << endl;
	}
};

class Student : public Human {
protected:
	//char* name;
	char* obj;		//°ú¸ñ
public:
	Student(const char* aname, const char* aobj) : Human(aname)
	{
		obj = new char[strlen(aobj) + 1];
		strcpy(obj, aobj);
	}
	void study()
	{
		printname();
		cout << "object is" << obj << endl;
	}
};

int main()
{
	Human my("Edun");
	my.printname();
	Student s("Edun", "IOT");
	s.study();
}