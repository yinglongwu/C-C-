#include<stdio.h>
int a[101],n;  //定义全局变量，这两个变量需要在子函数中使用  
//用 a[101] 是应为这个程序中为了方便理解把 a[0] 省略不用了 ，直接从 a[1] 开始用的                                                                          

void quicksort(int left,int right)  //定义快速排序函数 
{
	int i,j,t,temp;
	if(left>right)
		return;
	
	temp=a[left]; //temp用于存储基准数 
	i=left;
	j=right;
	while(i!=j)  //当哨兵 i 和哨兵 j 没相遇时 
	{
		while(a[j]>=temp && i<j)  //顺序很重要，先从右往左找 
			j--;
		while(a[i]<=temp && i<j)  //再从左往右找 
			i++;	
		
		if(i<j)  //这个if条件好像没什么用，前面 while循环中就包括了 i<j
		{            //当哨兵 i 和 j 没有相遇时，交换两个哨兵发现的数的位置4
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
	a[left]=a[i]; //这一部分跳出了 while 循环即满足条件 i=j ，即 
	a[i]=temp;    //两个哨兵相遇，将他们脚下的数字与基准数交换。 
	
	quicksort(left,i-1);  //递归，原来的一串数被基准数分为了两部分，左半部分 
	quicksort(i+1,right); //和右半部分继续以各自的第一个数为基准数进行快速排序 
} 

int main()
{
	int i,j,t;
	printf("请问你要对几个数进行快速排序（本程序最多支持100个）：\n"); 
	scanf("%d",&n);
	printf("请输入你要进行排序的 %d 个数：\n",n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	quicksort(1,n);
	
	printf("排序的结果为：\n");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
		
	getchar(); 
	return 0;
}
