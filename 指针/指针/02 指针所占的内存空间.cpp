#include<iostream>
using namespace std;
int main2()
{
	int a = 100;
	//int*p;
	//p = &a;
	int * p = &a;//指针指向数据a的地址
	cout << *p << endl;
	*p = 100;//解引用
	cout << *p << endl;
	cout << a << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;//32位操作系统指针所占内存空间为4，64位为8
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(string*) = " << sizeof(string*) << endl;
	system("pause");
	return(0);
}