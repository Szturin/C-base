#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen strcmp
int main05()
{
	char password[20] = {0};//�����ַ��� �� ��������Ϊ123456

	int i = 0;

	for (i = 0; i < 3; i++)//��������ѭ��
	{
		printf("����������:>");
		scanf("%s", password);//������������ǵ�ַ
		//if(password == "123456") //�ַ����������жϲ�����
		//if (strcmp(password, "123456")) //����ʾ����if��Ҫд�������жϡ�����Ȼ��ֱ��ִ�У�
		if ((strcmp(password, "123456")) == 0)//strcmp,���αȽ�ascii��ֵ
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	//printf("������������������룬�����˳�..."); ֱ��д��һ�䣬����ȷ���ᵼ��������ȷ���������ѭ����Ҳ��ӡ�������
	if (i == 3)
	{
		printf("������������������룬�����˳�...\n");
	}
	return 0;
}