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
};//s1��s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}


int main()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w',20,3.14 }, "����", 30, "20200534" };//����
	//дһ��������ӡs������
	print1(s);//��s��tҪ������s�ȴ�Ŀռ�
	print2(&s);//ʹ��ָ�봫�ݲ�������,ָ���Ǵ�ֵ����,����������һ����ַ
	return 0;
}

//�������õĲ���ѹջ
//ջ��һ�����ݽṹ���Ƚ��ĺ����������ȳ�
//��ջ������ݳ�֮Ϊѹջ
//ÿһ���������õĻ����ڴ��ջ���Ͽ���һ��ռ�

//������ջ֡�Ĵ��������١�