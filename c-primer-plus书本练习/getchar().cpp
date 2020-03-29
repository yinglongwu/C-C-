#include<stdio.h>
int main()
{
	char c;
	c = getchar();    //输入一个字符，例如 1 先储存在getchar（）里 
	printf("%c",c);   //打印出 1 所代表的整数 49   若改为%c则输出还为 1  
	return 0;
	
}
