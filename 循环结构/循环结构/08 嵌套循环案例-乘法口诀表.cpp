#include<iostream>
using namespace std;

int main8()
{
	//�˷��ھ���
	//��ӡ����
	// 
	// ���ѭ����������
	for (int i = 1; i <= 9; i++)
	{
		//cout << i << endl;

		// �ڲ�ѭ������������ÿ�е��������ڵ�ǰ����
		for (int j = 1; j <= i; j++)
		{
			// ����˷����ʽ
			cout << j << " x " << i << " = " << j * i << "  ";
		}
		// ���У���ʼ��ӡ��һ��
		cout << endl;
	}



	system("pause");
	return(0);
}