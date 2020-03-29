#include<stdio.h>
int main(void)
{
	float tall;
	char name[40];
	
	printf("请输入身高（厘米）：\n");
	scanf("%f",&tall);
	printf("请输入姓名：\n");
	scanf("%s",&name);
	printf("%s,你的身高是%.2f米\n",name,tall/100);
	
	return 0;
}
