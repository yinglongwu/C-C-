#include<stdio.h>
int main()
{
	int n,i,max,min,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		sum=sum+a[i];
	}
	printf("%d\n%d\n%d",max,min,sum);
	return 0;
 } 
