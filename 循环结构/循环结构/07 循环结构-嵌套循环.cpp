#include<iostream>
using namespace std;
#define RESET   "\033[0m"
#define PINK    "\033[95m"

int main()
{

	//����Ƕ��ѭ��ʵ����ͼ

	//��ӡһ����ͼ
	//���ִ��1�Σ��ڲ�ִ��1��
	//���ѭ��
	for (int i = 0; i < 10; i++)    // �ڲ�forѭ���ı���i���ⲿforѭ���ı���i���ڲ�ͬ���������С�
	{
		//�ڴ�ѭ��
		for (int j = 0; j < 10; j++) //i��Ϊj����������
		{
			cout << PINK << "* " << RESET;
		}
		cout << endl;//����ѭ��������ֱ�г�ʼ����� �� int i = 0��
	}


	system("pause");
	return(0);
}