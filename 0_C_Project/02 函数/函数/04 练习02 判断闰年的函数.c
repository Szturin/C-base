#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_leap_year(int i)
{
	if ((i % 100 != 0 && i % 4 == 0 )|| i % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int is_leap_year1(int i)
{
	return((i % 100 != 0 && i % 4 == 0) || i % 400 == 0);
}

//һ�������������д�������ͣ�Ĭ�Ϸ���INT���ͣ����ǲ��淶
int main04()
{
	int i = 0;
	for (i = 1000; i <= 2000;i++)
	{
		if (is_leap_year(i) == 1)
		{
			printf("%d������\n", i);
		}
	}
	
	return 0;
}