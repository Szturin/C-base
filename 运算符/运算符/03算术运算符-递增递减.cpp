#include<iostream>
using namespace std;

int main3()
{
	//1.ǰ�õ���
	int a = 10;
	++a; //�ñ�������ǰ�õ�������
	cout << "a=" << a << endl;
	
	//2.���õ���
	int b = 10;
	b++; //�ñ������к��õ�������
	cout << "b=" << b << endl;

	//3.ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ���+1��Ȼ����б��ʽ����    ע�⣺a1���Ϊ�仯�� b1������� a1(�仯��)
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << a1 << endl;
	cout << b1 << endl;
	
	//���õ��� �Ƚ��б��ʽ���㣬���ñ���+1      ע�⣺a2���Ϊ�仯�� b2������� a1(�仯ǰ)
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << a2 << endl;
	cout << b2 << endl;
	

	system("pause");
	return(0);
}
//�ݼ�--