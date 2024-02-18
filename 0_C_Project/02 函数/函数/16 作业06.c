#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	int right= my_strlen1(str) - 1, left = 0;
	while(right>left)
	{
		//char temp = str[right];
		char temp = *(str + right);//也可以用指针访问数组（指定内存）中的元素
		str[right] = str[left];
		str[left] = temp;
		right--; left++;
	}
}
void reverse_string_plus(char* str)
{
	char tmp = *str;
	int len = my_strlen1(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string_plus(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "Hello";
	reverse_string(arr);
	printf("%s\n", arr);
	reverse_string_plus(arr);
	printf("%s\n", arr);
	return 0;
}