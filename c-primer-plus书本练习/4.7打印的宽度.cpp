#include<stdio.h>
#define PAGES 959
int main(void)
{
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);//��Ϊ����ӡ����������λ���������ֶο���Զ������Է��������ĳ��ȣ�����ǰ������ӡ����Ч��һ�� 
	printf("*%10d*\n",PAGES);
	printf("*%-10d*\n",PAGES);
	
	return 0;
 } 
