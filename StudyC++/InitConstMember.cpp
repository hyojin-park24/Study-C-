#include <stdio.h>

class Some {
public:
	const int total;
	Some(int atotal) :total(atotal) {}		//�ʱ�ȭ ����Ʈ ���
	//�Ϲ� ��� ���� �ʱ�ȭ
	//Some(int atotal){total = atotal}; 
	//-����� ������ ���Ͱ��� �����ؾ��� ��, ���Կ��� ��ü�� �ϸ� �ȵ�
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}