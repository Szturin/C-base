#include<iostream>
using namespace std;


int main2()
{
	/*一维数组名称的用途
	1.可以统计整个数组在内存中的长度
	2,.可以获取数组在内存中的首地址*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组占用内存空间为：" << sizeof(arr) << "字节" << endl;//sizeof(arr[5]);可以统计单个元素在内存中的长度
	cout << "每个元素占用内存空间：" << sizeof(arr[0]) << "字节" << endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << "个" << endl;

	//2.可以通过数组名查看数组首地址
	cout << "数组首地址为：" << (int)arr << endl; //int(arr)和(int)arr语义不相同 首地址随即机调用
	cout << "数组中第一个元素的地址为：" << (int)&arr[0] << endl;//和首地址重叠
	cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;

	//数组名是常量，不可以进行赋值操作
	//arr = 100; 报错
	system("pause");
	return(0);
}
