#include<stdio.h>
#define a 3.758
#define b 1.609
int main()
{
	float licheng,qiyou,yingli,jialun;
	
	printf("请输入里程数（公里）:");	
    scanf("%f",&licheng) ;
	printf("请输入汽油量（升）：");
	scanf("%f",&qiyou);

	yingli = licheng / a;
	jialun = qiyou / b;
	
	printf("消耗每加仑汽油行驶 %.1f 英里",yingli/jialun);
	return 0;
}
