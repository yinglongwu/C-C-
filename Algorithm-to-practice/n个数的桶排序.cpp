#include<stdio.h>  //�� n �� 0~1000 ����������Ͱ���� 
int main()
{
	int book[1001],j,i,t,n;
	
	for(i=0;i<=1000;i++)  //��ʼ�� 
		book[i]=0;
		
	printf("������Ҫ�Լ�������������\n");	
	scanf("%d",&n);   
	printf("��������Ҫ����� %d ���������Ĵ�С��ΧΪ 0~1000 ���ո��Էָ�����\n",n);
	 
	for(i=1;i<=n;i++)  //���� 
	{
		scanf("%d",&t);
		book[t]++;
	}
	
	for(i=0;i<=1000;i++)  //��ӡ 
		for(j=1;j<=book[i];j++)
			printf("%d ",i);
	
	getchar();
	return 0;
 } 
