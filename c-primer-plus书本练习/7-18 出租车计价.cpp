#include<stdio.h>
#include<math.h>
int main()
{
	float licheng;
	int fenzhong,a,b,c,d,e;
	scanf("%f %d",&licheng,&fenzhong);
	
	if(licheng <= 3)
	{
		if(fenzhong < 5)
			printf("10");
		else{
		a = round(10+fenzhong/5*2);
		printf("%d",a);
		}
	}
	if(3 < licheng && licheng<= 10)
	{
		if(fenzhong < 5){
			e = round(10+(licheng-3)*2);
			printf("%d",e);
		}
		
		else{
			b = round(10+(licheng-3)*2+fenzhong/5*2);
			printf("%d",b);
		}
	}
	if(10 < licheng)
	{
		if(fenzhong < 5){
			d = round(24+(licheng-10)*3);
			printf("%d",d);
		}	
		else{
			c = round(24+(licheng-10)*3+fenzhong/5*2);
			printf("%d",c);
		}	
	}
	return 0;
}
