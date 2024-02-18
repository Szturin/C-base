#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数的定义
//比较两个数，返回最大值
int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//返回z
}

//交换两个整型变量的值：void表示这个函数不返回任何值，也不需要返回
//swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
void Swap1(int x, int y)
{
	int temp = x;//temp = 0
	x = y;// x = 1
	y = temp;//y = 0
}

//通过指针，操作变量的值
void Swap2(int* pa, int* pb)//实际上，这里也创建了两个新的变量（形参），用于存放地址
{
	//将值，传递给对应地址的内存空间，成功改变了变量a,b的值
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}


int main02()
{
	int a = 10;
	int b = 20;
	//函数的调用
	int max = get_max(a, b);

	printf("%d\n", max);

	//写一个函数 -交换两个整型变量的值
	printf("交换前：a=%d b=%d\n", a, b);
	Swap1(a, b);//形参不影响实参，实际上Swap函数创建了另外地址，操纵的是完全不同的内存空间
	printf("交换后：a=%d b=%d\n", a, b);

	int* pa = &a;//pa就是一个指针变量
	*pa = 15;//通过pa，操纵指定地址的变量的值
	printf("%d\n", a);
	printf("交换前：a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}