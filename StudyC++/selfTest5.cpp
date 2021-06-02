/*ȸ���̸�, ��ȭ��ȣ, �ּ�, cnt�� ��������� ���� class�� �����Ͻÿ�.*/
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
		printf("�� ȸ�� �� = %d\n", cnt);
	}

	~Cmember() { cnt--; }
	
	void getData();
};

int Cmember::cnt = 0;

void Cmember::getData()
{
	printf("ȸ�� ���� - �̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, add);
}



int main()
{
	Cmember c("��ȿ��", "010-8845-2413", "���ؽ� ��û�� �赿�� 102����24");
	Cmember c1("Edun", "010-2104-3878", "���ؽ� ��û�� �赿�� 102����");
	c.getData();
	c1.getData();

	c.Outcnt();

	return 0;
}