#include<iostream>

class B{
public:
	explicit B(int x=0,bool b= true);//explicitֻ�����ι��캯������ʾ�ù��캯��ֻ����ʾ����
};

class C{
public :
	C(int x = 1, int y = 2);
};

int main()
{
	B obj(12);//��ȷ��������ʽ���ù��캯��
	B ob = 12;//�������൱����ʽ�ĵ����˹��캯������ʾ�ĵ��÷�ʽӦ��ΪB obj(12)

	C oc(12);//��ȷ��������ʽ����
	C oc2 = 12;//��ȷ�����캯��û�б�explicit���Σ�������ʽ����
}