#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//作用域和生命周期
// 
// 作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
//
//
//int g_val = 2021;//全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}
//



//extern g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和摧毁之间的时间段

//局部变量的生命周期：进入作用域生命周期开始，出作用域被摧毁
//全局变量的生命周期：程序的生命周期

int main3()
{
	{
		int a = 10;
		printf("%d\n", a);
	}
	//printf("%d\n", a);变量a不能使用，已经被摧毁
	return 0;
}