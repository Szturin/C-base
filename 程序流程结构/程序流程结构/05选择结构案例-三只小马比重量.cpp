#include<iostream>
using namespace std;

int main5()
{
	int weightA = 0;
	int weightB = 0;
	int weightC = 0;

	cout << "��ֱ�������ֻС�������" << endl;

	cout << "������С��A������" << endl;
	cin >> weightA;

	cout << "������С��B������" << endl;
	cin >> weightB;

	cout << "������С��C������" << endl;
	cin >> weightC; // cin >> A >> B >> C;

	cout << "С��A������Ϊ��" << weightA << "kg" << endl;
	cout << "С��B������Ϊ��" << weightB << "kg" << endl;
	cout << "С��C������Ϊ��" << weightC << "kg" << endl;

	if (weightA > weightB)
	{
		if (weightA > weightC)
		{
			cout << "��ֻС�������ص���A" << endl;
		}
		else if (weightC > weightA)
		{
			cout << "��ֻС�������ص���C" << endl;
		}
		else 
		{
			cout << "��ֻС�������ص���A��C" << endl;
		}
	}
	else if (weightB > weightA)
	{
		if (weightB > weightC)
		{
			cout << "��ֻС�������ص���B" << endl;
		}
		else if (weightC > weightB)
		{
			cout << "��ֻС�������ص���C" << endl;
		}
		else
		{
			cout << "��ֻС�������ص���B��C" << endl;
		}
	}
	else 
	{
		if (weightC > weightA)
		{ 
			cout << "��ֻС�������ص���C" << endl;	
		}
		else if (weightA > weightC)
		{
			cout << "��ֻС�������ص���A��B" << endl;
		}
		else
		{
			cout << "��ֻС��һ����" << endl;
		}
		
	}

	system("pause");
	return(0);
}//Ƕ�׷�