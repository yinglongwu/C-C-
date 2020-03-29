#include<stdio.h>
#define PAGES 959
int main(void)
{
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);//因为待打印的整数有三位数，所以字段宽度自动扩大以符合整数的长度，所以前两个打印出来效果一样 
	printf("*%10d*\n",PAGES);
	printf("*%-10d*\n",PAGES);
	
	return 0;
 } 
