#include<iostream>

class X{
public:
	X();//default ���캯��
	X(const X&)=delete;  // ����copy���캯��Ϊ deleted ����
	X& operator = (const X &) = delete; // ����copy assignment������Ϊ deleted ����
	void doSomething(int x)=delete;
};


int main(){
	X x1;
	X x2(x1);   // ���󣬿������캯��������
	X x3;
	x3 = x1;     // ���󣬿�����ֵ������������


	//ע�⣬��=���ǿ��Ե���copy������
	X x4 = x1;//���µĶ���x4�����壬�������д����Ĭ�ϵ�������Ŀ�������
	X x4;
	x4 = x1; //û���µĶ����壬������ַ�ʽ���ǵ�����Ŀ�������������ʹ�ø�ֵ��������=��
	x4.doSomething(11);//�����õĺ��������ܵ���
}