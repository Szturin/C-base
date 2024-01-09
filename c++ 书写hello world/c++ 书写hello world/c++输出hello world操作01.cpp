#include<iostream>

using namespace std;

int main3()

{
	cout << "hello world222" << endl;

	system("pause");

	return(0);

}
/* 运行日志：代码无误，但运行时出现错误，错误原因：一个源文件中出现重复的main函数，导致冲突，两个项均无法正确运行，
更正方法：将其中一个项的代码中的main改为main1,运行结果：两个项成功输出"hello world" 
日志2：命名main1无效，实际运行的依然是第一个源文件:c++书写hello world 01*/
