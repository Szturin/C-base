#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归实现n的k次方

double Pow(int n,int k)
{
	if (k == 0 )
	{
		return 1.0;
	}
	else if(k>0)
	{
		return Pow(n, k - 1) * n;
	}
	else
	{
		return 1.0/(Pow(n, -k));
	}
}

int main22()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	printf("%lf", Pow(n, k));
	return 0;
}
