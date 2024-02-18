#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.static 修饰局部变量
//2.static 修饰全局变量
//3.static 修饰函数

extern int g_val;//声明外部变量
//static int g_val = 100;  //static 修饰全局变量使得全局变量只能在自己所在的源文件内部使用
//extern int g_val;报错

//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了

//static int Add(int x, int y)
//{
//	return x + y;
//}
//static 修饰函数，使得函数只能在自己的源文件内部使用，不能在其他源文件内部使用，
//本质上：static是将函数的外部链接属性变成内部链接属性（与static修饰全局变量类似）

void test()
{
	//int a =1; 10个2
	static int a = 1; //2到11 , a 出函数体不会销毁，再次进入函数体保持上一次的值
	a++;
	printf("%d\n", a);
}

//声明函数
extern int Add(int, int);//定义在test01.c中

int main5()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	printf("%d\n", g_val);
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d", sum);
	return 0;
}
//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型） 