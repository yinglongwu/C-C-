#include<stdio.h>
struct student
{
	char name[21];
	char score;
};        //���ﴴ����һ���ṹ���������������ͷ��� 

int main()
{
	struct student a[100],t;
	int i,j,n;
	printf("������Ҫ�Լ����˵ķ�����������\n"); 
	scanf("%d",&n);   //����һ���� n  
	printf("�������⼸���˵������ͷ������м��ÿո����������һ���˵������ͷ�����һ�� Enter ����\n"); 
	for(i=1;i<=n;i++)  //ѭ������ n �������ͷ��� 
		scanf("%s %d",a[i].name,&a[i].score);
	
	for(i=1;i<=n-1;i++)  //�������������� 
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j].score<a[j+1].score)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("����Ľ��Ϊ��\n");
	for(i=1;i<=n;i++)  //������� 
		printf("%s \n",a[i].name);
		
	getchar();
	return 0;
}
