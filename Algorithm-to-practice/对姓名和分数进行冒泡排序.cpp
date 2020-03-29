#include<stdio.h>
struct student
{
	char name[21];
	char score;
};        //这里创建了一个结构体用来储存姓名和分数 

int main()
{
	struct student a[100],t;
	int i,j,n;
	printf("请问你要对几个人的分数进行排序：\n"); 
	scanf("%d",&n);   //输入一个数 n  
	printf("请输入这几个人的姓名和分数，中间用空格隔开，输入一个人的姓名和分数后按一次 Enter 键：\n"); 
	for(i=1;i<=n;i++)  //循环读入 n 个人名和分数 
		scanf("%s %d",a[i].name,&a[i].score);
	
	for(i=1;i<=n-1;i++)  //按分数进行排序 
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j].score<a[j+1].score)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("排序的结果为：\n");
	for(i=1;i<=n;i++)  //输出人名 
		printf("%s \n",a[i].name);
		
	getchar();
	return 0;
}
