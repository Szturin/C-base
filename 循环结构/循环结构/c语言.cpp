#include<stdio.h>
int main9()
{
	int x11, y,count = 0;
	printf("������x���y��:");
	scanf_s("%d %d", &x11, &y);
	while (x11 >= y)
	{
		printf("����������x���y��:");
		scanf_s("%d %d", &x11, &y);
	}
	return 0;
}
