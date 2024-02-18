#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个代码,打印100~200之间的素数
//素数-质数
//只能被1和他本身整除

int main0011()
{
	int i ,j = 0;

	//判断i是不是质数
	for (i = 100; i <= 200; i++)
	{
		int flag = 1;//定义一个参数，检测i是否能被除了1和它本身的数整除
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;//如果能被2到i-1之间的整除，记录z=1
				//break;
			}
		}
		
		if (flag == 1)//不能被2到i-1之间的整数
		{
			printf("%d是质数\n", i);//那么i就是质数
		}
	}
	return 0;
}