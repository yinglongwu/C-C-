#include<stdio.h>
int main()
{
	double a,b;
	char c;
	
	printf("这是一个简易的计算器，可以计算两位数的加减乘除（输入 s 可以退出使用）\n");
	
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
	
	printf("本次服务已结束！");
	
	 return 0;
}
