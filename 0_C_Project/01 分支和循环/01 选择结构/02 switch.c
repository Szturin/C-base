#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include <stdio.h>


int main2()
{
	int n = 1;
	int m = 2;
	switch (n)//switch执行一次条件判断，然后指定到对应的case语句中
	{
	case 1:
		m++;//n=1,m=3
	case 2://此处也会执行，因为没有上句没有break跳出, case不需要判断条件,直接执行语句内容
		n++;//n=2,m=3
	case 3://执行
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;//m=4,n=3
			break;//break跳出自己所在的switch语句
		}
	case 4:
		m++;//m=5,n=3
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}