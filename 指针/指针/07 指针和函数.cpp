#include<iostream>
using namespace std;

//�����Ķ���Ҫ��main����֮��

//ֵ����
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}

//��ַ����
void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7()
{
	int a = 10;
	int b = 20;
	swap01(a, b);//ֵ���ݲ��ܸı�ʵ��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap02(&a, &b);//��ַ���ݿ��Ըı�ʵ��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return(0);
}