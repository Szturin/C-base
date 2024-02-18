#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main04()
{
	char arr1[] = "Welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;

	for (;left <= right; left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//ÐÝÃßÒ»Ãë
		system("cls");//Çå¿ÕÆÁÄ»
	}


	return 0;
}