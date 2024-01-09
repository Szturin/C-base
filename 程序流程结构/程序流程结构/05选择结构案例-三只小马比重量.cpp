#include<iostream>
using namespace std;

int main5()
{
	int weightA = 0;
	int weightB = 0;
	int weightC = 0;

	cout << "请分别输入三只小马的重量" << endl;

	cout << "请输入小马A的重量" << endl;
	cin >> weightA;

	cout << "请输入小马B的重量" << endl;
	cin >> weightB;

	cout << "请输入小马C的重量" << endl;
	cin >> weightC; // cin >> A >> B >> C;

	cout << "小马A的重量为：" << weightA << "kg" << endl;
	cout << "小马B的重量为：" << weightB << "kg" << endl;
	cout << "小马C的重量为：" << weightC << "kg" << endl;

	if (weightA > weightB)
	{
		if (weightA > weightC)
		{
			cout << "三只小马中最重的是A" << endl;
		}
		else if (weightC > weightA)
		{
			cout << "三只小马中最重的是C" << endl;
		}
		else 
		{
			cout << "三只小马中最重的是A和C" << endl;
		}
	}
	else if (weightB > weightA)
	{
		if (weightB > weightC)
		{
			cout << "三只小马中最重的是B" << endl;
		}
		else if (weightC > weightB)
		{
			cout << "三只小马中最重的是C" << endl;
		}
		else
		{
			cout << "三只小马中最重的是B和C" << endl;
		}
	}
	else 
	{
		if (weightC > weightA)
		{ 
			cout << "三只小马中最重的是C" << endl;	
		}
		else if (weightA > weightC)
		{
			cout << "三只小马中最重的是A和B" << endl;
		}
		else
		{
			cout << "三只小马一样重" << endl;
		}
		
	}

	system("pause");
	return(0);
}//嵌套法