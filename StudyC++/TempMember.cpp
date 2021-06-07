#include <stdio.h>

class Util
{
public:
	template<typename T>
	void swap(T& a ,T& b)
	{
		T t;
		t = a;
		a = b;
		b = t;
	}
};

int main()
{
	Util u;
	int a = 3, b = 4;
	double c = .12, d = 3.4;
	char e = 'e', f = 'f';

	u.swap(a, b);
	u.swap(c, d);
	u.swap(e, f);
	printf("a=%d,b=%d", a, b);
	printf("c=%.1f,d=%.1f", c, d);
	printf("e=%c,f=%c", e, f);
}