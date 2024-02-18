#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//一个内存单元是一个byte:字节 
//一个byte由8个bit构成,1个bit为一个地址，所以一共8个地址  

int main7()
{
	int a = 100;
	printf("%p\n", &a);//%p用于打印地址;
	int *pa = &a;//pa是用来存放地址的，在c语言中pa叫指针变量
	//* 说明 pa是指针变量
	//int 说明pa执行对象是int类型的
	char ch = 'w';
	char* pc = &ch;
	
	*pa = 20;//*解引用操作，*pa就是通过pa里面的地址，找到a
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//32位机器，4个字节
	//64位机器，8个字节
	return 0;
}
