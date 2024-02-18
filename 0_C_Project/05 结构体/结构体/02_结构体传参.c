#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct B
{
	char c;
	short s;
	double d;
};

struct Stu//类
{
	//成员变量
	struct B sb;//结构体的成员可以是另外的结构体
	char name[20];//名字
	int age;//年龄
	char id[20];
};//s1和s2也是结构体变量
//s1,s2是全局变量

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}


int main()
{
	//s是局部变量
	struct Stu s = { {'w',20,3.14 }, "张三", 30, "20200534" };//对象
	//写一个函数打印s的内容
	print1(s);//传s到t要创建和s等大的空间
	print2(&s);//使用指针传递参数更好,指针是传值调用,仅仅传递了一个地址
	return 0;
}

//函数调用的参数压栈
//栈是一种数据结构，先进的后出，后进的先出
//给栈存放数据称之为压栈
//每一个函数调用的会在内存的栈区上开辟一块空间

//“函数栈帧的创建和销毁”