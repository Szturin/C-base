#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//��ǰ���߱����������Ĵ��ڣ��������ú���������
//����������
int max(int a, int b);

int main5()
{
	int c = max(10, 20);
	cout << "c = " << c << endl;


	system("pause");
	return(0);
//����
}int max(int a, int b)
{
	return a > b ? a : b;
}
//ע�⣺���������ж�Σ����Ƕ���ֻ����һ��