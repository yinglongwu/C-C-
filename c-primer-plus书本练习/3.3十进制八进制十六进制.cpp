#include<stdio.h>
int main(void)
{
	int x;
	
	scanf("%d",&x);
	printf("十进制=%d; 八进制=%o; 十六进制=%x\n",x,x,x);
	printf("dec=%d; otcal=%#o; hex=%#x\n",x,x,x);
	
	return 0;
}
