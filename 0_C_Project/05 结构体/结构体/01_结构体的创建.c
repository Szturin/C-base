#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct B
{
	char c;
	short s;
	double d;
};

struct Stu//��
{
	//��Ա����
	struct B sb;//�ṹ��ĳ�Ա����������Ľṹ��
	char name[20];//����
	int age;//����
	char id[20];
} s1, s2;//s1��s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���

//�ṹ��ĵ���
int main1()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w',20,3.14 }, "����", 30, "20200534" };//����

	printf("%c\n",s.sb.c);
	printf("%s\n", s.id);
	
	struct Stu* ps = &s;//�ṹ��ָ��
	printf("%c\n",(*ps).sb.c);
	printf("%c\n", ps->sb.c);//ps��ָ�������->������,sb�Ǳ�������ָ��ֻ����.������

	return 0;
}