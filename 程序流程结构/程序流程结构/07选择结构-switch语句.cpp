#include<iostream>
using namespace std;

int main7()
{
	//switch语句
	//给电影进行打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5以下 烂片

	//1.提示用户给电影打分
	cout << "请给电影打分" << endl;
	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	//3.根据用户输入的分数来提示用户最后的结果

	switch(score)
	{
		case 10:
			cout << "您认为是经典电影" << endl;
			break;//退出当前分支
		case 9:
			cout << "您认为是经典电影" << endl;
			break;
		case 8:
			cout << "您认为电影非常好" << endl;
			break;
		case 7:
			cout << "您认为电影非常好" << endl;
			break;
		case 6:
			cout << "您认为电影一般" << endl;
			break;
		case 5:
			cout << "您认为电影一般" << endl;
			break;
		default : // 当变量不匹配任何一个case时执行
			cout << "您认为是烂片" << endl;
	}
	//if和switch区别？
	//switch 缺点 ：判断的时候只能是整型或者字符型，不可以是一个区间
	//switch 优点 ：结构清晰，执行效率高
	system("pause");
	return(0);
}
/*注意1:switch语句中表达式只能是整型或者字符型
注意2：case里如果没有break,那么程序会一直向下执行
总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间*/