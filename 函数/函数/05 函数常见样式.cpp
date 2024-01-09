#include<iostream>
using namespace std;

//函数的常见样式
//无参无返
void test01()
{
	cout << "this is test01" << endl;
}
//有参无返
void test02(int a)
{
	cout << "this is test02, a = " << a << endl;
}
//无参有返
int test03()//int：有返回值就要定义返回值类型
{
	cout << "this is test03" << endl;
	return 1000;
}
//有参有返
int test04(int a)
{
	cout << "this is test04, a = " << a << endl;
	return 10000;
}


int main4()
{
	//无参无返函数调用
	test01();

	//有参无返函数调用
	test02(10);

	//无参有返函数调用
	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	//有参有返函数调用
	int num2 = test04(100);
	cout << "num2 = " << num2 << endl;

	
	system("pause");
	return(0);
}
//思考：返回值就是使用某一个函数的时候，函数整体给予的值




