#include<iostream>
using namespace std;
int main4()
{
	int num = 100;
	do
	{
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;
		if (a* a* a + b * b * b + c * c * c == num)
		{
			cout << "ˮ�ɻ���Ϊ��" << num<< endl;
		}
		num++;
	} 
	while (num < 1000);
	system("pause");
	return(0);
}