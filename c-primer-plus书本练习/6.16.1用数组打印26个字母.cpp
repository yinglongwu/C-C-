#include<stdio.h>
#define SIZE 26
int main()
{
	char zi_mu[SIZE];
	int i;
	
	for(i = 0; i < 26; i++)
		zi_mu[i] = 'a' + i;
	for(i = 0; i < 26; i++)
		printf("%2c",zi_mu[i]);
		
	return 0;
 } 
