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
			printf("%c",65+abs(i-j));    //abs()对整形取绝对值，fabs()对浮点型取绝对值      
        printf("\n");    
	}    
	return 0;
}

