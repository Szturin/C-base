#include<iostream>
using namespace std;

int main2()
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int val = 0;
	while (val != num)
	{
		cout << "������²������" << endl;
		cin >> val;
		if (val > num)
		{
			cout << "����" << endl;
		}
		else if (val < num)
		{
			cout << "��С" << endl;
		}
		else
		{
			cout << "��ȷ" << endl;
			cout << "����������ǣ�" << num << endl;
		}
	}
	system("pause");
	return(0);
}