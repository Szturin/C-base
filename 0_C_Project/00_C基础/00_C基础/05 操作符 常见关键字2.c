#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.static ���ξֲ�����
//2.static ����ȫ�ֱ���
//3.static ���κ���

extern int g_val;//�����ⲿ����
//static int g_val = 100;  //static ����ȫ�ֱ���ʹ��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//extern int g_val;����

//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
//���Ǳ�static����֮�󣬾ͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����

//static int Add(int x, int y)
//{
//	return x + y;
//}
//static ���κ�����ʹ�ú���ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ�ã�
//�����ϣ�static�ǽ��������ⲿ�������Ա���ڲ��������ԣ���static����ȫ�ֱ������ƣ�

void test()
{
	//int a =1; 10��2
	static int a = 1; //2��11 , a �������岻�����٣��ٴν��뺯���屣����һ�ε�ֵ
	a++;
	printf("%d\n", a);
}

//��������
extern int Add(int, int);//������test01.c��

int main5()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	printf("%d\n", g_val);
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d", sum);
	return 0;
}
//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ� 