#include<stdio.h>
int main()
{
	printf("����һ�����׵ļ����������Լ�����λ���ļӼ��˳������� s �����˳�ʹ�ã�\n");
	
	float a,b;
	char c;
	printf("����������Ҫ�����ʽ�ӣ�\n");
	
	
	while(scanf("%f%c%f",&a,&c,&b)==3)
	{
		switch(c)
		{
			case'+':
				printf("=%f\n",a+b);
				break;
			case'-':
				printf("=%f\n",a-b);
				break;
			case'*':
				printf("=%f\n",a*b);
				break;
			case'/':
				printf("=%f\n",a/b);
				break;
			default:
				printf("�Բ��������ڻ�û�����������ʽ"); 
		}
	}
	
	printf("��лʹ�ã����η����ѽ���");
	
	return 0;
 } 
