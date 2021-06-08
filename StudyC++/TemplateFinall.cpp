/*�Լ� ���ø� ����*/
#include <iostream>
using namespace std;

/*�⺻���� ������ ���ø� ��� ���*/
//template <typename T>	//���ø� ���·� �������� �ڷ� ���¸� ���� �Լ��� ���
//T Add(T a, T b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << Add(10, 20) << endl;
//	cout << Add(3.14, 4.5) << endl;
//	return 0;
//}

/*Ư���� �Լ� ���ø�*/
template <typename T>	// �Ϲ�ȭ
T Add(T a, T b)
{
	return a + b;
}
template <>			//<>�ȿ� empty�� Ư��ȭ
const char* Add(const char* lstr, const char* rstr)		//return��������ϱ� ������ returnŸ�Ե� char*Ÿ��
{
	int llen = strlen(lstr);			//���ڿ� �����̹Ƿ� int��
	int rlen = strlen(rstr);
	int len = llen + rlen + 1;			//��ü ���ڿ��� ���� ���ϱ� (+1�� null��)
	char* str = new char[len];			//�� ���ڿ� ������ �� �ִ� ��ü ����
	strcpy_s(str, llen + 1, lstr);		//���� ���ڿ� ����
	strcat_s(str, len, rstr);			//������ ���ڿ� ���� strcat =>�̾� ���̱�
	return str;
}
int main()
{
	int res = Add<int>(3, 4);			//�Լ� ȣ��
	cout << res << endl;

	/*Ư��ȭ ���*/
	const char* sres = Add<const char*>("Hello", "IOT");
	cout << sres << endl;

	return 0;
}