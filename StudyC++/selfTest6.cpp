#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* name;
	int age;

public:
	Human(){}
	Human( const char *aname, int aage)
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
	}

	Human(const Human& other) {

		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
	}

	const Human operator =(const Human& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
		return *this;
	}

	void info()
	{
		printf("이름 : %s, 나이 : %d \n", name, age);
	}
	~Human()
	{
		delete[]name;
	}
};

void printHuman(Human youH)
{
	youH.info();
}

int main()
{
	Human h("박효진", 25);
	
	Human myH = h;
	Human youH(myH);

	Human xman;

	h.info();
	printHuman(youH);
	
	xman = myH;
	xman.info();

	return 0;
}