#include<stdio.h>
int main()
{
	int k,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=4;j++)
		printf(" ");
		for(k=1;k<=2*i-1;k++)
		printf("*");
	printf("\n");
	}
	
	return 0;

} 
