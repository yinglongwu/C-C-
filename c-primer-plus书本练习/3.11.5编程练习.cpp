#include<stdio.h>
int main(void)
{
	int old;
	
	printf("How old are you?\n");
	scanf("%d",&old);
	
	float seconds;
	
	printf("Your old is %e seconds.",old*3.156e7);
	
	return 0;
}
