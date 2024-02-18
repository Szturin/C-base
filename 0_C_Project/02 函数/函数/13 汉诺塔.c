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
		hanoi(Start, End, Temp, n-1);//̬����
		printf("%c->%c\n", Start, End);//ִ�ж���
		hanoi(Temp, Start, End, n-1);//̬����
	}
}
int main13()
{
	hanoi('a', 'b', 'c', 3);
	return 0;
}