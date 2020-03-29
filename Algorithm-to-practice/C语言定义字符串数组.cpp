#include<stdio.h>
int main()
{
	//定义字符串数组，不加 const 会 warning 
	const char *s[]={"o","rock","paper","scissor"};
	printf("%s",s[2]);
	return 0;
} 
