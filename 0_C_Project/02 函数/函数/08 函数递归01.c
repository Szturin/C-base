#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ������ֵ����˳���ӡ����ÿһλ
void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);//�𵽴��ݲ���������
	}
	printf("%d ", num % 10);
}
//�����ݹ�
int main08()
{
	unsigned int num = 0;
	printf("���������֣�");
	scanf("%d", &num);
	print(num);
	return 0;
}