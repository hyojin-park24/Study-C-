#include <stdio.h>

class Myclass
{
public:
	class Exception
	{
	private:
		int ErrorCode;
	public:
		Exception(int ae) :ErrorCode(ae) {}
		int GetErrorCode() { return ErrorCode; }
		void ReportError()
		{
			switch (ErrorCode)
			{
			case1:
				puts("�޸𸮰� �����մϴ�.");
				break;
			case2:
				puts("���� ������ �ʰ��߽��ϴ�.");
				break;
			case3:
				puts("�ϵ� ��ũ�� ���� á���ϴ�.");
				break;
			}
		}
	};
	void calc()
	{
		try {
			if (true)throw Exception(1);
		}
		catch (Exception& e)
		{
			printf("�����ڵ�=%d=>", e.GetErrorCode());
			e.ReportError();
		}
	}
	void calc2()throw(Exception)
	{
		if (true)throw Exception(2);
	}
};

int main()
{
	Myclass m;
	m.calc();
	try { m.calc2(); }
	catch (Myclass::Exception& e)
	{
		printf("�����ڵ�=%d=>", e.GetErrorCode());
		e.ReportError();
	}
}