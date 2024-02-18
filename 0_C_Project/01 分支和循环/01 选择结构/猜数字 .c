#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//写一个猜数字游戏
//1.自动产生一个1-100之间的数字
//2.猜数字
//	a.猜对了，游戏结束
//	b.猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏可以一直玩，除非退出游戏
void meun()
{
	printf(" ************************ \n");
	printf("**************************\n");
	printf("******  猜数字游戏  ******\n");
	printf("****     1.开始      *****\n");
	printf("****     0.结束      *****\n");
	printf("**************************\n");
	printf(" ************************ \n");
}


void Game()
{
	//srand((unsigned int)time(NULL));//一个程序设置一次随机数种子函数就足够了，这里重复使用
	int ret = rand() & 100 + 1;//定义随机数，生成随机数的范围为0~32767,取模
	int guess = 0;
	while (1)
	{
		printf("请猜数字：");//输入猜测的数字
		scanf("%d", &guess);
		if (guess > ret)//判断比较
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf(" *         *\n");
			printf("* *       * *\n");
			printf("恭喜你猜对了！\n");
			break;//退出循环
		}
	}
}

int main001()
{
	srand((unsigned int)time(NULL));//时间 - 时间戳
	int input = 0;
	do
	{
		meun();//显示菜单

		printf("请选择:>");
		scanf("%d", &input);

		switch (input)//输入选择
		{
		case 1:
			printf("<游戏开始>\n");
			Game();
			break;
		case 0:
			printf("<游戏结束>\n");
			break;
		default:
			printf("<输错了，请重新输入！>\n");
		}
	} while (input); //只要input不为0,程序继续执行

	return 0;
}