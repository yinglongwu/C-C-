#include<stdio.h>
int main()
{
	double a,b;
	char c;
	
	printf("����һ�����׵ļ����������Լ�����λ���ļӼ��˳������� s �����˳�ʹ�ã�\n");
	
		while (scanf("%lf%c%lf",&a,&c,&b)==3)
		{
			if(c=='+') 
			{
				printf("=%g\n",a+b);
			}
			if(c=='-')
			{
				printf("=%g\n",a-b);
			} 
			if(c=='*')
			{
				printf("=%g\n",a*b);
			}
			if(c=='/')
			{
				printf("=%g\n",a/b);
			} 
		}
	
	printf("���η����ѽ�����");
	
	 return 0;
}
