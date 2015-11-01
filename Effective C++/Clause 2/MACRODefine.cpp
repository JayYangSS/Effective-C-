#include<iostream>
#define MAX(a,b)((a)>(b)?(a):(b))
#define CALL_WITH_MAX(a,b) f((a)>(b)?(a):(b))
using namespace std;

template <typename T> inline void call_with_max(const T a, const T b)
{
	cout << "inline call" << endl;
	f(a > b ? a : b);
}


void f(int p)
{
	cout << "max is:" << p << endl;
}
int main()
{
	int a, b;
	cout << "input a and b:" << endl;
	cin >> a >> b;
	int max=MAX(a, b);
	cout << "max:" << max << endl;

	int m = 5, n = 0;
	CALL_WITH_MAX(m, n);
	CALL_WITH_MAX(++m, n);
	CALL_WITH_MAX(++m, n + 10);

	int p = 5, q = 0;
	call_with_max(p, q);
	call_with_max(++p, q);//不会出现宏定义中连加两次的情况
	call_with_max(++p, q + 10);
}