#include<iostream>
using namespace std;

int main2()
{
	//���ͣ� short(2) int(4) long(4) long long(8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨: sizeof( �������� /���� )
	short num1 = 1000;
	
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;//sizeof(short)�е�shortҲ�����滻Ϊnum1

	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;

	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;

	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;

	//���ʹ�С�Ƚ�
	//short < int <= long <= long long

	system("pause");
	return(0);
}