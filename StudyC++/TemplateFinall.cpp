/*함수 템플릿 정리*/
#include <iostream>
using namespace std;

/*기본적인 형태의 템플릿 사용 방법*/
//template <typename T>	//템플릿 형태로 여러가지 자료 형태를 같은 함수에 사용
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

/*특수한 함수 템플릿*/
template <typename T>	// 일반화
T Add(T a, T b)
{
	return a + b;
}
template <>			//<>안에 empty가 특수화
const char* Add(const char* lstr, const char* rstr)		//return시켜줘야하기 때문에 return타입도 char*타입
{
	int llen = strlen(lstr);			//문자열 길이이므로 int형
	int rlen = strlen(rstr);
	int len = llen + rlen + 1;			//전체 문자열의 길이 구하기 (+1는 null값)
	char* str = new char[len];			//두 문자열 저장할 수 있는 객체 선언
	strcpy_s(str, llen + 1, lstr);		//왼쪽 문자열 복사
	strcat_s(str, len, rstr);			//오른쪽 문자열 복사 strcat =>이어 붙이기
	return str;
}
int main()
{
	int res = Add<int>(3, 4);			//함수 호출
	cout << res << endl;

	/*특수화 사용*/
	const char* sres = Add<const char*>("Hello", "IOT");
	cout << sres << endl;

	return 0;
}