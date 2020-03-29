#include<stdio.h>
#include<float.h>
int main()
{
	float a = 1.0 / 3.0;
	double b = 1.0 /3.0;
	printf("float valuse:");
	printf(" %.4f %.12f %.16f\n",a,a,a);
	printf("double values:");
	printf("%.4f %.12f %.16f\n",b,b,b);
	printf("FLT_DIG: %d\n",FLT_DIG);
	printf("DBL_DIG: %d\n",DBL_DIG);
	return 0;
 } 
