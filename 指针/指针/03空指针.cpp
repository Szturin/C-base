#include<iostream>
using namespace std;

int main3()
{
	//1.空指针：指针变量指向内存中编号为0的空间
	int* p = NULL;//NULL 内存地址编号为p的空间
	//2.用途：初始化指针变量


	//3.注意：空指针指向的内存是不可以访问的
	//内存编号0~255为系统占用内存，不允许用户访问
	*p = 100;//访问空指针报错
	
	system("pause");
	return(0);
}