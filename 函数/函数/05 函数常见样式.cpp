#include<iostream>
using namespace std;

//�����ĳ�����ʽ
//�޲��޷�
void test01()
{
	cout << "this is test01" << endl;
}
//�в��޷�
void test02(int a)
{
	cout << "this is test02, a = " << a << endl;
}
//�޲��з�
int test03()//int���з���ֵ��Ҫ���巵��ֵ����
{
	cout << "this is test03" << endl;
	return 1000;
}
//�в��з�
int test04(int a)
{
	cout << "this is test04, a = " << a << endl;
	return 10000;
}


int main4()
{
	//�޲��޷���������
	test01();

	//�в��޷���������
	test02(10);

	//�޲��з���������
	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	//�в��з���������
	int num2 = test04(100);
	cout << "num2 = " << num2 << endl;

	
	system("pause");
	return(0);
}
//˼��������ֵ����ʹ��ĳһ��������ʱ�򣬺�����������ֵ




