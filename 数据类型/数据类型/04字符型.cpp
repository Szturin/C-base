#include<iostream>
using namespace std;

int main4()
{
	/*字符型：字符型变量用于显示单个字符 语法 char ch = 'a'
	注意1：在显示字符串变量时，用单引号将字符括起来
	注意2：单引号内只能有一个字符，不能是字符串*/
	//c和c++中的字符型变量只占用一个字节
	//字符型变量不是把字符本身放到内存中存储，而是将相应的ASCII编码放入到储存单元 a---1 b---2 c---3

	//1.字符型变量创建的方式
	char ch = 'a';
	cout << ch << endl;

	//2.字符型变量所占内存大小
	cout << "char字符型变量所占的内存：" << sizeof(char) << endl;

	//3.字符型变量常见的错误
	//char ch2 = "b23131"; //创建字符串的时候要用单引号,且字符只能有一个

	//4.字符型变量对应的ASCII码
	//a - 97
	//A - 65
	cout << (int)ch << endl;//查看字符a对应的ASCII码
	ch = 65; //可以直接用ASCII码给字符型变量赋值
	cout << ch << endl;


	system("pause");
	return(0);
}
