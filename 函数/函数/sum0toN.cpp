#include "sum0toN.h"

int sum0toN(int n)
{
	int result = 0;
	for (int i = 0; i <= n; i++) //for 循环用分号隔开各个部分
	{
		result += i;
	}
	return(result);
}
