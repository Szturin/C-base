#include<iostream>
using namespace std;
#include "swap.h"
#include "sum0toN.h"

int main()
{
	int select = 0;
	while (select == 0)
	{
		int a;
		int b;
		int n;
		cout<<"������������ num1 num2 ��ֵ��" << endl;
		cout << "������num1��" << endl;
		cin >> a;
		cout << "num1�ĳ�ʼֵΪ��" << a << endl;
		cout << "������num2��" << endl;
		cin >> b;
		cout << "num2�ĳ�ʼֵΪ��" << b << endl;
		swap(a, b);
		cout << "����1��n���ۼӣ�������n��" << endl;
		cin >> n;
		cout << "�ۼӺ�Ϊ��" << sum0toN(n) << endl;

		cout << "���ʻ�Ҫ����ִ�г����������������0��" << endl;
		cin >> select;
		if (select == 0)
		{
			cout << "����ִ�г���" << endl;
		}
		else
		{
			cout << "��������..." << endl;
		}
	}
	system("pause");
	return(0);
}