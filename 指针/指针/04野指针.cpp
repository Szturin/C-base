#include<iostream>
using namespace std;

int main4()
{
	//ָ�����ָ���ڴ��ַ���Ϊ0x0011�Ŀռ�
	int* p = (int*)0x0011;
	//����Ұָ�뱨��
	cout << *p << endl;
	system("pause");
	return(0);
}
//�ܽ᣺��ָ���Ұָ�붼������������Ŀռ䣬���ǷǷ��ռ䣬���ܷ���