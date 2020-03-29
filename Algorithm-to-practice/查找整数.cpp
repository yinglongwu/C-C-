#include<stdio.h>
int main()
{
	int i,n,s,b=0;
	scanf("%d",&n);
	int a[n+1];
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
		if(a[i]==s)
		{ 
			b=i;
			break;
		} 
	}
	
	if(b==0)
		printf("-1");
	else
		printf("%d",b);
		
	return 0;
}
