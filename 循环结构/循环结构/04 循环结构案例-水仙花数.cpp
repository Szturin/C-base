#include<iostream>
using namespace std;

int main4()
{
	//1.�����е���λ��������� ��100~999��

	int num = 100;

	do
	{
		//2.��������λ�����ҵ�ˮ�ɻ���

		int a = 0;//��λ
		int b = 0;//ʮλ
		int c = 0;//��λ

		a = num % 10;//��ȡ���ֵĸ�λ
		b = num / 10 % 10;//��ȡ���ֵ�ʮλ
		c = num / 100 % 10;//��ȡ���ֵİ�λ

		if (a*a*a + b*b*b + c*c*c == num)//�ж��Ƿ�Ϊ�ɻ���
		{
			cout << num << endl; //���ˮ�ɻ���
		}
		num++; //ѭ����
	}
	while(num < 1000);//ѭ������


	system("pause");
	return(0);
}