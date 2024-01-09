#include<iostream>
using namespace std;

int main5()
{
	//比较运算符, false为0, true为1
	//==
	int a = 10;
	int b = 20;

	cout << (a == b) << endl; //括号表示强调优先级

	//!=  不等于
	
	cout << (a != b) << endl;

	//>
	
	cout << (a > b) << endl;
	
	//<
	
	cout << (a < b) << endl;

	//>=
	
	cout << (a >= b) << endl;
	
	//<=

	cout << (a <= b) << endl;

	system("pause");
	return(0);
}