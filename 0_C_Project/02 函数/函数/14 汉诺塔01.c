#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
unsigned int count1 = 0;
void hanoi1(unsigned char Start, unsigned char Temp, unsigned char End, unsigned int n)
{
	if (n == 1)
	{
		printf("%c--->%c\n", Start, End);//操纵当前基层
		count1++;//记录汉诺塔移动次数
	}
	else
	{
		hanoi1(Start, End, Temp, n - 1);//上层以基层的中间态为目标态，进行转移
		printf("%c--->%c\n", Start, End);//基层到目标态
		count1++;
		hanoi1(Temp, Start, End, n - 1);//上层以基层的中间态为起始态，转移到基层的目标态
	}
}
//汉诺塔问题的参数
// 三个杆（对应不同的状态）
//汉诺塔层数

//一层汉诺塔问题
//基层-->目标态

//要解决二层汉诺塔问题
//首先，把上层<1>移动到中间态，即一个一层问题，即hanoi1(Start, End, Temp, 1);
//此时，基层上无阻挡层，基层-->目标态
//最后，二层塔问题变为了一层塔问题，剩下的上层<1>变更为基层*，B杆对于基层*来说是起始杆

//1.要解决三层汉诺塔问题，先把上层<2>,以基层的中间态为目标态，即先解决一个二层汉诺塔过程，再把基层移动到目标态
//2.第一个二层汉诺塔过程,执行 hanoi1(Start, End, Temp, 2);
//3.之后，直接移动基层，即printf("%c--->%c\n", Start, End); 基层-->目标态
//4.此时，上层<2>位于B杆，而基层转移到了C杆，此时三层塔问题被解构成了二层塔问题
//5.不同的是，此时的二层汉诺塔问题以B杆为起始态，以A杆为中间态，以C杆为目标态。基层*,上层<1>*

int main14()
{
	hanoi1('A', 'B', 'C', 10);
	printf("移动次数：%d\n", count1);
	return 0;
}