#include <iostream>

/*
*��Ԫ��������Ԫ����Գ���
*1.��Ԫ��ϵû�м̳��ԣ�������B����A����Ԫ����C�̳�����A����ô��Ԫ��B��û�취ֱ�ӷ�����C��˽�л򱣻���Ա
*2.��Ԫ��ϵû�д����ԣ�������B����A����Ԫ����C����B����Ԫ����ô��Ԫ��C��û�취ֱ�ӷ�����A��˽�л򱣻���Ա��Ҳ���ǲ����ڡ���Ԫ����Ԫ�����ֹ�ϵ
*3.��Ա������thisָ�룬����Ԫ����û��thisָ��
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
	//A����Ԫ��������Ԫ���������Ǹ���ĳ�Ա���������������κεط����ã���Ԫ������ͨ�������������ʸ����˽�л򱣻���Ա
	friend int func_getA_a(A &entity);
};

//A����Ԫ��
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