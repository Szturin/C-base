#include<iostream>
using namespace std;
int main5()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;//执行完上级语句后换行
	}
	system("pause");
	return(0);
}
