#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include <stdio.h>


int main2()
{
	int n = 1;
	int m = 2;
	switch (n)//switchִ��һ�������жϣ�Ȼ��ָ������Ӧ��case�����
	{
	case 1:
		m++;//n=1,m=3
	case 2://�˴�Ҳ��ִ�У���Ϊû���Ͼ�û��break����, case����Ҫ�ж�����,ֱ��ִ���������
		n++;//n=2,m=3
	case 3://ִ��
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;//m=4,n=3
			break;//break�����Լ����ڵ�switch���
		}
	case 4:
		m++;//m=5,n=3
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}