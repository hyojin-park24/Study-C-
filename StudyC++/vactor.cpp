#include <iostream>
#include <vector>		//�迭�� ������ �����ִ� �������
#include <algorithm>
using namespace std;

bool compare(int a, int b) { return a > b; }
int main()
{
	/*
	vector<int>v;
	vector<int>v1 = { 1,2,3,4,5 };
	vector<int>v2[5];

	v.push_back(10);
	vector<int>::iterator iter = v.begin();
	iter = v.insert(iter, 2);

	v.pop_back();		//�ڵ����� ����
	*/

	/*
	vector<int> v = { 10,20,30,40,50 };
	for (auto i = 0; i <5; i++)
	{
		cout << v[i] << ' ';
	}
	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ' ';
	}
	*/

	vector<int> arr;
	arr.push_back(7);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(6);

	sort(arr.begin(), arr.end(), compare);
	for (auto i = 0; i < arr.size(); i++)		//auto : �ڵ����� �������� �ڷ����� ������
	{
		cout << arr[i] << endl;
	}

	return 0;
}
