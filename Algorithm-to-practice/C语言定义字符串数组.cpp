#include<stdio.h>
int main()
{
	//�����ַ������飬���� const �� warning 
	const char *s[]={"o","rock","paper","scissor"};
	printf("%s",s[2]);
	return 0;
} 
