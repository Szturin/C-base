#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main01()
{
	int n = 0;
	printf("«Î ‰»În£∫");
	scanf("%d", &n);
	
	int i = 0;
	int num = 1;
	for (i = 1; i <= n; i++)
	{
		num = num * i;
	}
	printf("%d\n", num);
	return 0;
}