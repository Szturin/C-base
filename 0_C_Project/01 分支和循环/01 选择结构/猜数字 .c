#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//дһ����������Ϸ
//1.�Զ�����һ��1-100֮�������
//2.������
//	a.�¶��ˣ���Ϸ����
//	b.�´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸ����һֱ�棬�����˳���Ϸ
void meun()
{
	printf(" ************************ \n");
	printf("**************************\n");
	printf("******  ��������Ϸ  ******\n");
	printf("****     1.��ʼ      *****\n");
	printf("****     0.����      *****\n");
	printf("**************************\n");
	printf(" ************************ \n");
}


void Game()
{
	//srand((unsigned int)time(NULL));//һ����������һ����������Ӻ������㹻�ˣ������ظ�ʹ��
	int ret = rand() & 100 + 1;//���������������������ķ�ΧΪ0~32767,ȡģ
	int guess = 0;
	while (1)
	{
		printf("������֣�");//����²������
		scanf("%d", &guess);
		if (guess > ret)//�жϱȽ�
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf(" *         *\n");
			printf("* *       * *\n");
			printf("��ϲ��¶��ˣ�\n");
			break;//�˳�ѭ��
		}
	}
}

int main001()
{
	srand((unsigned int)time(NULL));//ʱ�� - ʱ���
	int input = 0;
	do
	{
		meun();//��ʾ�˵�

		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)//����ѡ��
		{
		case 1:
			printf("<��Ϸ��ʼ>\n");
			Game();
			break;
		case 0:
			printf("<��Ϸ����>\n");
			break;
		default:
			printf("<����ˣ����������룡>\n");
		}
	} while (input); //ֻҪinput��Ϊ0,�������ִ��

	return 0;
}