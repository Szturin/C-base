#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void hanoi(char Start, char Temp, char End, int n)
{
	if (n == 1)
	{
		printf("%c->%c\n", Start, End);
	}
	else
	{
		hanoi(Start, End, Temp, n-1);//态重置
		printf("%c->%c\n", Start, End);//执行动作
		hanoi(Temp, Start, End, n-1);//态重置
	}
}
int main13()
{
	hanoi('a', 'b', 'c', 3);
	return 0;
}