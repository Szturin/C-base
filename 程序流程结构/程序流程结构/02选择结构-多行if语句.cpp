#include<iostream>
using namespace std;
#include <windows.h>

int main2()
{
	//ѡ��ṹ������if���
	//��������������������100����Ϊ"Opening the World",����Ļ�����
	//���û�ﵽ100�����ϣ���ӡ"Nothing Happened"

	//1.�������
	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	

	//2.��ʾ�û�����ķ���
	cout << "������ķ���Ϊ:" << score << endl;

	//3.�ж�

	
	cout << "���Ե�" << endl;//����Ч��
	Sleep(3000);//��ʱ����


	if (score > 100)
	{
		cout << "Opening the World!" << endl;
	}
	else
	{
		cout << "Nothing Happened..." << endl;
	}


	system("pause");
	return(0);
}