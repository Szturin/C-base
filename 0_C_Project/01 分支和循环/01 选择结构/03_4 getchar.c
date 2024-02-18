#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main34()
{
	int ch = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >'9')//这里为字符0和字符9
		{
			continue;
		}
		putchar(ch);
	}
}