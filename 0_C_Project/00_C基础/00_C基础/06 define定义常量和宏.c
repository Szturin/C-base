#define _CRT_SECURE_NO_WARNINGS 1

//define�������
#define MAX = 1000

//define�����
//#define ADD(X,Y) X+Y //printf���Ϊ11
//#define ADD(X,Y) ��X+Y������д��
#define ADD(X,Y) ((X)+(Y)) //ģʽ�滻
#include<stdio.h>

int main6()
{
	printf("%d\n", 4 * ADD(2, 3));//4*2+3
	//����ʵ���滻��
	return 0;
}