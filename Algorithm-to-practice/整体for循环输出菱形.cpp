#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("�����������ӡ�����ε�������\n");
	while(1)
	{
		scanf("%d",&n);
		if(n%2==1)
		 	break;
		else
		{
			printf("������������ż���޷���������:\n");
			continue; 
		}
	}
	
	int blank=n/2;//��һ�еĿո��� 
	
	printf("������£�\n"); 
	for(int i=1;i<n+1;i++)
	{
		for(int k=abs(blank);k>0;k--)  //���ÿ�еĿո�,��Ϊblank����ָ�ֵ����Ҫ abs() ȡ����ֵ 
			printf(" ");
		for(int j=n-2*abs(blank);j>0;j--)  //���ÿ�е� *  
			printf("*");
		printf("\n");
		blank--;  //�ո��� -1 
	}
	return 0;
 } 
