#include<iostream>
using namespace std;

int main()
{
	//1.�߼������  ��  !
	int a = 10;
	//��C++�У� ����0��Ϊ��
	cout << !a << endl;//���aΪ�٣���ô!aΪ��

	cout << !!a << endl;//����ȡ ��


	//2.�߼������ �� &&            �߼��룺ͬ��Ϊ�棬����Ϊ��
	int a1 = 10;
	int b1 = 10;


	cout << (a1 && b1) << endl;

	//int a1 = 10;
	//int b1 = 0;    ���󣺲���ͬʱ������ͬ��������,����������������ͬ���Ƶı���a

	a1 = 10;
	b1 = 0;

	cout << (a1 && b1) << endl;


	//3.�߼������ �� ||            �߼���ͬ��Ϊ�٣�����Ϊ��
	int a2 = 10;        
	int b2 = 10;

	cout << (a2 || b2) << endl;

	a2 = 10;
	b2 = 0;

	cout << (a2 || b2) << endl;

	a2 = 0;
	b2 = 0;

	cout << (a2 || b2) << endl;

	system("pause");
	return(0);
}//��� ^