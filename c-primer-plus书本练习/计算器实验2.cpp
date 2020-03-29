#include<stdio.h>
int jia(int a,int b)
{
	int s;
	s=a+b;
	return s;
}
int jian(int a,int b)
{
	int s;
	s=a-b;
	return s;
}
int cheng(int a,int b)
{
	int s;
	s=a*b;
	return s;
}
int chu(int a,int b)
{
	int s;
	s=a/b;
	return s;
}
int main()
{
	int a,b,x,y,i;
	char c;
	
	printf("ÇëÊäÈëÔËËãÊ½£º\n");
	scanf("%f%c%f",&a,&c,&b);
	
	x=a;
	y=b;
	
	for(i=0;i<10000;i++)
	{
		if(c=='+')x=jia(x,y);
		else if(c=='-')x=jian(x,y);
		else if(c=='*')x=cheng(x,y);
		else if(c=='/')x=chu(x,y);
		c=getchar();
		if(c=='=')
		{
			printf("%d\n,x");
			break;
		}
		scanf("%d",&y);
	}
}


