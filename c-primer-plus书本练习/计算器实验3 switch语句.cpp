#include<stdio.h>
int main()
{
	printf("这是一个简易的计算器，可以计算两位数的加减乘除（输入 s 可以退出使用）\n");
	
	float a,b;
	char c;
	printf("请输入你想要计算的式子：\n");
	
	
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
				printf("对不起，我现在还没有能力计算该式"); 
		}
	}
	
	printf("感谢使用，本次服务已结束");
	
	return 0;
 } 
