#include<iostream>
using namespace std;

int main3()
{

	//1.������ float
	//2.˫���� double �������;��Ȳ�һ��
	//Ĭ������£����һ��С���������ʾ��6λ��Ч����
	float f1 = 3.14f;//�������f˵����3.14���ٴ�ת����˫���ȣ�Ĭ�ϻ�˫���ȡ�

	cout << " f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << " d1 = " << d1 << endl;

	//ͳ��float��doubleռ�õ��ڴ�ռ�

	cout << "float��ռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;

	cout << "double��ռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2; //3 * 10 ^ 2

	cout << " f2 = " << f2 << endl;

	float f3 = 3e-2; //3 * 0.1 ^ 2

	cout << " f3 = " << f3 << endl;

	system("pause");
	return(0);
}