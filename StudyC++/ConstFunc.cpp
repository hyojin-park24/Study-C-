#include<stdio.h>

class Time {
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { SetTime(h, m, s); }
	void SetTime(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime()const		//��� �Լ��� ���ȭ -> �������� �Ͼ�� �ȵ� �� ���
	//const int func();		//��� Ÿ���� ���ȭ
	{
		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
	}
};

int main()
{
	Time now(13, 47, 56);
	now.SetTime(11, 22, 33);
	now.OutTime();

	const Time meeting(16, 00, 00);		//��ü ���ȭ ->�Ϲ� ��� �Լ� ��� ����, ���ȭ�� ��� �Լ��� ��� ����
	meeting.OutTime();
}