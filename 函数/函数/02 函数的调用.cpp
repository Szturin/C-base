#include<iostream>
using namespace std;


//����ӷ�����
//���������ʱ��num1��num2��û��ʵ�ʵ����ݣ�ֻ��һ����ʽ�ϵĲ���������βΡ�
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return(sum);
}
int main2()
{
	//main�����е���add����
	int a = 10;
	int b = 20;

	//���������﷨����������(����)
	//a��b��Ϊʵ�ʵĲ��� ��ʵ�Ρ�
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add1(a, b);//���������������ã����Ҹ�ֵ�� ���� c
	cout <<"c = " << c << endl;

	a = 100;
	b = 200;

	c = add1(a, b);
	cout << "c = " << c << endl;

	system("pause");
	return(0);
}