#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main4()
{
	int i = 0;//c���Է��for���֮ǰ��Ҫ�������,c++������forѭ���ڲ�����
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}//��ִ��i++��֮��i=6
		printf("%d\n", i);//�������5
	}
	return 0;
}