#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main4()
{
	int i = 0;//c语言风格for语句之前需要定义变量,c++可以在for循环内部定义
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}//会执行i++，之后i=6
		printf("%d\n", i);//结果跳过5
	}
	return 0;
}