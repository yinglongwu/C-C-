#include<stdio.h>
int main(void)
{
	float tall;
	char name[40];
	
	printf("��������ߣ����ף���\n");
	scanf("%f",&tall);
	printf("������������\n");
	scanf("%s",&name);
	printf("%s,��������%.2f��\n",name,tall/100);
	
	return 0;
}
