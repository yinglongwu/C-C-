#include<stdio.h>
int main()
{
	int i,n,k;
	char f;
	
	printf("请输入你想使用的字母或数字或符号：\n");
	scanf("%c",&f);
	printf("请输入行数：\n");
	scanf("%d",&n);
	
	printf("开始打印金字塔......\n");
	printf("\n");
	
	for(i=1;i<=n;i++)              //外循环，控制行数 
	{
		for(k=1;k<=n-i;k++)        //内循环，控制每行空格数 
		{
			printf(" ");
		}
		for(int z=1;z<=2*i-1;z++)  //内循环，控制每行字符数 
		{
			printf("%c",f);
		}
		printf("\n");
	}
	printf("\n");
	printf("打印结束\n");
	
	return 0;
 } 
