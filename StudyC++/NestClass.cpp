/*ÁßÃ¸Å¬·¡½º*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

class Product {
private:
	char name[64];
	char company[32];
	int price;


class Date {
protected:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutDate() { printf("%d/%d/%d", year, month, day); }
};
Date validto;
public:
	Product(const char* aname, const char* acompany, int y, int m, int d, int aprice) :
		validto(y, m, d) {
		strcpy(name, aname);
		strcpy(company, acompany);
		price = aprice;
	}

	void OutProduct() {
		printf("name:%s\n", name);
		printf("wpwhtk:%s\n", company);
		printf("real-date:");
		puts("");
		printf("price:%d\n", price);
	}
};

int main()
{
	Product shrimp("seukkang", "nonshim", 2020, 8, 25, 900);
	shrimp.OutProduct();

	//Date now(12,34,56);			//Erro
}