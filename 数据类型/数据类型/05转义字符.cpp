#include<iostream>
using namespace std;

int main5()
{
	//转义字符
	//换行符 \n

	cout << "hello world\n"; //与cout << "hello word" << endl;作用相同

	//反斜杠 \\

	cout << "\\" << endl;// 输出"\"

	//水平制表符 \t  作用：整齐输出数据   \t表示有8个空间

	cout << "aa\thello world" << endl;
	cout << "aaa\thello world" << endl;
	cout << "aaaa\thello world" << endl;

	system("pause");
	return(0);
}