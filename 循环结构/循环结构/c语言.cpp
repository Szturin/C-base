#include<stdio.h>
int main9()
{
	int x11, y,count = 0;
	printf("请输入x年和y年:");
	scanf_s("%d %d", &x11, &y);
	while (x11 >= y)
	{
		printf("请重新输入x年和y年:");
		scanf_s("%d %d", &x11, &y);
	}
	return 0;
}
