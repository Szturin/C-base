#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main33()
{
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	printf("请确认密码(Y/N)：");

	//清除缓存区
	//getchar();//得到\n:回车
	//getchar();执行一次只能获取一个字符

	//清理缓冲区的多个字符
	int tmp = 0;
	while ((tmp = getchar()) != '\n') //getchar函数得到的是字符，但是返回值是ASCII值等等，所以可以用整型变量获取
	{
		;//空操作
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}

	else
	{
		printf("确认失败\n");
	}

	return 0;
}