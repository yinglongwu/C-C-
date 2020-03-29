#include<stdio.h>
int main()
{
	int a[100],i,j,t,n;
	printf("请输入你要冒泡排序的数的个数（本程序最多对101个数进行冒泡排序）：\n");
	scanf("%d",&n);
	printf("请输入这 %d 个数，空格以分隔：\n",n);
	for(i=0;i<n;i++)  //将要排序的数字存到数组中 
		scanf("%d",&a[i]);
		
	for(i=0;i<n-1;i++)  //进行冒泡排序（对 n 个数的排序，只需进行 n-1 趟操作） 
	{
		for(j=0;j<n-i-1;j++)  //注意 n-i-1 是因为下面的 j+1 ，还可以写成是： for(j=1;j<n-i;j++)    
		{                      //                                            {  
			if(a[j]<a[j+1])  //交换顺序                                       	if(a[j-1]<a[j])
			{                       //                                          {
				t=a[j];            //                                            	t=a[j-1];
				a[j]=a[j+1];       //                                               a[j-1]=a[j];
				a[j+1]=t;          //                                               a[j]=t;
			}                     //                                             }
		}                        //                                           }
	}	
	printf("排好的顺序为：\n");  
	for(i=0;i<n;i++)  //打印 
		printf("%d ",a[i]);
	
	getchar();
	return 0;
}
