#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main1()
//{
//	printf("你好\n");
//	return 0;
//}
////编译+链接+运行代码
////快捷键：ctrl+f5
//
//int main2()
//{
//	printf("hello\n");
//	printf("%d\n", 100);
//	printf("%d\n", sizeof(char));//sizeof单位：byte
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//
////全局变量
//int a = 100;
//
//int main3()
//{
//	//局部变量
//	int age = 20;//整形变量
//	float weight = 20.1;//浮点型
//	double weight0 = 20.22;
//	weight = weight + 10;
//	age = age + 1;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	
//	//不建议：把全局变量和局部变量命名相同
//	int a = 10;//局部优先
//	printf("%d\n",a);
//	return 0;
//%d - 整形
//%f - float
//%lf - double

/*
1.局部变量
2.全局变量
*/

//}
//
////写一个代码求2个整数的和
//int main4()
//{
//	int a = 0;
//	int b = 10;
//	int sum = 0;
//	scanf("%d %d", &a, &b);//scanf函数是输入函数,对应接入地址
//	//scanf_s是VS编译提供的，不建议使用
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
int g_val = 100;//全局变量
int main()
{
	return 0;
}