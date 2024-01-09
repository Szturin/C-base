#include<iostream>
using namespace std;

int main4()
{
	//指针变量指向内存地址编号为0x0011的空间
	int* p = (int*)0x0011;
	//访问野指针报错
	cout << *p << endl;
	system("pause");
	return(0);
}
//总结：空指针和野指针都不是我们申请的空间，都是非法空间，不能访问