#include<iostream>
using namespace std;

int main7()
{
	//switch���
	//����Ӱ���д��
	//10~9 ����
	//8~7 �ǳ���
	//6~5 һ��
	//5���� ��Ƭ

	//1.��ʾ�û�����Ӱ���
	cout << "�����Ӱ���" << endl;
	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3.�����û�����ķ�������ʾ�û����Ľ��

	switch(score)
	{
		case 10:
			cout << "����Ϊ�Ǿ����Ӱ" << endl;
			break;//�˳���ǰ��֧
		case 9:
			cout << "����Ϊ�Ǿ����Ӱ" << endl;
			break;
		case 8:
			cout << "����Ϊ��Ӱ�ǳ���" << endl;
			break;
		case 7:
			cout << "����Ϊ��Ӱ�ǳ���" << endl;
			break;
		case 6:
			cout << "����Ϊ��Ӱһ��" << endl;
			break;
		case 5:
			cout << "����Ϊ��Ӱһ��" << endl;
			break;
		default : // ��������ƥ���κ�һ��caseʱִ��
			cout << "����Ϊ����Ƭ" << endl;
	}
	//if��switch����
	//switch ȱ�� ���жϵ�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	//switch �ŵ� ���ṹ������ִ��Ч�ʸ�
	system("pause");
	return(0);
}
/*ע��1:switch����б��ʽֻ�������ͻ����ַ���
ע��2��case�����û��break,��ô�����һֱ����ִ��
�ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����*/