#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("123456789");
	string s2("abcdefghijklmnopqrstuvwxyz");
	string s3;

	s3.assign(s1, 3, 4);
	cout << s3 << endl;
	s3.append(s2, 10, 7);
	cout << s3 << endl;
}