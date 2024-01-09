#include<iostream>
using namespace std;
#include <windows.h>

//多条件的if语句：if（条件1){条件1满足执行的语句}   else if(条件2){条件2满足执行的语句}...    else{都不满足执行的语句}


int main3()
{
	//选择结构 多条件语句
	//输入一个速度(km/s)，如果大于300000，视为"超过光速"
	//大于17,视为"超过逃逸太阳系速度"
	//大于12，视为"超过逃逸地球速度"
	//小于等于12,视为"未成功逃逸"

	//1.输入航行速度
	int vel = 0;
	cout << "请规定航行速度" << endl;
	cin >> vel;

	//2.提示操作者输入航行速度
	cout << "您输入的速度为：" << vel << "公里/秒" << endl;

	//3.判断

	cout << "请稍等，速度跃迁中..." << endl;//附加效果
	Sleep(vel/100);//延时函数, 1为1毫秒, vel/100 设置加速度为100

	//超光速
	if (vel > 300000)
	{
		cout << "已达到超光速" << endl; // << 内容
	}

	//逃逸太阳系
	else if (vel > 17)
	{
		cout << "已超过逃逸太阳系速度" << endl;
	}

	//逃逸地球
	else if (vel > 12)
	{
		cout << "已超过逃逸地球速度" << endl;
	}

	//未成功逃逸
	else 
	{
		cout << "未成功逃逸" << endl;
	}

	system("pause");
	return(0);
}