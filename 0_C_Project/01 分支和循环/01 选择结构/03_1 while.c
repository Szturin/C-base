#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main31()
{
	//��whileѭ���У�continue����������������ѭ��,ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ����
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
		i++;
	}
}//ִ�н��������ѭ��