#include<iostream>//头文件，给予使用部分功能的权限

/*"include<>": 头文件，用于引用后面的<>中的文件中的代码，在这个函数中用于提取"iostream"文件中的代码，并编译使用其输出功能,*/
/*"iostream":用于存储iostream类库的 源文件 ，在这个程序中用于提供输出这项功能。
C++/C++11中头文件iostream定义了标准输入/输出流对象。包含了iostream也自动包含了ios、streambuf、istream、ostream和iosfwd。*/

using namespace std; //为了解决命名冲突问题而引入的概念，使用"命名空间“:std , C++标准程序库中的所有标识符都被定义于一个名为std的"namespace"(命名空间）”中

int main1() //main函数,程序入口,所有c++程序都需要一个main函数

/*int:一种声明方式，声明该函数是整型函数，需要给予一个返回值。
在C++中为了达到格式的规范化，避免出现不必要的错误，需要对函数进行声明。
main:每一个程序都需要有一个main函数，在C++中，程序由main函数开始编译运行。
*/

{
	cout << "你好，世界" << endl; //输出"hello world"并转入下一行，PS："cin":输入，"cout":输出, 其中cin要用 >>隔开

	system("pause"); // 命令 系统 在进行到这一步时 暂停,如果没有这串代码，程序运行时会立刻消失

	return 0; // 此处main函数是以int定义的，需要给予一个返回值，这里的返回值是0
}
/*分号用于语句结束*/
