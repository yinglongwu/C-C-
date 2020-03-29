#include<stdio.h>
int main()
{
	int i,g,s,b;
	for(i = 100;i < 1000; i++)
	{
		b = i/100;
		s = (i - b*100)/10;
		g = i%10;
		if(i == b*b*b + s*s*s + g*g*g)
			printf("%d\n",i);		
	}
	return 0;
 } 
