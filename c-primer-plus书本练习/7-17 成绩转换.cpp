#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a >= 90)
		printf("A");
	if(80 <= a && a < 90)
		printf("B");
	if(70 <= a && a < 80)
		printf("C");
	if(60 <= a && a < 70)
		printf("D");
	if(a < 60)
		printf("E");
	return 0;
 } 
