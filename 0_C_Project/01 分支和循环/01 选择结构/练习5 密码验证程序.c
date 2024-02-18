#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen strcmp
int main05()
{
	char password[20] = {0};//定义字符串 ， 假设密码为123456

	int i = 0;

	for (i = 0; i < 3; i++)//限制三次循环
	{
		printf("请输入密码:>");
		scanf("%s", password);//数组名本身就是地址
		//if(password == "123456") //字符串不能用判断操作符
		//if (strcmp(password, "123456")) //错误示例，if内要写条件“判断”，不然会直接执行！
		if ((strcmp(password, "123456")) == 0)//strcmp,依次比较ascii码值
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	//printf("连续三次输入错误密码，程序退出..."); 直接写这一句，不正确，会导致输入正确密码后，跳出循环，也打印这句内容
	if (i == 3)
	{
		printf("连续三次输入错误密码，程序退出...\n");
	}
	return 0;
}