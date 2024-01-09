#include<iostream>
using namespace std;

int main()
{
	//goto 语句

	cout << "1、xxxx" << endl;

	cout << "2、xxxx" << endl;

	goto FLAG;

	cout << "3、xxxx" << endl;

	cout << "4、xxxx" << endl;

	FLAG:

	cout << "5、xxxx" << endl;



	system("pause");
	return(0);
}//注意：在程序中不建议使用goto语句，以免造成流程混乱