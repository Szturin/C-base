#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ�������c���Դ������µ����ͳ���
//����һ��ѧ��

struct Stu
{
	char name[20];//����
	int age; //����
	char sex[5];//�Ա�
	char id[15];//ѧ��
};

int main8()
{
	//�ṹ��ĳ�ʼ��
	struct Stu s = { "����",18,"��","20241574" };
	printf("����:%s ����:%d �Ա�:%s ѧ��:%s\n", s.name, s.age, s.sex, s.id);

	//��������->
	struct Stu* ps = &s;
	printf("����:%s ����:%d �Ա�:%s ѧ��:%s\n", ps->name, ps->age, ps->sex, ps->id);
	return 0;
  }