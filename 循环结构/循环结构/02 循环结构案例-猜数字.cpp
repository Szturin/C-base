#include<iostream>
using namespace std;

int main2()
{
	//1.ϵͳ���������
	srand(time(0));// ������������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	int num = rand() % 100 + 1; //���� 0 + 1~99 + 1 ����� (�� 1 ~ 100)
	//cout << num << endl; //���û��srand(time(0)); ��̶�Ϊͬһ�����������		�����α�����һֱΪ42

	//2.��ҽ��в²�
	int val = 0;
	
	while (num != val)
	{
		cin >> val; //�����������

		//3.�ж���ҵĲ²�
		//�´�	��ʾ�µĽ��		������߹�С		 ���·��صڶ���
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{ 
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ���¶��ˣ�" << endl;
		}



	}
	/*
	while(1)
	{
		ѡ��ṹ
		break;//�Ƴ���ǰѭ���ṹ�������øùؼ����Ƴ�ѭ��
	}
	Ҳ���Խ���ѭ��
	*/
	




	system("pause");
	return(0);
}