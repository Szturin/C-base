#include<iostream>
using namespace std;


int main6()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;//arr���������׵�ַ

	cout << "����ĵ�һ��Ԫ�أ�" << arr[0] << endl;
	cout <<"ָ����ʵĵ�һ��Ԫ��:"<< * p << endl;
	cout << "ָ���������Ԫ�أ�" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return(0);
}