#include<stdio.h>
int main()
{
	float n;
	int t=0;
	while(1)
	{
		scanf("%f",&n);
		if(n<=0)
			printf("����������:\n");
		else if(n!=(int) n)
		{
			printf("����������:\n");
		//	continue;
		}	
		else
			break;
	}
	
	for(int i=1;i<=n;i++)
	{
		char Enter,p;
		printf("��%d�֣������룺\n",i);
		scanf("%c%c",&Enter,&p);
		printf("���������%c\n",p);
	}
	
	printf("��Ϸ����һ��%d��\n",n);
	return 0; 
} 
