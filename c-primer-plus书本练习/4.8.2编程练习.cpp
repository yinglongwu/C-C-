#include<stdio.h>
#include<string.h>
int main()
{
	char name[40];
	int a;
	
	printf("���������������");
	scanf("%s",&name);
	
	printf("\"%s\"\n",name); 
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	
	a=strlen(name);
	
	printf("\"%*s\"\n",a+3,name);//��ʾ���Ϊa+3 
	
	return 0;
		
 } 
