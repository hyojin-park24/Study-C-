#include <stdio.h>

class Date 
{
private:
	int year, mon, date;

public:
	void SetDate(int y, int m, int d)
	{
		year = y;
		mon = m;
		date = d;
	}

	void OutDate()
	{
		printf("오늘 날짜는 %d년 %d월 %d일 입니다.", year, mon, date);
	}
};

int main()
{
	Date now;
	now.SetDate(2021, 6, 1);
	now.OutDate();

	return 0;
}