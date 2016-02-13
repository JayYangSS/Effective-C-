#include <iostream>

/*
*友元函数与友元类测试程序
*1.友元关系没有继承性：假如类B是类A的友元，类C继承于类A，那么友元类B是没办法直接访问类C的私有或保护成员
*2.友元关系没有传递性：假如类B是类A的友元，类C是类B的友元，那么友元类C是没办法直接访问类A的私有或保护成员，也就是不存在“友元的友元”这种关系
*3.成员函数有this指针，而友元函数没有this指针
*/


using namespace std;

class A{
private:
	int a;
public:
	void setA(int val){
		a = val;
	}
	int getA(){
		return a;
	}
	friend class B;
	//A的友元函数，友元函数并不是该类的成员函数，它可以在任何地方调用，友元函数中通过对象名来访问该类的私有或保护成员
	friend int func_getA_a(A &entity);
};

//A的友元类
class B{
public:
	int getA_a(A &entity){
		return entity.a;
	}
};

int func_getA_a(A &entity){
	return entity.a;
}
int main(){
	A a;
	a.setA(10);

	cout << "a:" << a.getA() << endl;
	B b;
	cout << "b:" << b.getA_a(a) << endl;

	cout << "friend function:" << endl;
	cout << func_getA_a(a) << endl;
}