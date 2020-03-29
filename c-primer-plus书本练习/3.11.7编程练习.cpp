#include<stdio.h>
int main(void)
{
	float tall; 
	
	printf("请输入身高（英寸）：");
	scanf("%f",&tall);
	printf("你的身高是%f厘米",tall*2.54);
	
	return 0;
}
