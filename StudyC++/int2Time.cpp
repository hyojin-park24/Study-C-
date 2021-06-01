#include<stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	/*��ȯ������ - �ӽ� ��ü�� �����ϰ� ��ȯ �� ����� �����Ѵ�.*/
	explicit Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() { printf("���� �ð��� %d:%d:%d�Դϴ�.", hour, min, sec); }
};

void PrintTime(Time when)
{
	when.OutTime();
}

int main()
{
	Time noon(40000);				//������� ��ȯ�� ����
	noon.OutTime();
	//noon = 70000;					//��������� ����
	//Time now = 60000;				//��������� ����
	//now.OutTime();
	//now = 70000;
	//now.OutTime();

	//PrintTime(80000);				//���������� ���� 
	//���� explicit�� ���!
}