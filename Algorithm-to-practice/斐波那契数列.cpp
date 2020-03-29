#include<stdio.h>

int main()
{
	long long int i,n,f1=1,f2=1,f3;
	scanf("%d",&n);
	if(n<=2)
		printf("%d",1);
	else
	{
		for(i=3;i<=n;i++)
		{
			f3=(f1+f2)%10007;
			f1=f2;
			f2=f3;
		}
		printf("%d",f3);
	}
		
	return 0;
}

