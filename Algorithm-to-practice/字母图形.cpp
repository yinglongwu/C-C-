#include<stdio.h>
#include<math.h>
int main()
{    
	int m,n;    
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)    
	{         
		for(j=0;j<m;j++)                   
			printf("%c",65+abs(i-j));    //abs()������ȡ����ֵ��fabs()�Ը�����ȡ����ֵ      
        printf("\n");    
	}    
	return 0;
}

