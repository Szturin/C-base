#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����Ķ���
//�Ƚ����������������ֵ
int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//����z
}

//�����������ͱ�����ֵ��void��ʾ��������������κ�ֵ��Ҳ����Ҫ����
//swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��
void Swap1(int x, int y)
{
	int temp = x;//temp = 0
	x = y;// x = 1
	y = temp;//y = 0
}

//ͨ��ָ�룬����������ֵ
void Swap2(int* pa, int* pb)//ʵ���ϣ�����Ҳ�����������µı������βΣ������ڴ�ŵ�ַ
{
	//��ֵ�����ݸ���Ӧ��ַ���ڴ�ռ䣬�ɹ��ı��˱���a,b��ֵ
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}


int main02()
{
	int a = 10;
	int b = 20;
	//�����ĵ���
	int max = get_max(a, b);

	printf("%d\n", max);

	//дһ������ -�����������ͱ�����ֵ
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap1(a, b);//�ββ�Ӱ��ʵ�Σ�ʵ����Swap���������������ַ�����ݵ�����ȫ��ͬ���ڴ�ռ�
	printf("������a=%d b=%d\n", a, b);

	int* pa = &a;//pa����һ��ָ�����
	*pa = 15;//ͨ��pa������ָ����ַ�ı�����ֵ
	printf("%d\n", a);
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}