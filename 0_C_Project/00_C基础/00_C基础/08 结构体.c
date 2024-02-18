#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体可以让c语言创建出新的类型出来
//创建一个学生

struct Stu
{
	char name[20];//名字
	int age; //年龄
	char sex[5];//性别
	char id[15];//学号
};

int main8()
{
	//结构体的初始化
	struct Stu s = { "张三",18,"男","20241574" };
	printf("名字:%s 年龄:%d 性别:%s 学号:%s\n", s.name, s.age, s.sex, s.id);

	//操作符：->
	struct Stu* ps = &s;
	printf("名字:%s 年龄:%d 性别:%s 学号:%s\n", ps->name, ps->age, ps->sex, ps->id);
	return 0;
  }