#include<iostream>
using namespace std;

int main5()
{


	//1.constǶ��������ָ�����ι��ı�������ָ�볣��,���������const p����һ���������������Ϊָ�����εĳ���
	int a = 10;
	int b = 20;
	int* const p = &a;//��ַ��ָ�򣩲��ܱ�����
	//p = &b;����
	*p=20;//��ȷ


	//2.const����ָ�룬������ָ�룬�������Ϊָ������ָ��
	const int* p1 = &a;//ָ���ֵ���ܱ�����
	//*p1=20;����
	p1 = &b;


	//3.const����ָ��ͱ�����ָ������ָ�볣��
	const int* const p2 = &a;//��ַ��ָ�򣩺�ֵ�������޸�
	//p2 = &a;
	///*p2 = 20;
	system("pause");
	return(0);
}