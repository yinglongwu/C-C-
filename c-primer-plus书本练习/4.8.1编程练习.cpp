#include<stdio.h>
int main(void)
{
	char first[40];
	char last[40];
	
	printf("Please enter your name.\n");
	printf("first name:\n");
	scanf("%s",first);
	printf("last name:\n");
	scanf("%s",last);
	printf("你的名字倒过来就是：%s %s",last,first);
	
	return 0;
}
 
