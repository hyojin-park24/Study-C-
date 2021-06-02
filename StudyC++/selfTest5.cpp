/*회원이름, 전화번호, 주소, cnt를 멤버변수로 갖는 class를 설계하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Cmember {
private:
	char name[12];
	char phone[50];
	char add[50];
	static int cnt;
public:
	Cmember(const char aname[12], const char aphone[50], const char aadd[50])
	{
		strcpy(name, aname);
		strcpy(phone, aphone);
		strcpy(add, aadd);
		cnt++;
	}

	static void Outcnt()
	{
		printf("총 회원 수 = %d\n", cnt);
	}

	~Cmember() { cnt--; }
	
	void getData();
};

int Cmember::cnt = 0;

void Cmember::getData()
{
	printf("회원 정보 - 이름: %s, 전화번호: %s, 주소: %s\n", name, phone, add);
}



int main()
{
	Cmember c("박효진", "010-8845-2413", "김해시 대청동 계동로 102번길24");
	Cmember c1("Edun", "010-2104-3878", "김해시 대청동 계동로 102번길");
	c.getData();
	c1.getData();

	c.Outcnt();

	return 0;
}