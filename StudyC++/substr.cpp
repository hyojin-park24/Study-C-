#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("1234567890");
	string s2 = s1.substr(3, 4);

	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
}