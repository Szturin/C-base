#include<iostream>
using namespace std;

int main1() 
{
	//1.����ָ��
	int a = 10;
	//ָ�붨����﷨���������� * ָ���������
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << &a << endl;//��ӡ����a�ĵ�ַ
	cout << p << endl;//��ӡָ�����p
	//2.ʹ��ָ��
	//����ͨ�������ã�*���ķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����(���Խ����޸ĺͶ�ȡ��
	cout << *p << endl;
	*p = 1000;
	cout << *p << endl;
	cout << a << endl;
	system("pause");
	return(0);
	
}