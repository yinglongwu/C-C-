#include<stdio.h>
#define a 3.758
#define b 1.609
int main()
{
	float licheng,qiyou,yingli,jialun;
	
	printf("����������������:");	
    scanf("%f",&licheng) ;
	printf("��������������������");
	scanf("%f",&qiyou);

	yingli = licheng / a;
	jialun = qiyou / b;
	
	printf("����ÿ����������ʻ %.1f Ӣ��",yingli/jialun);
	return 0;
}
