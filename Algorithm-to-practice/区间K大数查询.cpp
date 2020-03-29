#include<stdio.h>
//区间k大数查询
int main()
{
	int i = 0,n = 0,m = 0,j = 0,p = 0,temp = 0;
	int a[1000],b[1000];
	scanf("%d",&n);//输入序列长度
	for( i = 0; i < n; i++ )//输入序列元素
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&m);//输入询问个数
	while( m-- )
	{
		int l = 0,r = 0,k = 0;
		scanf("%d%d%d",&l,&r,&k);
		for( i = l - 1; i <= r - 1; i++ )//将l到r之间的元素放在一个新数组中
		{	
			b[j++] = a[i];
			p++;
		}
		for( i = 0; i < p; i++ )//对新数组从大到小进行排序
		{	
			for( j = p - 1; j > i; j-- )
			{
				if( b[j] > b[j-1])
				{
					temp = b[j-1];
					b[j-1] = b[j];
					b[j] = temp;	
				}
			}
		}	
		printf("%d\n",b[k-1]);//输出新数组中第k大的元素
		while(j--)
		{
			b[j] = 0;
		}	
		j = 0;
		p = 0;
		temp = 0;//对局部变量清零，以满足下次循环使用，此步骤十分重要
	}
	return 0;
} 

