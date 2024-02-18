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
} s1, s2;//s1和s2也是结构体变量
//s1,s2是全局变量

//结构体的调用
int main1()
{
	//s是局部变量
	struct Stu s = { {'w',20,3.14 }, "张三", 30, "20200534" };//对象

	printf("%c\n",s.sb.c);
	printf("%s\n", s.id);
	
	struct Stu* ps = &s;//结构体指针
	printf("%c\n",(*ps).sb.c);
	printf("%c\n", ps->sb.c);//ps是指针可以用->操作符,sb是变量不是指针只能用.操作符

	return 0;
}