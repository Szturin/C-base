#include<iostream>
using namespace std;
int main2()
{
	int a = 100;
	//int*p;
	//p = &a;
	int * p = &a;//ָ��ָ������a�ĵ�ַ
	cout << *p << endl;
	*p = 100;//������
	cout << *p << endl;
	cout << a << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;//32λ����ϵͳָ����ռ�ڴ�ռ�Ϊ4��64λΪ8
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(string*) = " << sizeof(string*) << endl;
	system("pause");
	return(0);
}