#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һ���ڴ浥Ԫ��һ��byte:�ֽ� 
//һ��byte��8��bit����,1��bitΪһ����ַ������һ��8����ַ  

int main7()
{
	int a = 100;
	printf("%p\n", &a);//%p���ڴ�ӡ��ַ;
	int *pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�����
	//* ˵�� pa��ָ�����
	//int ˵��paִ�ж�����int���͵�
	char ch = 'w';
	char* pc = &ch;
	
	*pa = 20;//*�����ò�����*pa����ͨ��pa����ĵ�ַ���ҵ�a
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//32λ������4���ֽ�
	//64λ������8���ֽ�
	return 0;
}
