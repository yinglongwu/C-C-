#include<stdio.h>
//����k������ѯ
int main()
{
	int i = 0,n = 0,m = 0,j = 0,p = 0,temp = 0;
	int a[1000],b[1000];
	scanf("%d",&n);//�������г���
	for( i = 0; i < n; i++ )//��������Ԫ��
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&m);//����ѯ�ʸ���
	while( m-- )
	{
		int l = 0,r = 0,k = 0;
		scanf("%d%d%d",&l,&r,&k);
		for( i = l - 1; i <= r - 1; i++ )//��l��r֮���Ԫ�ط���һ����������
		{	
			b[j++] = a[i];
			p++;
		}
		for( i = 0; i < p; i++ )//��������Ӵ�С��������
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
		printf("%d\n",b[k-1]);//����������е�k���Ԫ��
		while(j--)
		{
			b[j] = 0;
		}	
		j = 0;
		p = 0;
		temp = 0;//�Ծֲ��������㣬�������´�ѭ��ʹ�ã��˲���ʮ����Ҫ
	}
	return 0;
} 

