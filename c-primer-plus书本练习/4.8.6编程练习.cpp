#include<stdio.h>
#include<string.h>
int main(void)
{
	char last_name[40];
	char first_name[40];
	int l,f;
	
	printf("Please enter your English name.\n"); 
	printf("Your last name:\n");
	scanf("%s",&last_name);
	printf("Your first name:\n");
	scanf("%s",&first_name);
	
	l=strlen(last_name);
	f=strlen(first_name);
	
	printf("%s %s\n",last_name,first_name);
	printf("%*d %*d\n",l,l,f,f);
	printf("%-*d %-*d\n",l,l,f,f);
	
	return 0;
	
}
