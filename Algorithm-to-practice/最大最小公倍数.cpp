#include<stdio.h>
int main () 
{
	int i;
	long long n;
	scanf("%d",&n);
	long long temp;	//����ż���жϼ�¼(n-1)*(n-2)*(n-3)
	if(n%2 == 0)//ż���ж�
	{	 
		temp = (n-1)*(n-2)*(n-3);
		int judge = 3;
		while(n%judge == 0)//���� ���3 ����Լ��3 5 7 9...
		{	 
			judge ++;	//����ż��
			judge ++;
		}
		long long k = n*(n-1)*(n-judge);	//��ȡ��n, n-judge����С��������ʱ��ֵk 
		if(temp > k)//���� ���3 
		{	 
			printf("%lld",temp);
		} 
		else 
		{
			printf("%lld",k);
		}
	} 
	else//�����ж�
	{
		printf("%lld",n*(n-1)*(n-2));
	}
	return 0;
}

