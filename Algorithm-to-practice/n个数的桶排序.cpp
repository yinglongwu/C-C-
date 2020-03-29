#include<stdio.h>  //对 n 个 0~1000 的整数进行桶排序 
int main()
{
	int book[1001],j,i,t,n;
	
	for(i=0;i<=1000;i++)  //初始化 
		book[i]=0;
		
	printf("请问你要对几个数进行排序：\n");	
	scanf("%d",&n);   
	printf("请输入你要排序的 %d 个数（数的大小范围为 0~1000 ，空格以分隔）：\n",n);
	 
	for(i=1;i<=n;i++)  //计数 
	{
		scanf("%d",&t);
		book[t]++;
	}
	
	for(i=0;i<=1000;i++)  //打印 
		for(j=1;j<=book[i];j++)
			printf("%d ",i);
	
	getchar();
	return 0;
 } 
