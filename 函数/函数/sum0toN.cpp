#include "sum0toN.h"

int sum0toN(int n)
{
	int result = 0;
	for (int i = 0; i <= n; i++) //for ѭ���÷ֺŸ�����������
	{
		result += i;
	}
	return(result);
}
