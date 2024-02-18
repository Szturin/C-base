#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Add(int* p)
{
	//*p++;
	(*p)++;
}

int main06()
{
	int a = 0;
	printf("a=%d\n", a);
	Add(&a);
	printf("a=%d\n", a);
	return 0;
}