#include<stdio.h>
#include<string.h>
int main()
{
	char name[40];
	int a;
	
	printf("请输入你的姓名：");
	scanf("%s",&name);
	
	printf("\"%s\"\n",name); 
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	
	a=strlen(name);
	
	printf("\"%*s\"\n",a+3,name);//表示宽度为a+3 
	
	return 0;
		
 } 
