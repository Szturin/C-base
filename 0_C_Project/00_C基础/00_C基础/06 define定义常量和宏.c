#define _CRT_SECURE_NO_WARNINGS 1

//define定义符号
#define MAX = 1000

//define定义宏
//#define ADD(X,Y) X+Y //printf结果为11
//#define ADD(X,Y) （X+Y）错误写法
#define ADD(X,Y) ((X)+(Y)) //模式替换
#include<stdio.h>

int main6()
{
	printf("%d\n", 4 * ADD(2, 3));//4*2+3
	//宏是实现替换的
	return 0;
}