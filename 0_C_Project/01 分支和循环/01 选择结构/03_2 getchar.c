#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main32()
{
	//getchar() 获取一个字符
	//EOF end of file 文件结束的标识
	//putchar() 输出一个字符
	//int ch = getchar();
	//putchar(ch);

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
	//ctrl + z 读取到EOF结束
}