#include<stdio.h>
int main()
{
	int i,n,k;
	char f;
	
	printf("����������ʹ�õ���ĸ�����ֻ���ţ�\n");
	scanf("%c",&f);
	printf("������������\n");
	scanf("%d",&n);
	
	printf("��ʼ��ӡ������......\n");
	printf("\n");
	
	for(i=1;i<=n;i++)              //��ѭ������������ 
	{
		for(k=1;k<=n-i;k++)        //��ѭ��������ÿ�пո��� 
		{
			printf(" ");
		}
		for(int z=1;z<=2*i-1;z++)  //��ѭ��������ÿ���ַ��� 
		{
			printf("%c",f);
		}
		printf("\n");
	}
	printf("\n");
	printf("��ӡ����\n");
	
	return 0;
 } 
