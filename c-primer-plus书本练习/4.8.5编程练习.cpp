#include<stdio.h>
int main(void)
{
	float speed,wenjian;
	
	printf("�����������ٶȣ�Mb/s��:\n");
	scanf("%f",&speed);
	printf("�������ļ���С��MB����\n");
	scanf("%f",&wenjian);
	printf("At %.2f megabits per second,",speed);
	printf("a file of %.2f megabytes",wenjian);
	printf(" downloads in %.2f seconds.",wenjian*8/speed);
	
	return 0;
}
