#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("请输入你想打印的菱形的行数：\n");
	while(1)
	{
		scanf("%d",&n);
		if(n%2==1)
		 	break;
		else
		{
			printf("请输入奇数，偶数无法构成菱形:\n");
			continue; 
		}
	}
	
	int blank=n/2;//第一行的空格数 
	
	printf("结果如下：\n"); 
	for(int i=1;i<n+1;i++)
	{
		for(int k=abs(blank);k>0;k--)  //输出每行的空格,因为blank会出现负值所以要 abs() 取绝对值 
			printf(" ");
		for(int j=n-2*abs(blank);j>0;j--)  //输出每行的 *  
			printf("*");
		printf("\n");
		blank--;  //空格数 -1 
	}
	return 0;
 } 
