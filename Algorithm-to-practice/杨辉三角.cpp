#include<stdio.h>
#include<string.h>  //���� memset() ���� 
int num[35][35];
int main()
{
	memset(num,0,sizeof(num));//����ά���� num ��ʼ��Ϊ�� 
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		num[i][0]=1;
		num[i][i]=1;	
	} 
	for(i=2;i<n;i++)
		for(j=1;j<i;j++)
			num[i][j]=num[i-1][j-1]+num[i-1][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d ",num[i][j]);
		printf("\n");
	}
	return 0;
}
