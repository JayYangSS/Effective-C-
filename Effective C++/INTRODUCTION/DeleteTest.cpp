#include<iostream>

class X{
public:
	X();//default 构造函数
	X(const X&)=delete;  // 声明copy构造函数为 deleted 函数
	X& operator = (const X &) = delete; // 声明copy assignment操作符为 deleted 函数
	void doSomething(int x)=delete;
};


int main(){
	X x1;
	X x2(x1);   // 错误，拷贝构造函数被禁用
	X x3;
	x3 = x1;     // 错误，拷贝赋值操作符被禁用


	//注意，“=”是可以调用copy函数的
	X x4 = x1;//有新的对象x4被定义，因此这种写法是默认调用了类的拷贝函数
	X x4;
	x4 = x1; //没有新的对象定义，因此这种方式不是调用类的拷贝函数，而是使用赋值操作符“=”
	x4.doSomething(11);//被禁用的函数，不能调用
}