#include<iostream>

class B{
public:
	explicit B(int x=0,bool b= true);//explicit只能修饰构造函数，表示该构造函数只能显示调用
};

class C{
public :
	C(int x = 1, int y = 2);
};

int main()
{
	B obj(12);//正确，可以显式调用构造函数
	B ob = 12;//错误，这相当于隐式的调用了构造函数，显示的调用方式应该为B obj(12)

	C oc(12);//正确，可以显式调用
	C oc2 = 12;//正确，构造函数没有被explicit修饰，可以隐式调用
}