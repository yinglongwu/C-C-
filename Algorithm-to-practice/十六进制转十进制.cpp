#include <stdio.h>
#include <string.h>
int main()
{
	char str[8];
	int sum=0,n,i,k=1,m;
	scanf("%s",str);
	n=strlen(str);
	for(i=n;i>0;i--)
	{
		if(str[i-1]>='0'&&str[i-1]<='9')
		{
			m=str[i-1]-'0';
		}
		else
		{
			m=str[i-1]-'A'+10;
		} 
		sum+=m*k;
		k*=16;
		m=0;
	}
	printf("%u",sum);
	return 0;
}
