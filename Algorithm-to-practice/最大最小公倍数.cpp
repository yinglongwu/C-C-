#include<stdio.h>
int main () 
{
	int i;
	long long n;
	scanf("%d",&n);
	long long temp;	//用于偶数判断记录(n-1)*(n-2)*(n-3)
	if(n%2 == 0)//偶数判断
	{	 
		temp = (n-1)*(n-2)*(n-3);
		int judge = 3;
		while(n%judge == 0)//处理 标记3 ，公约数3 5 7 9...
		{	 
			judge ++;	//跳过偶数
			judge ++;
		}
		long long k = n*(n-1)*(n-judge);	//获取到n, n-judge无最小公倍数是时的值k 
		if(temp > k)//处理 标记3 
		{	 
			printf("%lld",temp);
		} 
		else 
		{
			printf("%lld",k);
		}
	} 
	else//奇数判断
	{
		printf("%lld",n*(n-1)*(n-2));
	}
	return 0;
}

