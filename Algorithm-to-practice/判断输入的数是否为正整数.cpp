#include<stdio.h>
int main()
{
	float n;
	int t=0;
	while(1)
	{
		scanf("%f",&n);
		if(n<=0)
			printf("请重新输入:\n");
		else if(n!=(int) n)
		{
			printf("请重新输入:\n");
		//	continue;
		}	
		else
			break;
	}
	
	for(int i=1;i<=n;i++)
	{
		char Enter,p;
		printf("第%d局，请输入：\n",i);
		scanf("%c%c",&Enter,&p);
		printf("你输入的是%c\n",p);
	}
	
	printf("游戏结束一共%d局\n",n);
	return 0; 
} 
