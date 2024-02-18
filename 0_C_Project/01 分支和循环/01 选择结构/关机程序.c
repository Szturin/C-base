#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main0000001()
{
	//关机
	//c语言提供了一个函数:system() -执行系统命令的
	char input[20] = { 0 }; //存放输入的信息
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我爱玩原神，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我爱玩原神") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}