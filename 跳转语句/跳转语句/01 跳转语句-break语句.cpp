#include<iostream>
using namespace std;
//���ã�����ѡ��ṹ����ѭ���ṹ
//breakʹ�õ�ʱ����
//1.������switch��������У���������ֹcase������switch
//2.������ѭ������У�������������ǰ��ѭ�����
//3.������Ƕ��ѭ���У�����������ڲ�ѭ�����

int main1()
{
	//break��ʹ��ʱ��

	//1��������switch�����
	//cout << "��ѡ�񸱱��Ѷ�" << endl;
	//cout << "1����ͨ" << endl;
	//cout << "2���е�" << endl;
	//cout << "3������" << endl;

	//int select = 0; //����ѡ�����ı���

	//cin >> select; //�ȴ��û�����

	//switch (select)
	//{
	//case 1:
	//	cout << "��ѡ�������ͨ�Ѷ�" << endl;
	//	break;//�˳�switch
	//case 2:
	//	cout << "��ѡ������е��Ѷ�" << endl;
	//	break;
	//case 3:
	//	cout << "��ѡ����������Ѷ�" << endl;
	//	break;
	//default:
	//	break;
	//}
	// ctrl+k ctrl+c ���ע��



	//2.������ѭ�������
	//for (int i = 0; i < 10; i++)
	//{
	//	//���i����5,�˳�ѭ��,���ٴ�ӡ
	//	if (i == 5)
	//	{
	//		break;//�˳�ѭ��
	//	}
	//	cout << i << endl;
	//}
		
	//3��������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; //�˳��ڲ�ѭ��
			}
			cout << " * ";
		}
		cout << endl;
	}
	system("pause");
	return(0);
}