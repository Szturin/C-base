#include<iostream>
using namespace std;


int main6()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;//arr就是数组首地址

	cout << "数组的第一个元素：" << arr[0] << endl;
	cout <<"指针访问的第一个元素:"<< * p << endl;
	cout << "指针遍历数组元素：" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return(0);
}