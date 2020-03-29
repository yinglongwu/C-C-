#include<stdio.h>
int main()
{
	int s,y,a[2],i;
	for(i=1000;i<=9999;i++)
	{
		s=i/100;
		y=i%100;
		a[0]=y%10;
		a[1]=y/10;
		if(s==a[0]*10+a[1])
			printf("%d\n",i);
	}
	return 0;
}
